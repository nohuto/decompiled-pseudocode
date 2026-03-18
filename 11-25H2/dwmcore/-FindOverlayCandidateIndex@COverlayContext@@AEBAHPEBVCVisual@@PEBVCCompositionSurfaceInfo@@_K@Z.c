/*
 * XREFs of ?FindOverlayCandidateIndex@COverlayContext@@AEBAHPEBVCVisual@@PEBVCCompositionSurfaceInfo@@_K@Z @ 0x18002C6EC
 * Callers:
 *     ?ReleaseObsoletePlaneAssignments@COverlayContext@@AEAAXXZ @ 0x18002D8C8 (-ReleaseObsoletePlaneAssignments@COverlayContext@@AEAAXXZ.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z @ 0x18023CA68 (-EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z.c)
 *     ?IsCandidateOverlayCompatible@COverlayContext@@AEBA_NPEAVCVisual@@PEBVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4OverlaySize@@_NI5@Z @ 0x180276E90 (-IsCandidateOverlayCompatible@COverlayContext@@AEBA_NPEAVCVisual@@PEBVCCompositionSurfaceInfo@@P.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall COverlayContext::FindOverlayCandidateIndex(
        COverlayContext *this,
        const struct CVisual *a2,
        const struct CCompositionSurfaceInfo *a3,
        __int64 a4)
{
  __int64 v4; // rax
  unsigned int v5; // r10d
  __int64 v8; // rbx
  unsigned int i; // r8d
  __int64 v11; // rdx
  unsigned int v12; // [rsp+Ch] [rbp+Ch]

  LODWORD(v4) = 0;
  v5 = -1;
  v12 = 0;
  if ( a3 )
  {
    v4 = *((_QWORD *)a3 + 5);
    v12 = HIDWORD(v4);
  }
  v8 = *((_QWORD *)this + 11);
  for ( i = 0; i < -1030792151 * (unsigned int)((*((_QWORD *)this + 12) - v8) >> 4); ++i )
  {
    v11 = 400LL * i;
    if ( (!a2 || *(const struct CVisual **)(v8 + v11 + 8) == a2)
      && (!a3 || *(_QWORD *)(*(_QWORD *)(v8 + v11 + 16) + 40LL) == __PAIR64__(v12, v4))
      && (!a4 || *(_QWORD *)(v8 + v11 + 24) == a4) )
    {
      return i;
    }
  }
  return v5;
}
