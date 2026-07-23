/*
 * XREFs of PpmCheckProcessorInit @ 0x1405D41B0
 * Callers:
 *     <none>
 * Callees:
 *     PpmResetPerfTimes @ 0x14044063C (PpmResetPerfTimes.c)
 *     PpmHeteroHgsProcessorInit @ 0x1405D48A0 (PpmHeteroHgsProcessorInit.c)
 */

__int64 __fastcall PpmCheckProcessorInit(__int64 a1)
{
  PpmResetPerfTimes(a1 + 35248);
  PpmHeteroHgsProcessorInit(a1, 0LL);
  return 0LL;
}
