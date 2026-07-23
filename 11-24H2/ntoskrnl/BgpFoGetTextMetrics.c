/*
 * XREFs of BgpFoGetTextMetrics @ 0x1404D344C
 * Callers:
 *     BgpConsoleSetPointSize @ 0x1406990A8 (BgpConsoleSetPointSize.c)
 *     BgpTxtCreateRegion @ 0x140BB4908 (BgpTxtCreateRegion.c)
 *     BgpTxtDisplayString @ 0x140BB4BB0 (BgpTxtDisplayString.c)
 *     BgpFoDetermineFontInformation @ 0x140C7202C (BgpFoDetermineFontInformation.c)
 * Callees:
 *     BgpRasGetGlyphTextCellDimensions @ 0x14069BCD0 (BgpRasGetGlyphTextCellDimensions.c)
 */

__int64 __fastcall BgpFoGetTextMetrics(__int64 a1, __int64 a2)
{
  if ( !a1 || !a2 )
    return 3221225485LL;
  BgpRasGetGlyphTextCellDimensions(a1, a2 + 4, a2);
  return 0LL;
}
