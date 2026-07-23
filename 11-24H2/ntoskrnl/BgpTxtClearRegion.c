/*
 * XREFs of BgpTxtClearRegion @ 0x140BB48D8
 * Callers:
 *     BgpTxtDisplayString @ 0x140BB4BB0 (BgpTxtDisplayString.c)
 * Callees:
 *     BgpGxDrawRectangle @ 0x14047D084 (BgpGxDrawRectangle.c)
 */

__int64 __fastcall BgpTxtClearRegion(__int64 a1)
{
  if ( a1 && (*(_DWORD *)(a1 + 72) & 1) != 0 )
    return BgpGxDrawRectangle(*(int **)(a1 + 24), a1);
  else
    return 3221225485LL;
}
