/*
 * XREFs of EtwpLogMemInfoRundown @ 0x1407B0C30
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140A15E44 (EtwpKernelTraceRundown.c)
 * Callees:
 *     MmQuerySystemMemoryInformation @ 0x1403D3E68 (MmQuerySystemMemoryInformation.c)
 *     EtwpLogMemInfo @ 0x1403D4060 (EtwpLogMemInfo.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     EtwpLogMemInfoWs @ 0x1408EE804 (EtwpLogMemInfoWs.c)
 */

__int64 __fastcall EtwpLogMemInfoRundown(__int64 a1)
{
  _OWORD v3[2]; // [rsp+20h] [rbp-38h] BYREF

  memset(v3, 0, sizeof(v3));
  MmQuerySystemMemoryInformation(v3);
  EtwpLogMemInfo(a1, (__int64)v3);
  return EtwpLogMemInfoWs(a1, *(_QWORD *)&v3[0]);
}
