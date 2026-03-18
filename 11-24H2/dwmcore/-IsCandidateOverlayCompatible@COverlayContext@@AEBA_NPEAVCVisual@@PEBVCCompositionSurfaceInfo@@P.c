/*
 * XREFs of ?IsCandidateOverlayCompatible@COverlayContext@@AEBA_NPEAVCVisual@@PEBVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4OverlaySize@@_NI5@Z @ 0x18026C324
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@111AEBVCCornerRects@@AEBVCMILMatrix@@W4DXGI_MODE_ROTATION@@I_N7AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@78@Z @ 0x180268E88 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@.c)
 * Callees:
 *     ?FindOverlayCandidateIndex@COverlayContext@@AEBAHPEBVCVisual@@PEBVCCompositionSurfaceInfo@@_K@Z @ 0x1800609CC (-FindOverlayCandidateIndex@COverlayContext@@AEBAHPEBVCVisual@@PEBVCCompositionSurfaceInfo@@_K@Z.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x1801C6A8C (McTemplateU0xq_EventWriteTransfer.c)
 *     ?IsOverlayCompatibleScale@COverlayContext@@AEBA_NPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4OverlaySize@@_N@Z @ 0x18026C6A4 (-IsOverlayCompatibleScale@COverlayContext@@AEBA_NPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4Overl.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall COverlayContext::IsCandidateOverlayCompatible(
        COverlayContext *a1,
        const struct CVisual *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        char a7,
        unsigned int a8,
        char a9)
{
  char v12; // bl
  __int64 v13; // r9
  __int64 v14; // rcx

  v12 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a4 + 144LL))(a4)
    && (unsigned int)COverlayContext::FindOverlayCandidateIndex(a1, a2, 0LL, 0LL) == -1
    && (unsigned int)COverlayContext::FindOverlayCandidateIndex(
                       a1,
                       0LL,
                       (const struct CCompositionSurfaceInfo *)a3,
                       0LL) == -1
    && (*(unsigned __int8 (__fastcall **)(__int64 *))(*a3 + 200))(a3)
    && !IsRectEmpty((const RECT *)(a5 + 4))
    && !IsRectEmpty((const RECT *)(a5 + 20))
    && !IsRectEmpty((const RECT *)(a5 + 36)) )
  {
    LOBYTE(v13) = a7;
    if ( (unsigned __int8)COverlayContext::IsOverlayCompatibleScale(a1, a5, a6, v13) )
    {
      if ( a9 && *((_BYTE *)a1 + 19587) || *((_BYTE *)a1 + 19577) || a8 > 2 )
        return 1;
    }
    else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
    {
      McTemplateU0xq_EventWriteTransfer(v14, &EVTDESC_DISPLAYSURFACE_REJECTCANDIDATE, a3[5], 4);
    }
  }
  return v12;
}
