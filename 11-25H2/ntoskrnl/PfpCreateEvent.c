/*
 * XREFs of PfpCreateEvent @ 0x14073C7B0
 * Callers:
 *     PfSnInitializePrefetcher @ 0x140C1B9DC (PfSnInitializePrefetcher.c)
 *     PfpParametersInitialize @ 0x140C1BC3C (PfpParametersInitialize.c)
 * Callees:
 *     PfpCreateEventInternal @ 0x14073C7D0 (PfpCreateEventInternal.c)
 */

__int64 __fastcall PfpCreateEvent(__int64 a1, __int64 a2, __int64 a3)
{
  return PfpCreateEventInternal(a1, a2, 656LL, a3);
}
