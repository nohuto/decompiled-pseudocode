/*
 * XREFs of _tlgCreate1Sz_char @ 0x1404397B4
 * Callers:
 *     MiLogWsAging @ 0x14023537C (MiLogWsAging.c)
 *     PopPlNotifyDeviceDState @ 0x140312818 (PopPlNotifyDeviceDState.c)
 *     PopPlNotifyDeviceFState @ 0x140315BD0 (PopPlNotifyDeviceFState.c)
 *     MiLogTrimWs @ 0x1403D05E4 (MiLogTrimWs.c)
 *     KiTraceLogHeteroRundown @ 0x140438E68 (KiTraceLogHeteroRundown.c)
 *     EtwTelemetryCoverageReport @ 0x140457F60 (EtwTelemetryCoverageReport.c)
 *     MmNotifyProcessInSwapTrigger @ 0x140467A70 (MmNotifyProcessInSwapTrigger.c)
 *     MiLogWsEmptyControl @ 0x1404AEF64 (MiLogWsEmptyControl.c)
 *     CarEtwCrashEvent @ 0x1406157F0 (CarEtwCrashEvent.c)
 *     CarEtwWriteBugCheckEvent @ 0x140615B58 (CarEtwWriteBugCheckEvent.c)
 *     CarEtwWriteLiveDumpEvent @ 0x140615CC8 (CarEtwWriteLiveDumpEvent.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x140669F18 (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x14066A078 (MiLogOutswappedProcessCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x14066A160 (MiLogResetPagesCommitRelease.c)
 *     NtCreateIoRing @ 0x140717160 (NtCreateIoRing.c)
 *     PopDiagTraceBatteryAlarmStatus @ 0x140755630 (PopDiagTraceBatteryAlarmStatus.c)
 *     PopPowerAdapterAdd @ 0x14075B550 (PopPowerAdapterAdd.c)
 *     PopPowerAdapterPublishRecState @ 0x14075B8C8 (PopPowerAdapterPublishRecState.c)
 *     MiLogCreateImageFileMapFailure @ 0x1407EC04C (MiLogCreateImageFileMapFailure.c)
 *     MiLogHotPatchOperation @ 0x1407F3824 (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x1407F3CA4 (MiLogHotPatchOperationStatus.c)
 *     MiLogHotPatchRundown @ 0x1407F44C4 (MiLogHotPatchRundown.c)
 *     TtmiLogError @ 0x140903A9C (TtmiLogError.c)
 *     EtwpCoverageRecord @ 0x140904574 (EtwpCoverageRecord.c)
 *     CmLoadAppKey @ 0x14092DB9C (CmLoadAppKey.c)
 *     PopBatteryApplyCompositeState @ 0x140A3AD08 (PopBatteryApplyCompositeState.c)
 *     PopSetBatteryDischargingState @ 0x140A3BFA8 (PopSetBatteryDischargingState.c)
 *     PopDiagTraceBatteryTriggerFlags @ 0x140A6D788 (PopDiagTraceBatteryTriggerFlags.c)
 *     VmpTracingEnabledCallback @ 0x140A840D0 (VmpTracingEnabledCallback.c)
 *     PopAccountBatteryEnergyChange @ 0x140A9A614 (PopAccountBatteryEnergyChange.c)
 *     PopDiagTraceExecutePowerAction @ 0x140A9B7B8 (PopDiagTraceExecutePowerAction.c)
 *     PopAccountCbEnergyChange @ 0x140A9BD1C (PopAccountCbEnergyChange.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x140AAB2DC (MiLogStrongCodeDriverLoadFailure.c)
 *     PopBatteryWorker @ 0x140AC7D70 (PopBatteryWorker.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140C50900 (MiFlushStrongCodeDriverLoadFailures.c)
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
