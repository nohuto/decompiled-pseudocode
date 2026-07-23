/*
 * XREFs of PoFxSendSystemLatencyUpdate @ 0x1402AD9A8
 * Callers:
 *     PoNotifyVSyncChange @ 0x1402AD970 (PoNotifyVSyncChange.c)
 *     PopDeepSleepEvaluateCallback @ 0x140498A40 (PopDeepSleepEvaluateCallback.c)
 *     PopCheckResiliencyScenarios @ 0x140A1BD98 (PopCheckResiliencyScenarios.c)
 *     PopWnfFullscreenVideoCallback @ 0x140A30D70 (PopWnfFullscreenVideoCallback.c)
 *     PopEnforceResiliencyScenarios @ 0x140AA7080 (PopEnforceResiliencyScenarios.c)
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     PpmIdleUpdateSystemLatencyLimit @ 0x1402AEDA4 (PpmIdleUpdateSystemLatencyLimit.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     PoFxSystemLatencyNotify @ 0x140463574 (PoFxSystemLatencyNotify.c)
 *     PopFxGetLatencyLimitWithoutResiliency @ 0x140470EB8 (PopFxGetLatencyLimitWithoutResiliency.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 PoFxSendSystemLatencyUpdate()
{
  unsigned int LatencyLimitWithoutResiliency; // ebx
  __int64 result; // rax
  signed __int32 v2[8]; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v3; // [rsp+40h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-20h] BYREF

  if ( byte_140F0B674 && (!PopDeepSleepIsEnabled && PopPdcIdleResiliency || PopDeepSleepIsEngaged) )
    LatencyLimitWithoutResiliency = dword_140FC545C;
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
