/*
 * XREFs of PpmCheckProcessorInit @ 0x1405D2230
 * Callers:
 *     <none>
 * Callees:
 *     PpmResetPerfTimes @ 0x1403ECADC (PpmResetPerfTimes.c)
 *     PpmHeteroHgsProcessorInit @ 0x1405D2868 (PpmHeteroHgsProcessorInit.c)
 */

__int64 __fastcall PpmCheckProcessorInit(__int64 a1)
{
  PpmResetPerfTimes(a1 + 35248);
  PpmHeteroHgsProcessorInit(a1, 0LL);
  return 0LL;
}
