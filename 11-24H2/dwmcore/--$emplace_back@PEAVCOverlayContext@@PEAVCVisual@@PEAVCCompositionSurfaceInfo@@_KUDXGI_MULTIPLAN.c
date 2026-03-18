/*
 * XREFs of ??$emplace_back@PEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@VCCornerRects@@VCMILMatrix@@V?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@V8@_N_N_NW4OverlaySize@@@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@VCCornerRects@@VCMILMatrix@@V?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@8_N99W4OverlaySize@@@Z @ 0x180268268
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@111AEBVCCornerRects@@AEBVCMILMatrix@@W4DXGI_MODE_ROTATION@@I_N7AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@78@Z @ 0x180268E88 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@.c)
 * Callees:
 *     ??$emplace@PEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@VCCornerRects@@VCMILMatrix@@V?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@V8@_N_N_NW4OverlaySize@@@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@1@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@1@PEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@VCCornerRects@@VCMILMatrix@@V?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@9_N_N_NW4OverlaySize@@@Z @ 0x18026815C (--$emplace@PEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KUDXGI_MULTIPLANE_OVE.c)
 */

_QWORD *__fastcall detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::emplace_back<COverlayContext *,CVisual *,CCompositionSurfaceInfo *,unsigned __int64,DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,CCornerRects,CMILMatrix,TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>,TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>,bool,bool,bool,enum OverlaySize>(
        _QWORD *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6,
        __int128 *a7,
        __int64 a8,
        __int64 a9,
        __int128 *a10,
        __int128 *a11,
        char a12,
        char a13,
        char a14,
        int a15)
{
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v28; // [rsp+90h] [rbp-80h] BYREF
  __int128 v29; // [rsp+A0h] [rbp-70h] BYREF
  __int128 v30; // [rsp+B0h] [rbp-60h] BYREF
  _OWORD v31[4]; // [rsp+C0h] [rbp-50h] BYREF
  int v32; // [rsp+100h] [rbp-10h]
  _OWORD v33[4]; // [rsp+110h] [rbp+0h] BYREF
  int v34; // [rsp+150h] [rbp+40h]
  _OWORD v35[7]; // [rsp+160h] [rbp+50h] BYREF
  __int64 v36; // [rsp+1E0h] [rbp+D0h] BYREF

  v36 = a1[1];
  v28 = *a11;
  v29 = *a10;
  v15 = *(_OWORD *)(a9 + 16);
  v31[0] = *(_OWORD *)a9;
  v16 = *(_OWORD *)(a9 + 32);
  v31[1] = v15;
  v17 = *(_OWORD *)(a9 + 48);
  v32 = *(_DWORD *)(a9 + 64);
  v31[2] = v16;
  v31[3] = v17;
  v18 = *(_OWORD *)(a8 + 16);
  v33[0] = *(_OWORD *)a8;
  v19 = *(_OWORD *)(a8 + 32);
  v33[1] = v18;
  v20 = *(_OWORD *)(a8 + 48);
  v34 = *(_DWORD *)(a8 + 64);
  v33[2] = v19;
  v33[3] = v20;
  v30 = *a7;
  v21 = a6[1];
  v35[0] = *a6;
  v22 = a6[2];
  v35[1] = v21;
  v23 = a6[3];
  v35[2] = v22;
  v24 = a6[4];
  v35[3] = v23;
  v25 = a6[5];
  v35[4] = v24;
  v26 = a6[6];
  v35[5] = v25;
  v35[6] = v26;
  return detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::emplace<COverlayContext *,CVisual *,CCompositionSurfaceInfo *,unsigned __int64,DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,CCornerRects,CMILMatrix,TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>,TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>,bool,bool,bool,enum OverlaySize>(
           a1,
           &a11,
           &v36,
           a2,
           a3,
           a4,
           a5,
           (__int64)v35,
           (__int64)&v30,
           (__int64)v33,
           (__int64)v31,
           (__int64)&v29,
           (__int64)&v28,
           a12,
           a13,
           a14,
           a15);
}
