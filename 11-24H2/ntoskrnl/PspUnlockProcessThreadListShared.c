/*
 * XREFs of PspUnlockProcessThreadListShared @ 0x1403E2AC0
 * Callers:
 *     PspNotifyProcessEffectiveIoLimitChanged @ 0x1403E2874 (PspNotifyProcessEffectiveIoLimitChanged.c)
 *     PsUpdateSvmProcessPasidAllThreads @ 0x1407743C4 (PsUpdateSvmProcessPasidAllThreads.c)
 *     PspEnableProcessOptionalXStateFeatures @ 0x140774AC0 (PspEnableProcessOptionalXStateFeatures.c)
 *     PsQueryProcessEnergyValues @ 0x14085EE30 (PsQueryProcessEnergyValues.c)
 *     PsQueryTotalCycleTimeProcess @ 0x140A150F0 (PsQueryTotalCycleTimeProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14028D3B0 (KiAbEntryFreeAndEnableInterrupts.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall PspUnlockProcessThreadListShared(__int64 a1)
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

  v1 = a1 + 1504;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1504), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 1504));
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
      KiAbEntryFreeAndEnableInterrupts((__int64)(v5 + 16), (ULONG_PTR)CurrentThread, v1, 1LL, 0LL);
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
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  _enable();
  return KeLeaveCriticalRegionThread();
}
