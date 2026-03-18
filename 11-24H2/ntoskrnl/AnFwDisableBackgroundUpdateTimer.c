/*
 * XREFs of AnFwDisableBackgroundUpdateTimer @ 0x140BB008C
 * Callers:
 *     AnFwDisplayBackgroundUpdate @ 0x140BB1E44 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140BB21B0 (AnFwpBackgroundUpdateTimer.c)
 *     ResFwFreeContext @ 0x140BB34C4 (ResFwFreeContext.c)
 *     AnFwDisplayFade @ 0x140BB36EC (AnFwDisplayFade.c)
 * Callees:
 *     KeCancelTimer @ 0x140333B20 (KeCancelTimer.c)
 */

BOOLEAN AnFwDisableBackgroundUpdateTimer()
{
  BOOLEAN result; // al

  if ( byte_140EEFAC9 )
  {
    result = KeCancelTimer(&stru_140E64EC0);
    byte_140EEFAC9 = 0;
  }
  return result;
}
