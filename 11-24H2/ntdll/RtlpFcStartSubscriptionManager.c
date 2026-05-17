/*
 * XREFs of RtlpFcStartSubscriptionManager @ 0x180097CFC
 * Callers:
 *     RtlpFcEnsureSubscriptionManagerStarted @ 0x180097BBC (RtlpFcEnsureSubscriptionManagerStarted.c)
 * Callees:
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x180098D70 (RtlQueryWnfStateDataWithExplicitScope.c)
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x1800991AC (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 RtlpFcStartSubscriptionManager()
{
  __int64 result; // rax
  int v1; // [rsp+50h] [rbp-28h] BYREF
  __int128 v2; // [rsp+58h] [rbp-20h] BYREF

  v1 = 0;
  v2 = RtlpFcWnfTypeId;
  result = RtlQueryWnfStateDataWithExplicitScope(
             (unsigned int)&v1,
             WNF_CMFC_FEATURE_CONFIGURATION_CHANGED,
             0,
             (unsigned int)WinSqmCheckEscalationSetString,
             0LL,
             (__int64)&v2);
  if ( (int)result >= 0 )
    return RtlpSubscribeWnfStateChangeNotificationInternal(
             (unsigned int)&unk_1801D3D78,
             WNF_CMFC_FEATURE_CONFIGURATION_CHANGED,
             v1,
             (unsigned int)RtlpFcWnfCallback,
             (__int64)&RtlpFcProcessManager,
             0LL,
             0,
             4,
             17);
  return result;
}
