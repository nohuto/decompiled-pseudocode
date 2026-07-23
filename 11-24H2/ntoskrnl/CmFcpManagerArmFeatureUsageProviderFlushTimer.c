/*
 * XREFs of CmFcpManagerArmFeatureUsageProviderFlushTimer @ 0x1404F8498
 * Callers:
 *     CmFcpManagerArmFeatureUsageProviderFlushNotification @ 0x14048C7E8 (CmFcpManagerArmFeatureUsageProviderFlushNotification.c)
 *     CmFcpManagerArmFeatureUsageProviderFlushTimerDpc @ 0x140666FF0 (CmFcpManagerArmFeatureUsageProviderFlushTimerDpc.c)
 *     CmFcManagerStartRuntimePhase @ 0x140C4F31C (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     ExSetTimer @ 0x1403B0B80 (ExSetTimer.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall CmFcpManagerArmFeatureUsageProviderFlushTimer(__int64 a1)
{
  ULONG_PTR v1; // rcx
  __int64 result; // rax
  _QWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 1608);
  if ( v1 )
  {
    v3[0] = 0LL;
    v3[1] = -1LL;
    return ExSetTimer(v1, -3000000000LL, 0LL, (ULONG_PTR)v3);
  }
  return result;
}
