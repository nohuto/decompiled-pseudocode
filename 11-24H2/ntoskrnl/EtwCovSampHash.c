/*
 * XREFs of EtwCovSampHash @ 0x140414E20
 * Callers:
 *     EtwpCovSampContextAddSamples @ 0x140923570 (EtwpCovSampContextAddSamples.c)
 *     EtwpCovSampContextGetModule @ 0x140923930 (EtwpCovSampContextGetModule.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall EtwCovSampHash(unsigned __int64 a1, __int64 a2)
{
  int v2; // r9d
  int v3; // r10d
  int v4; // r9d
  unsigned __int64 v5; // r8

  v2 = 16777619 * (a2 ^ (unsigned __int8)a1);
  v3 = 16777619 * (v2 ^ BYTE5(a1) ^ (16777619 * (HIDWORD(a2) ^ BYTE4(a1))));
  v4 = 16777619 * (v3 ^ BYTE2(a1) ^ (16777619 * (v2 ^ BYTE1(a1))));
  v5 = 16777619 * (v4 ^ HIBYTE(a1) ^ (16777619 * (v3 ^ (unsigned int)BYTE6(a1))));
  return (v5 << 32) | (unsigned int)v5 ^ (unsigned __int64)(16777619 * (v4 ^ (unsigned int)BYTE3(a1)));
}
