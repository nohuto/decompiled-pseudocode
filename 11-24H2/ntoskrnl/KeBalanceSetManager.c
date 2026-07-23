/*
 * XREFs of KeBalanceSetManager @ 0x1405C1BE0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     KeWaitForMultipleObjects @ 0x14031CC00 (KeWaitForMultipleObjects.c)
 *     KeQueryActiveProcessorCountEx @ 0x140339940 (KeQueryActiveProcessorCountEx.c)
 *     MiWorkingSetManager @ 0x140354FA0 (MiWorkingSetManager.c)
 *     KeSetPriorityThread @ 0x140371FE0 (KeSetPriorityThread.c)
 *     ExpScanGeneralLookasideList @ 0x140404310 (ExpScanGeneralLookasideList.c)
 *     ExpScanSystemLookasideList @ 0x140404404 (ExpScanSystemLookasideList.c)
 *     KePulseEvent @ 0x14045EF70 (KePulseEvent.c)
 */

void __noreturn KeBalanceSetManager()
{
  int v0; // ebx
  NTSTATUS v1; // eax
  ULONG ActiveProcessorCount; // r8d
  __int64 v3; // rdx
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // r9
  int v7; // eax
  unsigned int v8; // r8d
  int v9; // edx
  __int64 v10; // r10
  unsigned int v11; // ecx
  KSPIN_LOCK *v12; // rdx
  __int64 *v13; // rcx
  int v14; // eax
  PVOID Object[5]; // [rsp+40h] [rbp-28h] BYREF

  KeSetPriorityThread(KeGetCurrentThread(), 17);
  v0 = 8;
  Object[0] = &KiBalanceSetManagerPeriodicEvent;
  KiStackProtectTime = (unsigned __int64)((0x8F0D180 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount;
  Object[1] = (PVOID)(qword_140E3D200 + 96);
  while ( 1 )
  {
    while ( 1 )
    {
      v1 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
      if ( !v1 )
        break;
      if ( v1 == 1 )
        MiWorkingSetManager((__int64)&MiSystemPartition, 1);
    }
    if ( VslpSecureKernelPeriodicTickWorkItem.WorkerRoutine
      && !_InterlockedCompareExchange(&VslpSecureKernelPeriodicTickWorkItemActive, 1, 0) )
    {
      ExQueueWorkItem(&VslpSecureKernelPeriodicTickWorkItem, CriticalWorkQueue);
    }
    if ( IopIrpCreditsEnabled > 1 )
    {
      ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
      if ( ActiveProcessorCount > 1 )
      {
        v3 = 0LL;
        v4 = 0;
        do
        {
          v5 = KiProcessorBlock[v3];
          v3 = (unsigned int)(v3 + 1);
          v4 += *(_DWORD *)(v5 + 11676);
        }
        while ( (unsigned int)v3 < ActiveProcessorCount );
        v6 = 0LL;
        v7 = v4 / (int)ActiveProcessorCount;
        v8 = ActiveProcessorCount - 1;
        v9 = 0;
        do
        {
          v10 = KiProcessorBlock[v6];
          v11 = v7 - *(_DWORD *)(v10 + 11676);
          if ( v7 != *(_DWORD *)(v10 + 11676) )
          {
            _InterlockedAdd((volatile signed __int32 *)(v10 + 11676), v11);
            v9 += v11;
          }
          v6 = (unsigned int)(v6 + 1);
        }
        while ( (unsigned int)v6 < v8 );
        if ( v9 )
          _InterlockedAdd((volatile signed __int32 *)(KiProcessorBlock[v6] + 11676), -v9);
      }
    }
    if ( !ExpScanCount )
      break;
    if ( ExpScanCount == 1 )
    {
      v12 = &ExPagedLookasideLock;
      v13 = &ExPagedLookasideListHead;
LABEL_24:
      ExpScanGeneralLookasideList(v13, v12);
      goto LABEL_25;
    }
    if ( ExpScanCount == 2 )
      ExpScanSystemLookasideList();
LABEL_25:
    if ( ++ExpScanCount == 3 )
      ExpScanCount = 0;
    if ( (unsigned __int8)EtwpBootPhase > 1u && !--EtwpBufferAdjustmentCount )
    {
      EtwpBufferAdjustmentCount = 8;
      if ( !_InterlockedCompareExchange(&EtwpBufferAdjustmentActive, 1, 0) )
        ExQueueWorkItem(&EtwpAdjustBuffersWorkItem, DelayedWorkQueue);
    }
    MiWorkingSetManager((__int64)&MiSystemPartition, 0);
    if ( PspJobTimeLimitsRequest )
    {
      v14 = PspJobTimeLimitsCount;
      if ( PspJobTimeLimitsCount )
      {
        --PspJobTimeLimitsCount;
        if ( v14 == 1 )
        {
          _m_prefetchw(&PspJobTimeLimitsWorkItemFlags);
          if ( (_InterlockedOr(&PspJobTimeLimitsWorkItemFlags, 5u) & 4) == 0 )
            ExQueueWorkItem(&PspJobTimeLimitsWorkItem, DelayedWorkQueue);
        }
      }
    }
    if ( !--v0 )
    {
      v0 = 8;
      if ( !_InterlockedCompareExchange(&KiStackOutSwapRequest, 1, 0) )
      {
        KeSetEvent(&KiSwapEvent, 1, 0);
        KePulseEvent(&KiStackProtectNotifyEvent, 1, 0);
      }
    }
    if ( PopEnergyEstimationEnabled
      && KiTimelineBitmapTime != (unsigned int)((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
                                               + ((MEMORY[0xFFFFF78000000004]
                                                 * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 12) )
    {
      KiTimelineBitmapTime = (((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
                            + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 12;
    }
  }
  v12 = &ExNPagedLookasideLock;
  v13 = &ExNPagedLookasideListHead;
  goto LABEL_24;
}
