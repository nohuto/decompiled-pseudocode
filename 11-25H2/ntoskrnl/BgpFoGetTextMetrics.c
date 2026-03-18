/*
 * XREFs of BgpFoGetTextMetrics @ 0x1404DAA20
 * Callers:
 *     BgpConsoleSetPointSize @ 0x14068CCD8 (BgpConsoleSetPointSize.c)
 *     BgpTxtCreateRegion @ 0x140BA2908 (BgpTxtCreateRegion.c)
 *     BgpTxtDisplayString @ 0x140BA2BB0 (BgpTxtDisplayString.c)
 *     BgpFoDetermineFontInformation @ 0x140C5EAEC (BgpFoDetermineFontInformation.c)
 * Callees:
 *     BgpRasGetGlyphTextCellDimensions @ 0x14068F900 (BgpRasGetGlyphTextCellDimensions.c)
 */

__int64 __fastcall BgpFoGetTextMetrics(__int64 a1, __int64 a2)
{
  if ( !a1 || !a2 )
    return 3221225485LL;
  BgpRasGetGlyphTextCellDimensions(a1, a2 + 4, a2);
  return 0LL;
}
