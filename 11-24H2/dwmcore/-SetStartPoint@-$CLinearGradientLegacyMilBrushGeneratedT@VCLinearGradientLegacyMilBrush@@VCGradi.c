/*
 * XREFs of ?SetStartPoint@?$CLinearGradientLegacyMilBrushGeneratedT@VCLinearGradientLegacyMilBrush@@VCGradientLegacyMilBrush@@@@QEAAJUD2D_POINT_2F@@@Z @ 0x180249F20
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLinearGradientLegacyMilBrushGeneratedT<CLinearGradientLegacyMilBrush,CGradientLegacyMilBrush>::SetStartPoint(
        __int64 a1,
        __int64 a2)
{
  if ( *(float *)&a2 != *(float *)(a1 + 144) || *((float *)&a2 + 1) != *(float *)(a1 + 148) )
  {
    *(_QWORD *)(a1 + 144) = a2;
    *(_BYTE *)(a1 + 208) = 1;
  }
  return 0LL;
}
