/*
 * XREFs of IsACountMCountSupported @ 0x14002417C
 * Callers:
 *     GetCppcPerfFeedbackHandler @ 0x140023B40 (GetCppcPerfFeedbackHandler.c)
 *     InitDriver @ 0x140023E94 (InitDriver.c)
 * Callees:
 *     __security_check_cookie @ 0x14000E310 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x14000E350 (GetCpuIdInfo.c)
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
