/*
 * XREFs of MiUnlockVadShared @ 0x1402BA960
 * Callers:
 *     MiObtainReferencedVadEx @ 0x1402FBE30 (MiObtainReferencedVadEx.c)
 *     MiHotPatchProcess @ 0x1407F2D08 (MiHotPatchProcess.c)
 *     NtAreMappedFilesTheSame @ 0x1408E8130 (NtAreMappedFilesTheSame.c)
 *     MmIsFileMapped @ 0x1408EF744 (MmIsFileMapped.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140967B50 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiReferenceCfgVad @ 0x140A954F0 (MiReferenceCfgVad.c)
 * Callees:
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14025CDA0 (KiAbEntryFreeAndEnableInterrupts.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUnlockVadShared(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  struct _KTHREAD *CurrentThread; // r11
  _KLOCK_ENTRIES *KernelAbEntries; // r8
  unsigned int v6; // eax
  __int64 v7; // r9
  char *v8; // r10
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  int v13; // ett

  v2 = a2 + 40;
  *(_DWORD *)(a1 + 1448) &= ~0x4000u;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 40), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v2);
  CurrentThread = KeGetCurrentThread();
  _disable();
  KernelAbEntries = CurrentThread->KernelAbEntries;
  v6 = 0;
  v7 = v2 & 0x7FFFFFFFFFFFFFFCLL;
  while ( v6 < KernelAbEntries->EntryCount )
  {
    v8 = (char *)KernelAbEntries + 88 * v6;
    a2 = *((_QWORD *)v8 + 2);
    if ( (a2 & 0x7FFFFFFFFFFFFFFCLL) == v7 && v8[26] && (a2 & 1) == 0 )
    {
      v8[26] = 0;
      result = KiAbEntryFreeAndEnableInterrupts((__int64)(v8 + 16), (ULONG_PTR)CurrentThread, v2, 1, 0LL);
      goto LABEL_14;
    }
    ++v6;
  }
  result = *((unsigned int *)&CurrentThread->MiscFlags + 1);
  if ( (result & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v2, 0LL, 0LL);
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
      return KiCheckForKernelApcDelivery(CurrentPrcb, a2, SchedulerAssist, v7);
  }
  return result;
}
