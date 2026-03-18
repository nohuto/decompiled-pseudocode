/*
 * XREFs of PoFxSendSystemLatencyUpdate @ 0x1403B5638
 * Callers:
 *     PoNotifyVSyncChange @ 0x1403B5600 (PoNotifyVSyncChange.c)
 *     PopDeepSleepEvaluateCallback @ 0x14049DC40 (PopDeepSleepEvaluateCallback.c)
 *     PopCheckResiliencyScenarios @ 0x140A27318 (PopCheckResiliencyScenarios.c)
 *     PopWnfFullscreenVideoCallback @ 0x140A3B590 (PopWnfFullscreenVideoCallback.c)
 *     PopEnforceResiliencyScenarios @ 0x140AAC0B0 (PopEnforceResiliencyScenarios.c)
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     EtwWriteEx @ 0x140259680 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     PpmIdleUpdateSystemLatencyLimit @ 0x1403B5810 (PpmIdleUpdateSystemLatencyLimit.c)
 *     PopFxGetLatencyLimitWithoutResiliency @ 0x1403B68A0 (PopFxGetLatencyLimitWithoutResiliency.c)
 *     PoFxSystemLatencyNotify @ 0x1403B68D8 (PoFxSystemLatencyNotify.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 PoFxSendSystemLatencyUpdate()
{
  unsigned int LatencyLimitWithoutResiliency; // ebx
  __int64 result; // rax
  signed __int32 v2[8]; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v3; // [rsp+40h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-20h] BYREF

  if ( byte_140F0BB54 && (!PopDeepSleepIsEnabled && PopPdcIdleResiliency || PopDeepSleepIsEngaged) )
    LatencyLimitWithoutResiliency = dword_140FC444C;
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
