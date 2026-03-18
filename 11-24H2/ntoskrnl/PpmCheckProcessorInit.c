/*
 * XREFs of PpmCheckProcessorInit @ 0x1405D6B90
 * Callers:
 *     <none>
 * Callees:
 *     PpmResetPerfTimes @ 0x140447F1C (PpmResetPerfTimes.c)
 *     PpmHeteroHgsProcessorInit @ 0x1405D72FC (PpmHeteroHgsProcessorInit.c)
 */

__int64 __fastcall PpmCheckProcessorInit(__int64 a1)
{
  PpmResetPerfTimes(a1 + 35248);
  PpmHeteroHgsProcessorInit(a1, 0LL);
  return 0LL;
}
