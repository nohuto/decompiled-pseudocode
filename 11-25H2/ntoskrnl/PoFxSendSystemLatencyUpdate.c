/*
 * XREFs of PoFxSendSystemLatencyUpdate @ 0x140203AF8
 * Callers:
 *     PoNotifyVSyncChange @ 0x140203AC0 (PoNotifyVSyncChange.c)
 *     PopDeepSleepEvaluateCallback @ 0x14049EB60 (PopDeepSleepEvaluateCallback.c)
 *     PopCheckResiliencyScenarios @ 0x140A1E378 (PopCheckResiliencyScenarios.c)
 *     PopWnfFullscreenVideoCallback @ 0x140A36800 (PopWnfFullscreenVideoCallback.c)
 *     PopEnforceResiliencyScenarios @ 0x140AA6AF0 (PopEnforceResiliencyScenarios.c)
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 * Callees:
 *     PpmIdleUpdateSystemLatencyLimit @ 0x140203EC4 (PpmIdleUpdateSystemLatencyLimit.c)
 *     PopFxGetLatencyLimitWithoutResiliency @ 0x140205200 (PopFxGetLatencyLimitWithoutResiliency.c)
 *     PoFxSystemLatencyNotify @ 0x1402057A8 (PoFxSystemLatencyNotify.c)
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 PoFxSendSystemLatencyUpdate()
{
  unsigned int LatencyLimitWithoutResiliency; // ebx
  __int64 result; // rax
  signed __int32 v2[8]; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v3; // [rsp+40h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-20h] BYREF

  if ( byte_140F0B8D4 && (!PopDeepSleepIsEnabled && PopPdcIdleResiliency || PopDeepSleepIsEngaged) )
    LatencyLimitWithoutResiliency = dword_140FC443C;
  else
    LatencyLimitWithoutResiliency = PopFxGetLatencyLimitWithoutResiliency();
  result = (unsigned int)PopFxSystemLatencyLimit;
  if ( LatencyLimitWithoutResiliency != PopFxSystemLatencyLimit )
  {
    if ( LatencyLimitWithoutResiliency > PopFxSystemLatencyLimit )
    {
      PopFxSystemLatencyLimit = LatencyLimitWithoutResiliency;
      _InterlockedOr(v2, 0);
    }
    v3 = LatencyLimitWithoutResiliency;
    if ( PopDiagHandleRegistered )
    {
      if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SYSTEM_LATENCY_UPDATE) )
      {
        UserData.Reserved = 0;
        UserData.Ptr = (ULONGLONG)&v3;
        UserData.Size = 4;
        EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_SYSTEM_LATENCY_UPDATE, 0LL, 0, 0LL, 0LL, 1u, &UserData);
      }
    }
    PoFxSystemLatencyNotify(LatencyLimitWithoutResiliency);
    result = PpmIdleUpdateSystemLatencyLimit(LatencyLimitWithoutResiliency);
    PopFxSystemLatencyLimit = LatencyLimitWithoutResiliency;
  }
  return result;
}
