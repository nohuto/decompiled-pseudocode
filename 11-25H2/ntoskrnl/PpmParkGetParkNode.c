/*
 * XREFs of PpmParkGetParkNode @ 0x140493530
 * Callers:
 *     PopAccumulateNonDripsIdleCpuTime @ 0x140493398 (PopAccumulateNonDripsIdleCpuTime.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x140493488 (PopAccumulateNonActivatedCpuTime.c)
 *     PpmIdleGetPackageIdleIntervalStats @ 0x140A1CF1C (PpmIdleGetPackageIdleIntervalStats.c)
 *     PpmIdleGetConcurrencyStats @ 0x140A60704 (PpmIdleGetConcurrencyStats.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmParkGetParkNode(__int16 a1, __int16 a2)
{
  __int64 v2; // r10
  unsigned int i; // r9d
  __int64 v4; // r8

  v2 = 0LL;
  for ( i = 0; i < PpmParkNumNodes; ++i )
  {
    v4 = PpmParkNodes + 208LL * i;
    if ( *(_WORD *)(v4 + 6) == a1 && *(_WORD *)(v4 + 8) == a2 )
      return PpmParkNodes + 208LL * i;
  }
  return v2;
}
