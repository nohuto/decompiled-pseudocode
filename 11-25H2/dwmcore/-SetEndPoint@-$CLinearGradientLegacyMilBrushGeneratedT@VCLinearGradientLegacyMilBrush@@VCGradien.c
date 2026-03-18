/*
 * XREFs of ?SetEndPoint@?$CLinearGradientLegacyMilBrushGeneratedT@VCLinearGradientLegacyMilBrush@@VCGradientLegacyMilBrush@@@@QEAAJUD2D_POINT_2F@@@Z @ 0x18023441C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLinearGradientLegacyMilBrushGeneratedT<CLinearGradientLegacyMilBrush,CGradientLegacyMilBrush>::SetEndPoint(
        __int64 a1,
        __int64 a2)
{
  if ( *(float *)&a2 != *(float *)(a1 + 152) || *((float *)&a2 + 1) != *(float *)(a1 + 156) )
  {
    *(_QWORD *)(a1 + 152) = a2;
    *(_BYTE *)(a1 + 208) = 1;
  }
  return 0LL;
}
