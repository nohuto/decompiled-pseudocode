/*
 * XREFs of IsACountMCountSupported @ 0x1400230FC
 * Callers:
 *     GetCppcPerfFeedbackHandler @ 0x140022B40 (GetCppcPerfFeedbackHandler.c)
 *     InitDriver @ 0x140022E14 (InitDriver.c)
 * Callees:
 *     __security_check_cookie @ 0x14000D660 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x14000D6A0 (GetCpuIdInfo.c)
 */

bool IsACountMCountSupported()
{
  char v0; // bl
  __int128 v2; // [rsp+20h] [rbp-38h] BYREF
  __int128 v3; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0LL;
  v0 = 0;
  v3 = 0LL;
  GetCpuIdInfo(0, &v2);
  if ( (unsigned int)v2 >= 6 )
  {
    GetCpuIdInfo(6u, &v3);
    return (BYTE8(v3) & 1) != 0;
  }
  return v0;
}
