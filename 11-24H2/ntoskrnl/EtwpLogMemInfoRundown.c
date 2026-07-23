/*
 * XREFs of EtwpLogMemInfoRundown @ 0x1407B1080
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140A0F024 (EtwpKernelTraceRundown.c)
 * Callees:
 *     MmQuerySystemMemoryInformation @ 0x140261DE8 (MmQuerySystemMemoryInformation.c)
 *     EtwpLogMemInfo @ 0x140261FE0 (EtwpLogMemInfo.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     EtwpLogMemInfoWs @ 0x140860034 (EtwpLogMemInfoWs.c)
 */

__int64 __fastcall EtwpLogMemInfoRundown(__int64 a1)
{
  _OWORD v3[2]; // [rsp+20h] [rbp-38h] BYREF

  memset(v3, 0, sizeof(v3));
  MmQuerySystemMemoryInformation(v3);
  EtwpLogMemInfo(a1, (__int64)v3);
  return EtwpLogMemInfoWs(a1, *(_QWORD *)&v3[0]);
}
