/*
 * XREFs of PspUnlockProcessShared @ 0x14028E8F0
 * Callers:
 *     PspApplyCoreIsolationPolicy @ 0x140776A18 (PspApplyCoreIsolationPolicy.c)
 *     PspAssignPrimaryToken @ 0x140777290 (PspAssignPrimaryToken.c)
 *     PfpPrivSourceEnum @ 0x14085F9A0 (PfpPrivSourceEnum.c)
 *     NtSetInformationThread @ 0x1408E8B60 (NtSetInformationThread.c)
 *     PspGetPreviousProcessThread @ 0x1408EF16C (PspGetPreviousProcessThread.c)
 *     DbgkForwardException @ 0x1408F32F0 (DbgkForwardException.c)
 *     PsGetProcessDeepFreezeStats @ 0x1408F3CEC (PsGetProcessDeepFreezeStats.c)
 *     NtQueryInformationProcess @ 0x140995530 (NtQueryInformationProcess.c)
 *     PsCaptureExceptionPort @ 0x140A15A5C (PsCaptureExceptionPort.c)
 *     PspInheritSyscallProvider @ 0x140A4E06C (PspInheritSyscallProvider.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14028D3B0 (KiAbEntryFreeAndEnableInterrupts.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall PspUnlockProcessShared(__int64 a1)
{
  ULONG_PTR v1; // rbx
  struct _KTHREAD *CurrentThread; // r11
  _KLOCK_ENTRIES *KernelAbEntries; // r8
  unsigned int v4; // eax
  __int64 v5; // r9
  char *v6; // r10
  __int64 v7; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v11; // eax
  __int64 v12; // rdx
  unsigned __int32 v13; // ett

  v1 = a1 + 456;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 456), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 456));
  CurrentThread = KeGetCurrentThread();
  _disable();
  KernelAbEntries = CurrentThread->KernelAbEntries;
  v4 = 0;
  v5 = v1 & 0x7FFFFFFFFFFFFFFCLL;
  while ( v4 < KernelAbEntries->EntryCount )
  {
    v6 = (char *)KernelAbEntries + 88 * v4;
    v7 = *((_QWORD *)v6 + 2);
    if ( (v7 & 0x7FFFFFFFFFFFFFFCLL) == v5 && v6[26] && (v7 & 1) == 0 )
    {
      v6[26] = 0;
      KiAbEntryFreeAndEnableInterrupts((__int64)(v6 + 16), (ULONG_PTR)CurrentThread, v1, 1LL, 0LL);
      return KeLeaveCriticalRegionThread();
    }
    ++v4;
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v1, 0LL, 0LL);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v11 = *SchedulerAssist;
    do
    {
      v12 = v11;
      LODWORD(v12) = v11 & 0xFFDFFFFF;
      v13 = v11;
      v11 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v11 & 0xFFDFFFFF, v11);
    }
    while ( v13 != v11 );
    if ( (v11 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(CurrentPrcb, v12, SchedulerAssist, v5);
  }
  _enable();
  return KeLeaveCriticalRegionThread();
}
