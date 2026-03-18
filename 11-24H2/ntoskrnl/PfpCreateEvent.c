/*
 * XREFs of PfpCreateEvent @ 0x1407487C0
 * Callers:
 *     PfSnInitializePrefetcher @ 0x140C2CADC (PfSnInitializePrefetcher.c)
 *     PfpParametersInitialize @ 0x140C2CD40 (PfpParametersInitialize.c)
 * Callees:
 *     PfpCreateEventInternal @ 0x1407487E0 (PfpCreateEventInternal.c)
 */

__int64 __fastcall PfpCreateEvent(__int64 a1, __int64 a2, __int64 a3)
{
  return PfpCreateEventInternal(a1, a2, 656LL, a3);
}
