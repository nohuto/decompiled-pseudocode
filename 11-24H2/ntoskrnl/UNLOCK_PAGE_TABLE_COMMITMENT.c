/*
 * XREFs of UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140362450
 * Callers:
 *     MiSetProtectionOnSection @ 0x1402107C0 (MiSetProtectionOnSection.c)
 *     MiRemoveVad @ 0x1402907F8 (MiRemoveVad.c)
 *     MiCommitExistingVad @ 0x140306380 (MiCommitExistingVad.c)
 *     MmOutSwapVirtualAddresses @ 0x1403C64C8 (MmOutSwapVirtualAddresses.c)
 *     MmOutSwapWorkingSet @ 0x1403C6F10 (MmOutSwapWorkingSet.c)
 *     MiCommitPageTableRangesForVad @ 0x1403C7634 (MiCommitPageTableRangesForVad.c)
 *     MiSplitPrivatePage @ 0x1403C7720 (MiSplitPrivatePage.c)
 *     MiDeleteEmptyPageTables @ 0x1403C7ED4 (MiDeleteEmptyPageTables.c)
 *     MiPerformVadSplitting @ 0x1403C877C (MiPerformVadSplitting.c)
 *     MiSplitReducedCommitClonePage @ 0x1404F6C58 (MiSplitReducedCommitClonePage.c)
 *     MmAssignProcessToJob @ 0x1408D8B78 (MmAssignProcessToJob.c)
 *     MiFreeToSubAllocatedRegion @ 0x1408D9778 (MiFreeToSubAllocatedRegion.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1408DD544 (MiAllocateNewSubAllocatedRegion.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1408DE814 (MiAllocateFromSubAllocatedRegion.c)
 *     MiInsertVadCharges @ 0x140918FC8 (MiInsertVadCharges.c)
 * Callees:
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14028D3B0 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
      result = KiAbEntryFreeAndEnableInterrupts((__int64)(v8 + 16), (ULONG_PTR)CurrentThread, v3, 1LL, 0LL);
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
