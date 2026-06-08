/*
 * XREFs of IsACountMCountSupported @ 0x14000663C
 * Callers:
 *     GetCppcPerfFeedbackHandler @ 0x14002ABC0 (GetCppcPerfFeedbackHandler.c)
 *     InitDriver @ 0x14004903C (InitDriver.c)
 * Callees:
 *     __security_check_cookie @ 0x14000FEF0 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x14000FF30 (GetCpuIdInfo.c)
 */

char IsACountMCountSupported()
{
  __int128 v1; // [rsp+20h] [rbp-38h] BYREF
  __int128 v2; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0LL;
  v2 = 0LL;
  GetCpuIdInfo(0LL, &v1);
  if ( (unsigned int)v1 < 6 )
    return 0;
  GetCpuIdInfo(6LL, &v2);
  return BYTE8(v2) & 1;
}
