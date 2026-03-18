/*
 * XREFs of AnFwpDisableProgressTimer @ 0x140BA3CB4
 * Callers:
 *     AnFwDisplayProgressIndicator @ 0x140BA1FD0 (AnFwDisplayProgressIndicator.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140BA21B0 (AnFwpBackgroundUpdateTimer.c)
 *     AnFwDisplayFade @ 0x140BA36EC (AnFwDisplayFade.c)
 * Callees:
 *     KeCancelTimer @ 0x1402ECAA0 (KeCancelTimer.c)
 *     BgpTxtCacheDestroy @ 0x140BA4354 (BgpTxtCacheDestroy.c)
 */

void __fastcall AnFwpDisableProgressTimer(_BOOL8 a1)
{
  if ( byte_140EEF831 )
  {
    LOBYTE(a1) = 0;
    if ( (dword_140EEFD90 & 0x100000) != 0 )
      a1 = (dword_140EEFD90 & 0x1000) != 0;
    byte_140EEF831 = 0;
    if ( (dword_140EEFD90 & 0xC00) != 0xC00 && !a1 )
      KeCancelTimer(&stru_140E64CC0);
    BgpTxtCacheDestroy(a1);
  }
}
