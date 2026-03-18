/*
 * XREFs of PpmPerfPercentageFromFrequency @ 0x140743A84
 * Callers:
 *     PpmPerfGetVmCppcConfig @ 0x1405CE210 (PpmPerfGetVmCppcConfig.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PpmPerfPercentageFromFrequency(unsigned int a1, unsigned int a2)
{
  return (((unsigned __int64)a2 >> 1) + 100LL * a1) / a2;
}
