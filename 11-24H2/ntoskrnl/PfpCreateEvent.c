/*
 * XREFs of PfpCreateEvent @ 0x140746AB0
 * Callers:
 *     PfSnInitializePrefetcher @ 0x140C2EBFC (PfSnInitializePrefetcher.c)
 *     PfpParametersInitialize @ 0x140C2EE60 (PfpParametersInitialize.c)
 * Callees:
 *     PfpCreateEventInternal @ 0x140746AD0 (PfpCreateEventInternal.c)
 */

__int64 __fastcall PfpCreateEvent(__int64 a1, __int64 a2, __int64 a3)
{
  return PfpCreateEventInternal(a1, a2, 656LL, a3);
}
