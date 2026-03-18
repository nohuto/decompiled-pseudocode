/*
 * XREFs of ?ProcessSetInterpolationSpace@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GRADIENTBRUSH_SETINTERPOLATIONSPACE@@@Z @ 0x1802AC630
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?InvalidateGradient@CGradientBrush@@AEAAXXZ @ 0x18021B000 (-InvalidateGradient@CGradientBrush@@AEAAXXZ.c)
 */

__int64 __fastcall CGradientBrush::ProcessSetInterpolationSpace(
        CGradientBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_GRADIENTBRUSH_SETINTERPOLATIONSPACE *a3)
{
  int v3; // eax

  v3 = *((_DWORD *)a3 + 2);
  if ( v3 != *((_DWORD *)this + 56) )
  {
    *((_DWORD *)this + 56) = v3;
    CGradientBrush::InvalidateGradient(this);
  }
  return 0LL;
}
