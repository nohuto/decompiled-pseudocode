/*
 * XREFs of AnFwProgressIndicatorTransition @ 0x140BB2008
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140BB7400 (BgpFwLibraryInitialize.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x1402BE6B0 (KeSetCoalescableTimer.c)
 *     KeInitializeTimer @ 0x14044A0E0 (KeInitializeTimer.c)
 *     KeInitializeDpc @ 0x14044A220 (KeInitializeDpc.c)
 */

BOOLEAN AnFwProgressIndicatorTransition()
{
  BOOLEAN result; // al

  if ( byte_140EEFD21 )
  {
    KeInitializeTimer(&stru_140E65080);
    KeInitializeDpc(&stru_140E64FC0, AnFwpProgressIndicatorTimer, 0LL);
    return KeSetCoalescableTimer(&stru_140E65080, 0LL, 0x1Eu, 0, &stru_140E64FC0);
  }
  return result;
}
