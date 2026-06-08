/*
 * XREFs of IsRaplSupported @ 0x140022340
 * Callers:
 *     InitEnergyCountersOnCurrentProcessor @ 0x140022170 (InitEnergyCountersOnCurrentProcessor.c)
 *     InitDriver @ 0x140022E14 (InitDriver.c)
 * Callees:
 *     __security_check_cookie @ 0x14000D660 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x14000D6A0 (GetCpuIdInfo.c)
 */

bool IsRaplSupported()
{
  __int128 v1; // [rsp+20h] [rbp-38h] BYREF
  __int128 v2; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0LL;
  v2 = 0LL;
  GetCpuIdInfo(0x80000000, &v1);
  if ( (unsigned int)v1 < 7 )
    return 0;
  GetCpuIdInfo(0x80000007, &v2);
  return (WORD6(v2) & 0x4000) != 0;
}
