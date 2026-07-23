/*
 * XREFs of AnFwpDisableProgressTimer @ 0x140BB5CB4
 * Callers:
 *     AnFwDisplayProgressIndicator @ 0x140BB3FD0 (AnFwDisplayProgressIndicator.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140BB41B0 (AnFwpBackgroundUpdateTimer.c)
 *     AnFwDisplayFade @ 0x140BB56EC (AnFwDisplayFade.c)
 * Callees:
 *     KeCancelTimer @ 0x1402BE1D0 (KeCancelTimer.c)
 *     BgpTxtCacheDestroy @ 0x140BB6354 (BgpTxtCacheDestroy.c)
 */

void __fastcall AnFwpDisableProgressTimer(_BOOL8 a1)
{
  if ( byte_140EEFD21 )
  {
    LOBYTE(a1) = 0;
    if ( (dword_140EF0270 & 0x100000) != 0 )
      a1 = (dword_140EF0270 & 0x1000) != 0;
    byte_140EEFD21 = 0;
    if ( (dword_140EF0270 & 0xC00) != 0xC00 && !a1 )
      KeCancelTimer(&stru_140E65080);
    BgpTxtCacheDestroy(a1);
  }
}
