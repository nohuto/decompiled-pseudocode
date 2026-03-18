/*
 * XREFs of PopPowerRequestHandleExecutionEnablementUpdate @ 0x140A3BCEC
 * Callers:
 *     PopPowerRequestExecutionRequiredTimeoutWorker @ 0x140749CA0 (PopPowerRequestExecutionRequiredTimeoutWorker.c)
 *     PopPowerRequestNotifyMobileHotspotChanged @ 0x140749D6C (PopPowerRequestNotifyMobileHotspotChanged.c)
 *     PopUpdatePdcSystemIdleState @ 0x140A27CB4 (PopUpdatePdcSystemIdleState.c)
 *     PopWnfAudioCallback @ 0x140A3B7C0 (PopWnfAudioCallback.c)
 *     PopPowerRequestExecutionRequiredSettingCallback @ 0x140AACF80 (PopPowerRequestExecutionRequiredSettingCallback.c)
 * Callees:
 *     PopPowerRequestUnrevokeRequests @ 0x1404B4CB0 (PopPowerRequestUnrevokeRequests.c)
 *     PopPowerRequestRevokeRequests @ 0x1404B659C (PopPowerRequestRevokeRequests.c)
 *     PopPowerRequestEvaluateExecutionRequiredStatus @ 0x140A3BD2C (PopPowerRequestEvaluateExecutionRequiredStatus.c)
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
