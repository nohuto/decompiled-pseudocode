/*
 * XREFs of RtlpFcStartSubscriptionManager @ 0x18000336C
 * Callers:
 *     RtlpFcEnsureSubscriptionManagerStarted @ 0x18000322C (RtlpFcEnsureSubscriptionManagerStarted.c)
 * Callees:
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x1800043E0 (RtlQueryWnfStateDataWithExplicitScope.c)
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18000481C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 RtlpFcStartSubscriptionManager()
{
  __int64 result; // rax
  int v1; // [rsp+50h] [rbp-28h] BYREF
  __int128 v2; // [rsp+58h] [rbp-20h] BYREF

  v1 = 0;
  v2 = RtlpFcWnfTypeId;
  result = RtlQueryWnfStateDataWithExplicitScope(
             (int)&v1,
             WNF_CMFC_FEATURE_CONFIGURATION_CHANGED,
             0,
             (int)WinSqmCheckEscalationSetString,
             0LL,
             (PCWNF_TYPE_ID)&v2);
  if ( (int)result >= 0 )
    return RtlpSubscribeWnfStateChangeNotificationInternal(
             (unsigned int)&unk_1801D5DD8,
             WNF_CMFC_FEATURE_CONFIGURATION_CHANGED,
             v1,
             (unsigned int)&RtlpFcWnfCallback,
             (__int64)&RtlpFcProcessManager,
             0LL,
             0,
             4,
             17);
  return result;
}
