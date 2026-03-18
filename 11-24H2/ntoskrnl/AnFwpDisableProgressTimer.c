/*
 * XREFs of AnFwpDisableProgressTimer @ 0x140BB3CB4
 * Callers:
 *     AnFwDisplayProgressIndicator @ 0x140BB1FD0 (AnFwDisplayProgressIndicator.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140BB21B0 (AnFwpBackgroundUpdateTimer.c)
 *     AnFwDisplayFade @ 0x140BB36EC (AnFwDisplayFade.c)
 * Callees:
 *     KeCancelTimer @ 0x140333B20 (KeCancelTimer.c)
 *     BgpTxtCacheDestroy @ 0x140BB4354 (BgpTxtCacheDestroy.c)
 */

void __fastcall AnFwpDisableProgressTimer(_BOOL8 a1)
{
  if ( byte_140EEFAC8 )
  {
    LOBYTE(a1) = 0;
    if ( (dword_140EF0050 & 0x100000) != 0 )
      a1 = (dword_140EF0050 & 0x1000) != 0;
    byte_140EEFAC8 = 0;
    if ( (dword_140EF0050 & 0xC00) != 0xC00 && !a1 )
      KeCancelTimer(&stru_140E64F00);
    BgpTxtCacheDestroy(a1);
  }
}
