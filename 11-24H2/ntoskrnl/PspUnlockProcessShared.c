/*
 * XREFs of PspUnlockProcessShared @ 0x14025E2E0
 * Callers:
 *     PspApplyCoreIsolationPolicy @ 0x1407767F8 (PspApplyCoreIsolationPolicy.c)
 *     PspAssignPrimaryToken @ 0x140777070 (PspAssignPrimaryToken.c)
 *     PfpPrivSourceEnum @ 0x1408EE170 (PfpPrivSourceEnum.c)
 *     NtSetInformationThread @ 0x140911410 (NtSetInformationThread.c)
 *     DbgkForwardException @ 0x140938C20 (DbgkForwardException.c)
 *     PsGetProcessDeepFreezeStats @ 0x14093961C (PsGetProcessDeepFreezeStats.c)
 *     PspGetPreviousProcessThread @ 0x14094ABFC (PspGetPreviousProcessThread.c)
 *     NtQueryInformationProcess @ 0x1409AB830 (NtQueryInformationProcess.c)
 *     PsCaptureExceptionPort @ 0x140A2095C (PsCaptureExceptionPort.c)
 *     PspInheritSyscallProvider @ 0x140A5611C (PspInheritSyscallProvider.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14025CDA0 (KiAbEntryFreeAndEnableInterrupts.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall PspUnlockProcessShared(__int64 a1)
{
  ULONG_PTR v1; // rbx
  struct _KTHREAD *CurrentThread; // r11
  _KLOCK_ENTRIES *KernelAbEntries; // r8
  unsigned int i; // eax
  char *v5; // r10
  __int64 v6; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v10; // eax
  signed __int32 v11; // ett

  v1 = a1 + 456;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 456), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 456));
  CurrentThread = KeGetCurrentThread();
  _disable();
  KernelAbEntries = CurrentThread->KernelAbEntries;
  for ( i = 0; i < KernelAbEntries->EntryCount; ++i )
  {
    v5 = (char *)KernelAbEntries + 88 * i;
    v6 = *((_QWORD *)v5 + 2);
    if ( (v6 & 0x7FFFFFFFFFFFFFFCLL) == (v1 & 0x7FFFFFFFFFFFFFFCLL) && v5[26] && (v6 & 1) == 0 )
    {
      v5[26] = 0;
      KiAbEntryFreeAndEnableInterrupts((__int64)(v5 + 16), (ULONG_PTR)CurrentThread, v1, 1, 0LL);
      return KeLeaveCriticalRegionThread();
    }
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v1, 0LL, 0LL);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v10 = *SchedulerAssist;
    do
    {
      v11 = v10;
      v10 = _InterlockedCompareExchange(SchedulerAssist, v10 & 0xFFDFFFFF, v10);
    }
    while ( v11 != v10 );
    if ( (v10 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  _enable();
  return KeLeaveCriticalRegionThread();
}
