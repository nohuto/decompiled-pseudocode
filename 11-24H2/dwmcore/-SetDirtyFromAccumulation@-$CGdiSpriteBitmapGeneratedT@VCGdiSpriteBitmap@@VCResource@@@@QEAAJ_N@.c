/*
 * XREFs of ?SetDirtyFromAccumulation@?$CGdiSpriteBitmapGeneratedT@VCGdiSpriteBitmap@@VCResource@@@@QEAAJ_N@Z @ 0x1802282C0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?DirtyFromAccum@CGdiSpriteBitmap@@AEAAXXZ @ 0x180026C0C (-DirtyFromAccum@CGdiSpriteBitmap@@AEAAXXZ.c)
 */

__int64 __fastcall CGdiSpriteBitmapGeneratedT<CGdiSpriteBitmap,CResource>::SetDirtyFromAccumulation(
        __int64 a1,
        char a2)
{
  bool v2; // zf

  if ( a2 != *(_BYTE *)(a1 + 76) )
  {
    v2 = *(_QWORD *)(a1 + 128) == 0LL;
    *(_BYTE *)(a1 + 76) = a2;
    if ( !v2 )
    {
      if ( a2 )
      {
        *(_BYTE *)(a1 + 153) = 1;
        CGdiSpriteBitmap::DirtyFromAccum((CGdiSpriteBitmap *)a1);
      }
    }
  }
  return 0LL;
}
