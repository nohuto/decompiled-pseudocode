/*
 * XREFs of AnFwProgressIndicatorTransition @ 0x140BB0008
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140BB5400 (BgpFwLibraryInitialize.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x140334000 (KeSetCoalescableTimer.c)
 *     KeInitializeTimer @ 0x140455420 (KeInitializeTimer.c)
 *     KeInitializeDpc @ 0x140455470 (KeInitializeDpc.c)
 */

BOOLEAN AnFwProgressIndicatorTransition()
{
  BOOLEAN result; // al

  if ( byte_140EEFAC8 )
  {
    KeInitializeTimer(&stru_140E64F00);
    KeInitializeDpc(&stru_140E64E40, AnFwpProgressIndicatorTimer, 0LL);
    return KeSetCoalescableTimer(&stru_140E64F00, 0LL, 0x1Eu, 0, &stru_140E64E40);
  }
  return result;
}
