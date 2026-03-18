/*
 * XREFs of ?Top@CBaseClipStack@@QEBAXPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180198070
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800BB3C0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18023E0CC (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseClipStack::Top(__int64 *a1, _OWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rcx

  result = *((unsigned int *)a1 + 2);
  if ( (_DWORD)result )
  {
    v4 = (unsigned int)(result - 1);
    result = *a1;
    *a2 = *(_OWORD *)(*a1 + 16 * v4);
  }
  else
  {
    *a2 = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcInfinite;
  }
  return result;
}
