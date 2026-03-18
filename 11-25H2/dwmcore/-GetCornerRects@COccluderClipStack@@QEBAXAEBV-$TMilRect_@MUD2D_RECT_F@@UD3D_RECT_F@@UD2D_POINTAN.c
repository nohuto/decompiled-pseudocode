/*
 * XREFs of ?GetCornerRects@COccluderClipStack@@QEBAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCCornerRects@@@Z @ 0x180272340
 * Callers:
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18023E0CC (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 * Callees:
 *     ?GetTopByReference@?$CWatermarkStack@VCCornerRects@@$07$01$07@@QEBAPEBVCCornerRects@@XZ @ 0x1802723A0 (-GetTopByReference@-$CWatermarkStack@VCCornerRects@@$07$01$07@@QEBAPEBVCCornerRects@@XZ.c)
 *     ?Intersect@CCornerRects@@QEAA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18027248C (-Intersect@CCornerRects@@QEAA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 */

__int64 __fastcall COccluderClipStack::GetCornerRects(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r8
  __int64 v5; // r9

  result = CWatermarkStack<CCornerRects,8,2,8>::GetTopByReference(a1 + 24, a2, a3, a2);
  if ( result )
  {
    if ( !*(_BYTE *)(result + 64) )
    {
      *(_OWORD *)v4 = *(_OWORD *)result;
      *(_OWORD *)(v4 + 16) = *(_OWORD *)(result + 16);
      *(_OWORD *)(v4 + 32) = *(_OWORD *)(result + 32);
      *(_OWORD *)(v4 + 48) = *(_OWORD *)(result + 48);
      *(_BYTE *)(v4 + 64) = *(_BYTE *)(result + 64);
      return CCornerRects::Intersect(v4, v5);
    }
  }
  return result;
}
