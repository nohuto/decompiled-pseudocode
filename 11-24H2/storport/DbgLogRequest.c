/*
 * XREFs of DbgLogRequest @ 0x140015470
 * Callers:
 *     RaUnitScsiIrp @ 0x140002710 (RaUnitScsiIrp.c)
 *     RaidUnitSubmitRequest @ 0x140004620 (RaidUnitSubmitRequest.c)
 *     RaUnitFlushSrb @ 0x140005750 (RaUnitFlushSrb.c)
 *     RaidUnitSubmitResetRequest @ 0x140005A88 (RaidUnitSubmitResetRequest.c)
 *     RaidUnitSubmitIrpRequest @ 0x14000AA60 (RaidUnitSubmitIrpRequest.c)
 *     RaidUnitCompleteIrpRequest @ 0x14000B1C0 (RaidUnitCompleteIrpRequest.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x140012900 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidStallDeviceQueue @ 0x1400131FC (RaidStallDeviceQueue.c)
 *     RiNormalizeDeviceQueue @ 0x1400138C0 (RiNormalizeDeviceQueue.c)
 *     StorPortPauseDevice @ 0x140014A50 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x140014F00 (StorPortResumeDevice.c)
 *     RaidLogRequestComplete @ 0x14001512C (RaidLogRequestComplete.c)
 *     RaidUnitPendingDpcRoutine @ 0x14002ED00 (RaidUnitPendingDpcRoutine.c)
 *     StorPortDeviceBusy @ 0x14003DC40 (StorPortDeviceBusy.c)
 *     StorPortBusy @ 0x140040270 (StorPortBusy.c)
 *     StorPortNotification @ 0x14004B4F0 (StorPortNotification.c)
 *     RaidUpdateZoneIoReceiveWithStatus @ 0x140054864 (RaidUpdateZoneIoReceiveWithStatus.c)
 *     StorPortReady @ 0x1400561E0 (StorPortReady.c)
 *     RaCallMiniportResetBus @ 0x140058EB4 (RaCallMiniportResetBus.c)
 *     RaidLogPower @ 0x140065B30 (RaidLogPower.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1400664A8 (RaidResumeAndRestartAdapterQueues.c)
 *     RaidUpdateZoneIoSubmission @ 0x14006D564 (RaidUpdateZoneIoSubmission.c)
 *     StorPortCompleteRequest @ 0x140073760 (StorPortCompleteRequest.c)
 *     StorPortDeviceReady @ 0x140073920 (StorPortDeviceReady.c)
 *     StorPortPause @ 0x140074390 (StorPortPause.c)
 *     StorPortResume @ 0x1400749D0 (StorPortResume.c)
 *     StorpMarkDeviceFailed @ 0x140075234 (StorpMarkDeviceFailed.c)
 *     RaidCompleteMiniportRequestCallback @ 0x14008B8C8 (RaidCompleteMiniportRequestCallback.c)
 *     RaidResumeAndRestartUnitQueue @ 0x14009DA34 (RaidResumeAndRestartUnitQueue.c)
 * Callees:
 *     <none>
 */

void __fastcall DbgLogRequest(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  unsigned int v8; // r10d
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rcx

  if ( a1 )
  {
    if ( *(_DWORD *)a1 != 1314275652 )
    {
      v8 = *(_DWORD *)(a1 + 4932);
      if ( v8 )
      {
        v9 = *(_QWORD *)(a1 + 4936);
        if ( v9 )
        {
          v10 = a7;
          v11 = v9 + 48LL * (_InterlockedIncrement((volatile signed __int32 *)(a1 + 4928)) % v8);
          *(_DWORD *)v11 = a2;
          if ( !a7 )
            v10 = MEMORY[0xFFFFF78000000014];
          *(_QWORD *)(v11 + 40) = v10;
          *(_QWORD *)(v11 + 24) = a5;
          *(_QWORD *)(v11 + 32) = a6;
          *(_QWORD *)(v11 + 8) = a3;
          *(_QWORD *)(v11 + 16) = a4;
        }
      }
    }
  }
}
