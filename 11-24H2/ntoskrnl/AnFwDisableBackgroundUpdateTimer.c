/*
 * XREFs of AnFwDisableBackgroundUpdateTimer @ 0x140BB208C
 * Callers:
 *     AnFwDisplayBackgroundUpdate @ 0x140BB3E44 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140BB41B0 (AnFwpBackgroundUpdateTimer.c)
 *     ResFwFreeContext @ 0x140BB54C4 (ResFwFreeContext.c)
 *     AnFwDisplayFade @ 0x140BB56EC (AnFwDisplayFade.c)
 * Callees:
 *     KeCancelTimer @ 0x1402BE1D0 (KeCancelTimer.c)
 */

BOOLEAN AnFwDisableBackgroundUpdateTimer()
{
  BOOLEAN result; // al

  if ( byte_140EEFD22 )
  {
    result = KeCancelTimer(&stru_140E65040);
    byte_140EEFD22 = 0;
  }
  return result;
}
