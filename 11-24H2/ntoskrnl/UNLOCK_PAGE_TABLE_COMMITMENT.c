/*
 * XREFs of UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1402BAD10
 * Callers:
 *     MiCommitExistingVad @ 0x140213020 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140236630 (MiSetProtectionOnSection.c)
 *     MiRemoveVad @ 0x1402601E8 (MiRemoveVad.c)
 *     MmOutSwapVirtualAddresses @ 0x140404108 (MmOutSwapVirtualAddresses.c)
 *     MmOutSwapWorkingSet @ 0x140404630 (MmOutSwapWorkingSet.c)
 *     MiCommitPageTableRangesForVad @ 0x1404050D8 (MiCommitPageTableRangesForVad.c)
 *     MiSplitPrivatePage @ 0x1404051C4 (MiSplitPrivatePage.c)
 *     MiDeleteEmptyPageTables @ 0x140405978 (MiDeleteEmptyPageTables.c)
 *     MiPerformVadSplitting @ 0x140405FC8 (MiPerformVadSplitting.c)
 *     MiSplitReducedCommitClonePage @ 0x1404F9378 (MiSplitReducedCommitClonePage.c)
 *     MiFreeToSubAllocatedRegion @ 0x1408DB54C (MiFreeToSubAllocatedRegion.c)
 *     MiInsertVadCharges @ 0x1408E2418 (MiInsertVadCharges.c)
 *     MmAssignProcessToJob @ 0x1408E8398 (MmAssignProcessToJob.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1409C33C4 (MiAllocateFromSubAllocatedRegion.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1409C3660 (MiAllocateNewSubAllocatedRegion.c)
 * Callees:
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14025CDA0 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall UNLOCK_PAGE_TABLE_COMMITMENT(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rdi
  struct _KTHREAD *CurrentThread; // r11
  _KLOCK_ENTRIES *KernelAbEntries; // r8
  __int64 v6; // r9
  unsigned int i; // eax
  char *v8; // r10
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  int v13; // ett

  v3 = a2 + 608;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 608), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 608));
  CurrentThread = KeGetCurrentThread();
  _disable();
  KernelAbEntries = CurrentThread->KernelAbEntries;
  v6 = v3 & 0x7FFFFFFFFFFFFFFCLL;
  for ( i = 0; i < KernelAbEntries->EntryCount; ++i )
  {
    v8 = (char *)KernelAbEntries + 88 * i;
    a2 = *((_QWORD *)v8 + 2);
    if ( (a2 & 0x7FFFFFFFFFFFFFFCLL) == v6 && v8[26] && (a2 & 1) == 0 )
    {
      v8[26] = 0;
      result = KiAbEntryFreeAndEnableInterrupts((__int64)(v8 + 16), (ULONG_PTR)CurrentThread, v3, 1, 0LL);
      goto LABEL_14;
    }
  }
  result = *((unsigned int *)&CurrentThread->MiscFlags + 1);
  if ( (result & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v3, 0LL, 0LL);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    LODWORD(result) = *SchedulerAssist;
    do
    {
      a2 = (unsigned int)result;
      LODWORD(a2) = result & 0xFFDFFFFF;
      v13 = result;
      result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
    }
    while ( v13 != (_DWORD)result );
    if ( (result & 0x200000) != 0 )
      result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  _enable();
LABEL_14:
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    result = a1 + 152;
    if ( *(_QWORD *)result != result )
      return KiCheckForKernelApcDelivery(CurrentPrcb, a2, SchedulerAssist, v6);
  }
  return result;
}
