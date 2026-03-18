/*
 * XREFs of CmFcpManagerArmFeatureUsageProviderPublishTimer @ 0x140668740
 * Callers:
 *     CmFcpManagerPublishFeatureUsageDataBuffers @ 0x140A80154 (CmFcpManagerPublishFeatureUsageDataBuffers.c)
 *     CmFcManagerStartRuntimePhase @ 0x140C4D180 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     ExSetTimer @ 0x1403C1FC0 (ExSetTimer.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall CmFcpManagerArmFeatureUsageProviderPublishTimer(__int64 a1)
{
  ULONG_PTR v1; // rcx
  __int64 result; // rax
  _QWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 1544);
  if ( v1 )
  {
    v3[0] = 0LL;
    v3[1] = -1LL;
    return ExSetTimer(v1, -3000000000LL, 0LL, (ULONG_PTR)v3);
  }
  return result;
}
