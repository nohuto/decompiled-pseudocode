/*
 * XREFs of PspUnlockProcessThreadListShared @ 0x1403E6C20
 * Callers:
 *     PspNotifyProcessEffectiveIoLimitChanged @ 0x1403E69D4 (PspNotifyProcessEffectiveIoLimitChanged.c)
 *     PsUpdateSvmProcessPasidAllThreads @ 0x1407647D4 (PsUpdateSvmProcessPasidAllThreads.c)
 *     PspEnableProcessOptionalXStateFeatures @ 0x140764ED0 (PspEnableProcessOptionalXStateFeatures.c)
 *     PsQueryTotalCycleTimeProcess @ 0x140A152C0 (PsQueryTotalCycleTimeProcess.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14029BA20 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall PspUnlockProcessThreadListShared(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rbx
  struct _KTHREAD *CurrentThread; // r11
  _KLOCK_ENTRIES *KernelAbEntries; // r8
  unsigned int i; // eax
  char *v7; // r10
  __int64 v8; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v12; // eax
  signed __int32 v13; // ett

  v3 = a1 + 1504;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1504), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 1504));
  CurrentThread = KeGetCurrentThread();
  _disable();
  KernelAbEntries = CurrentThread->KernelAbEntries;
  for ( i = 0; i < KernelAbEntries->EntryCount; ++i )
  {
    v7 = (char *)KernelAbEntries + 88 * i;
    v8 = *((_QWORD *)v7 + 2);
    if ( (v8 & 0x7FFFFFFFFFFFFFFCLL) == (v3 & 0x7FFFFFFFFFFFFFFCLL) && v7[26] && (v8 & 1) == 0 )
    {
      v7[26] = 0;
      KiAbEntryFreeAndEnableInterrupts((__int64)(v7 + 16), (ULONG_PTR)CurrentThread, v3, 1, 0LL);
      return KeLeaveCriticalRegionThread(a2);
    }
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v3, 0LL, 0LL);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v12 = *SchedulerAssist;
    do
    {
      v13 = v12;
      v12 = _InterlockedCompareExchange(SchedulerAssist, v12 & 0xFFDFFFFF, v12);
    }
    while ( v13 != v12 );
    if ( (v12 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  _enable();
  return KeLeaveCriticalRegionThread(a2);
}
