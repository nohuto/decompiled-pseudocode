/*
 * XREFs of PpmPerfPercentageFromFrequency @ 0x14074FB54
 * Callers:
 *     PpmPerfGetVmCppcConfig @ 0x1405D2AE4 (PpmPerfGetVmCppcConfig.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PpmPerfPercentageFromFrequency(unsigned int a1, unsigned int a2)
{
  return (((unsigned __int64)a2 >> 1) + 100LL * a1) / a2;
}
