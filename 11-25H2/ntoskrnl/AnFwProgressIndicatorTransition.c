/*
 * XREFs of AnFwProgressIndicatorTransition @ 0x140BA0008
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140BA5400 (BgpFwLibraryInitialize.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x1402ECF90 (KeSetCoalescableTimer.c)
 *     KeInitializeTimer @ 0x140454D20 (KeInitializeTimer.c)
 *     KeInitializeDpc @ 0x140454E30 (KeInitializeDpc.c)
 */

BOOLEAN AnFwProgressIndicatorTransition()
{
  BOOLEAN result; // al

  if ( byte_140EEF831 )
  {
    KeInitializeTimer(&stru_140E64CC0);
    KeInitializeDpc(&stru_140E64C00, AnFwpProgressIndicatorTimer, 0LL);
    return KeSetCoalescableTimer(&stru_140E64CC0, 0LL, 0x1Eu, 0, &stru_140E64C00);
  }
  return result;
}
