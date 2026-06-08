/*
 * XREFs of IsMonitorMWaitSupported @ 0x140022624
 * Callers:
 *     InitMonitorMWaitSupport @ 0x140022560 (InitMonitorMWaitSupport.c)
 *     InitDriver @ 0x140022E14 (InitDriver.c)
 * Callees:
 *     __security_check_cookie @ 0x14000D660 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x14000D6A0 (GetCpuIdInfo.c)
 */

bool IsMonitorMWaitSupported()
{
  __int128 v1; // [rsp+20h] [rbp-38h] BYREF
  __int128 v2; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0LL;
  v1 = 0LL;
  GetCpuIdInfo(1u, &v1);
  if ( (BYTE8(v1) & 8) == 0 )
    return 0;
  GetCpuIdInfo(0, &v2);
  return (unsigned int)v2 >= 5;
}
