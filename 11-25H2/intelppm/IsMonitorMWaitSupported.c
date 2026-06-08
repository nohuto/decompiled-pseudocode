/*
 * XREFs of IsMonitorMWaitSupported @ 0x14002A254
 * Callers:
 *     InitMonitorMWaitSupport @ 0x14002B638 (InitMonitorMWaitSupport.c)
 *     InitDriver @ 0x14004903C (InitDriver.c)
 * Callees:
 *     __security_check_cookie @ 0x14000FEF0 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x14000FF30 (GetCpuIdInfo.c)
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
