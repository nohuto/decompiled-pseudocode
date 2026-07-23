/*
 * XREFs of _tlgCreate1Sz_char @ 0x14042C374
 * Callers:
 *     MiLogWsAging @ 0x14020F50C (MiLogWsAging.c)
 *     MmNotifyProcessInSwapTrigger @ 0x1402D6BB8 (MmNotifyProcessInSwapTrigger.c)
 *     MiLogTrimWs @ 0x14038F63C (MiLogTrimWs.c)
 *     PopPlNotifyDeviceFState @ 0x1403A734C (PopPlNotifyDeviceFState.c)
 *     PopPlNotifyDeviceDState @ 0x1403A78A0 (PopPlNotifyDeviceDState.c)
 *     KiTraceLogHeteroRundown @ 0x14042BA28 (KiTraceLogHeteroRundown.c)
 *     EtwTelemetryCoverageReport @ 0x14044D270 (EtwTelemetryCoverageReport.c)
 *     MiLogWsEmptyControl @ 0x1404A993C (MiLogWsEmptyControl.c)
 *     CarEtwCrashEvent @ 0x140613DB0 (CarEtwCrashEvent.c)
 *     CarEtwWriteBugCheckEvent @ 0x140614118 (CarEtwWriteBugCheckEvent.c)
 *     CarEtwWriteLiveDumpEvent @ 0x140614288 (CarEtwWriteLiveDumpEvent.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x14066B0E8 (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x14066B248 (MiLogOutswappedProcessCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x14066B330 (MiLogResetPagesCommitRelease.c)
 *     NtCreateIoRing @ 0x140714CF0 (NtCreateIoRing.c)
 *     PopDiagTraceBatteryAlarmStatus @ 0x140753950 (PopDiagTraceBatteryAlarmStatus.c)
 *     PopPowerAdapterAdd @ 0x14075A030 (PopPowerAdapterAdd.c)
 *     PopPowerAdapterPublishRecState @ 0x14075A5D4 (PopPowerAdapterPublishRecState.c)
 *     PopPowerAdapterReinitialize @ 0x14075AA58 (PopPowerAdapterReinitialize.c)
 *     MiLogCreateImageFileMapFailure @ 0x1407EC61C (MiLogCreateImageFileMapFailure.c)
 *     MiLogHotPatchOperation @ 0x1407F3E18 (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x1407F4298 (MiLogHotPatchOperationStatus.c)
 *     MiLogHotPatchRundown @ 0x1407F4BB8 (MiLogHotPatchRundown.c)
 *     EtwpCoverageRecord @ 0x1408DC9D4 (EtwpCoverageRecord.c)
 *     CmLoadAppKey @ 0x14092FCDC (CmLoadAppKey.c)
 *     TtmiLogError @ 0x14099E04C (TtmiLogError.c)
 *     PopBatteryApplyCompositeState @ 0x140A304E8 (PopBatteryApplyCompositeState.c)
 *     PopSetBatteryDischargingState @ 0x140A31788 (PopSetBatteryDischargingState.c)
 *     PopDiagTraceBatteryTriggerFlags @ 0x140A66E48 (PopDiagTraceBatteryTriggerFlags.c)
 *     VmpTracingEnabledCallback @ 0x140A7EBF0 (VmpTracingEnabledCallback.c)
 *     PopAccountBatteryEnergyChange @ 0x140A95B84 (PopAccountBatteryEnergyChange.c)
 *     PopDiagTraceExecutePowerAction @ 0x140A96D28 (PopDiagTraceExecutePowerAction.c)
 *     PopAccountCbEnergyChange @ 0x140A9728C (PopAccountCbEnergyChange.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x140AA650C (MiLogStrongCodeDriverLoadFailure.c)
 *     PopBatteryWorker @ 0x140AC5DB0 (PopBatteryWorker.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140C52A90 (MiFlushStrongCodeDriverLoadFailures.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tlgCreate1Sz_char(__int64 a1, const CHAR *a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  if ( a2 )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( a2[v2] );
    result = (unsigned int)(v2 + 1);
  }
  else
  {
    a2 = &File;
    result = 1LL;
  }
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = result;
  return result;
}
