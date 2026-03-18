/*
 * XREFs of PopPowerRequestHandleExecutionEnablementUpdate @ 0x140A37004
 * Callers:
 *     PopPowerRequestExecutionRequiredTimeoutWorker @ 0x14073DC20 (PopPowerRequestExecutionRequiredTimeoutWorker.c)
 *     PopPowerRequestNotifyMobileHotspotChanged @ 0x14073DCEC (PopPowerRequestNotifyMobileHotspotChanged.c)
 *     PopUpdatePdcSystemIdleState @ 0x140A1ED14 (PopUpdatePdcSystemIdleState.c)
 *     PopWnfAudioCallback @ 0x140A36A30 (PopWnfAudioCallback.c)
 *     PopPowerRequestExecutionRequiredSettingCallback @ 0x140AA7B30 (PopPowerRequestExecutionRequiredSettingCallback.c)
 * Callees:
 *     PopPowerRequestUnrevokeRequests @ 0x1404B5204 (PopPowerRequestUnrevokeRequests.c)
 *     PopPowerRequestRevokeRequests @ 0x1404B6AAC (PopPowerRequestRevokeRequests.c)
 *     PopPowerRequestEvaluateExecutionRequiredStatus @ 0x140A37044 (PopPowerRequestEvaluateExecutionRequiredStatus.c)
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
