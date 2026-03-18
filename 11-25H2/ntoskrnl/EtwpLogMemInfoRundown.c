/*
 * XREFs of EtwpLogMemInfoRundown @ 0x1407A1860
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140A11A68 (EtwpKernelTraceRundown.c)
 * Callees:
 *     MmQuerySystemMemoryInformation @ 0x1403BDCA8 (MmQuerySystemMemoryInformation.c)
 *     EtwpLogMemInfo @ 0x1403BDEF0 (EtwpLogMemInfo.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     EtwpLogMemInfoWs @ 0x1408DF3F4 (EtwpLogMemInfoWs.c)
 */

__int64 __fastcall EtwpLogMemInfoRundown(__int64 a1)
{
  _OWORD v3[2]; // [rsp+20h] [rbp-38h] BYREF

  memset(v3, 0, sizeof(v3));
  MmQuerySystemMemoryInformation(v3);
  EtwpLogMemInfo(a1, (__int64)v3);
  return EtwpLogMemInfoWs(a1, *(_QWORD *)&v3[0]);
}
