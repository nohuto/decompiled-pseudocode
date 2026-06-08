/*
 * XREFs of IsTargettedCpuForQosExperiment_AMD @ 0x140004354
 * Callers:
 *     GetCppcRequestMsrPerfControlHandler @ 0x140023BB0 (GetCppcRequestMsrPerfControlHandler.c)
 * Callees:
 *     __security_check_cookie @ 0x14000E310 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x14000E350 (GetCpuIdInfo.c)
 */

bool IsTargettedCpuForQosExperiment_AMD()
{
  unsigned int v0; // eax
  __int128 v2; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  GetCpuIdInfo(1LL, &v2);
  v0 = ((unsigned int)v2 >> 8) & 0xF;
  if ( v0 == 15 )
    v0 = (unsigned __int8)((unsigned int)v2 >> 20) + 15;
  return v0 >= 0x1A;
}
