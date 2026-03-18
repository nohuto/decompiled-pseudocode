/*
 * XREFs of ?IsCandidateDirectFlipCompatible@COverlayContext@@AEBA_NPEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@I_N@Z @ 0x180189CD8
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@33AEBVCCornerRects@@AEBVCMILMatrix@@W4DXGI_MODE_ROTATION@@I_N7AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@78@Z @ 0x180274714 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@.c)
 * Callees:
 *     ?IsDirectFlipSupportedOnTarget@COverlayContext@@AEBA_NPEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@@Z @ 0x18002C7A4 (-IsDirectFlipSupportedOnTarget@COverlayContext@@AEBA_NPEAVCCompositionSurfaceInfo@@PEAVISwapChai.c)
 *     ?IsPanelFitterCompatibleScale@COverlayContext@@AEBA_NAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x1801899A4 (-IsPanelFitterCompatibleScale@COverlayContext@@AEBA_NAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z.c)
 *     ?IsScanoutCompatible@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x180189E90 (-IsScanoutCompatible@CGlobalCompositionSurfaceInfo@@UEBA_NXZ.c)
 *     ?IsDirectFlipCompatible@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x180189EE0 (-IsDirectFlipCompatible@CDxHandleBitmapRealization@@UEBA_NXZ.c)
 *     ?IsOverlayRequired@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x18018A0F0 (-IsOverlayRequired@CDxHandleBitmapRealization@@UEBA_NXZ.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x1801EEEDC (McTemplateU0xq_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall COverlayContext::IsCandidateDirectFlipCompatible(
        COverlayContext *this,
        struct CCompositionSurfaceInfo *a2,
        struct ISwapChainRealization *a3,
        const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *a4,
        unsigned int a5,
        bool a6)
{
  char v6; // bl
  bool (__fastcall *v11)(CDxHandleBitmapRealization *__hidden); // rax
  bool v12; // al
  bool (__fastcall *v13)(CDxHandleBitmapRealization *__hidden); // rax
  bool (__fastcall *v15)(CGlobalCompositionSurfaceInfo *__hidden); // rax
  bool v16; // al
  __int64 v17; // rcx

  v6 = 0;
  if ( *((int *)this + 4920) <= 0 )
  {
    v11 = *(bool (__fastcall **)(CDxHandleBitmapRealization *__hidden))(*(_QWORD *)a3 + 168LL);
    v12 = v11 == CDxHandleBitmapRealization::IsDirectFlipCompatible
        ? CDxHandleBitmapRealization::IsDirectFlipCompatible(a3)
        : v11(a3);
    if ( v12 && !(*(unsigned __int8 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)a3 + 136LL))(a3) )
    {
      v13 = *(bool (__fastcall **)(CDxHandleBitmapRealization *__hidden))(*(_QWORD *)a3 + 152LL);
      if ( !(v13 == CDxHandleBitmapRealization::IsOverlayRequired
           ? CDxHandleBitmapRealization::IsOverlayRequired(a3)
           : v13(a3)) )
      {
        v15 = *(bool (__fastcall **)(CGlobalCompositionSurfaceInfo *__hidden))(*(_QWORD *)a2 + 200LL);
        v16 = v15 == CGlobalCompositionSurfaceInfo::IsScanoutCompatible
            ? CGlobalCompositionSurfaceInfo::IsScanoutCompatible(a2)
            : v15(a2);
        if ( v16 && (*(_BYTE *)a4 & 2) == 0 && (*(_BYTE *)a4 & 1) == 0 )
        {
          if ( COverlayContext::IsPanelFitterCompatibleScale(this, a4) )
          {
            if ( (*(unsigned __int8 (__fastcall **)(struct CCompositionSurfaceInfo *))(*(_QWORD *)a2 + 120LL))(a2)
              && (a6 && *((_BYTE *)this + 19777)
               || *(_QWORD *)(*((_QWORD *)g_pComposition + 77) + 32LL)
                - *(_QWORD *)(*((_QWORD *)g_pComposition + 77) + 24LL) == 8LL
               || *((_BYTE *)this + 19768)
               || a5 > 2) )
            {
              if ( COverlayContext::IsDirectFlipSupportedOnTarget(this, a2, a3) )
                return 1;
            }
          }
          else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
          {
            McTemplateU0xq_EventWriteTransfer(v17, &EVTDESC_DISPLAYSURFACE_REJECTCANDIDATE, *((_QWORD *)a2 + 5), 4LL);
          }
        }
      }
    }
  }
  return v6;
}
