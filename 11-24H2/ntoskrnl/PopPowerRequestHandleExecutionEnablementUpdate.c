/*
 * XREFs of PopPowerRequestHandleExecutionEnablementUpdate @ 0x140A314CC
 * Callers:
 *     PopPowerRequestExecutionRequiredTimeoutWorker @ 0x140747FD0 (PopPowerRequestExecutionRequiredTimeoutWorker.c)
 *     PopPowerRequestNotifyMobileHotspotChanged @ 0x14074809C (PopPowerRequestNotifyMobileHotspotChanged.c)
 *     PopUpdatePdcSystemIdleState @ 0x140A1C734 (PopUpdatePdcSystemIdleState.c)
 *     PopWnfAudioCallback @ 0x140A30FA0 (PopWnfAudioCallback.c)
 *     PopPowerRequestExecutionRequiredSettingCallback @ 0x140AA8000 (PopPowerRequestExecutionRequiredSettingCallback.c)
 * Callees:
 *     PopPowerRequestUnrevokeRequests @ 0x1404AF4B0 (PopPowerRequestUnrevokeRequests.c)
 *     PopPowerRequestRevokeRequests @ 0x1404B0D7C (PopPowerRequestRevokeRequests.c)
 *     PopPowerRequestEvaluateExecutionRequiredStatus @ 0x140A3150C (PopPowerRequestEvaluateExecutionRequiredStatus.c)
 */

void __fastcall PopPowerRequestHandleExecutionEnablementUpdate(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  int v4; // r9d

  v3 = 8LL;
  if ( PopPowerRequestConvertSystemToExecution )
    v3 = 10LL;
  if ( (unsigned __int8)PopPowerRequestEvaluateExecutionRequiredStatus(a1, a2, a3, v3) )
    PopPowerRequestUnrevokeRequests(v4);
  else
    PopPowerRequestRevokeRequests(v4, 0);
}
