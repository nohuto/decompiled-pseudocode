/*
 * XREFs of AnFwDisableBackgroundUpdateTimer @ 0x140BA008C
 * Callers:
 *     AnFwDisplayBackgroundUpdate @ 0x140BA1E44 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140BA21B0 (AnFwpBackgroundUpdateTimer.c)
 *     ResFwFreeContext @ 0x140BA34C4 (ResFwFreeContext.c)
 *     AnFwDisplayFade @ 0x140BA36EC (AnFwDisplayFade.c)
 * Callees:
 *     KeCancelTimer @ 0x1402ECAA0 (KeCancelTimer.c)
 */

BOOLEAN AnFwDisableBackgroundUpdateTimer()
{
  BOOLEAN result; // al

  if ( byte_140EEF832 )
  {
    result = KeCancelTimer(&stru_140E64C80);
    byte_140EEF832 = 0;
  }
  return result;
}
