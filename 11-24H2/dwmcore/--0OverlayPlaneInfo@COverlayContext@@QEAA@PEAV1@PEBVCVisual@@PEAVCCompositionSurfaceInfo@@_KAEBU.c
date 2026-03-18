/*
 * XREFs of ??0OverlayPlaneInfo@COverlayContext@@QEAA@PEAV1@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@_KAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCCornerRects@@AEBVCMILMatrix@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@8_N99W4OverlaySize@@@Z @ 0x1802685C0
 * Callers:
 *     ??$emplace@PEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@VCCornerRects@@VCMILMatrix@@V?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@V8@_N_N_NW4OverlaySize@@@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@1@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@1@PEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@VCCornerRects@@VCMILMatrix@@V?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@9_N_N_NW4OverlaySize@@@Z @ 0x18026815C (--$emplace@PEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KUDXGI_MULTIPLANE_OVE.c)
 * Callees:
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x180061570 (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 */

_QWORD *__fastcall COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6,
        _OWORD *a7,
        __int64 a8,
        __int64 a9,
        _OWORD *a10,
        _OWORD *a11,
        char a12,
        char a13,
        char a14,
        int a15)
{
  memset_0(a1, 0, 0x188uLL);
  a1[1] = a3;
  wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
    a1 + 2,
    a4);
  *((_BYTE *)a1 + 224) = 1;
  a1[18] = 0LL;
  a1[19] = 0LL;
  a1[20] = 0LL;
  a1[21] = 0LL;
  a1[22] = 0LL;
  a1[23] = 0LL;
  a1[24] = 0LL;
  a1[25] = 0LL;
  a1[26] = 0LL;
  a1[27] = 0LL;
  *(_QWORD *)((char *)a1 + 228) = 0LL;
  *(_QWORD *)((char *)a1 + 236) = 0LL;
  *(_QWORD *)((char *)a1 + 244) = 0LL;
  *(_QWORD *)((char *)a1 + 252) = 0LL;
  *(_QWORD *)((char *)a1 + 260) = 0LL;
  *(_QWORD *)((char *)a1 + 268) = 0LL;
  *((_DWORD *)a1 + 86) = 0;
  a1[3] = a5;
  *a1 = a2;
  *((_OWORD *)a1 + 2) = *a6;
  *((_OWORD *)a1 + 3) = a6[1];
  *((_OWORD *)a1 + 4) = a6[2];
  *((_OWORD *)a1 + 5) = a6[3];
  *((_OWORD *)a1 + 6) = a6[4];
  *((_OWORD *)a1 + 7) = a6[5];
  *((_OWORD *)a1 + 8) = a6[6];
  *((_OWORD *)a1 + 9) = *a7;
  *((_OWORD *)a1 + 10) = *(_OWORD *)a8;
  *((_OWORD *)a1 + 11) = *(_OWORD *)(a8 + 16);
  *((_OWORD *)a1 + 12) = *(_OWORD *)(a8 + 32);
  *((_OWORD *)a1 + 13) = *(_OWORD *)(a8 + 48);
  *((_BYTE *)a1 + 224) = *(_BYTE *)(a8 + 64);
  *(_OWORD *)(a1 + 35) = *(_OWORD *)a9;
  *(_OWORD *)(a1 + 37) = *(_OWORD *)(a9 + 16);
  *(_OWORD *)(a1 + 39) = *(_OWORD *)(a9 + 32);
  *(_OWORD *)(a1 + 41) = *(_OWORD *)(a9 + 48);
  *((_DWORD *)a1 + 86) = *(_DWORD *)(a9 + 64);
  *(_OWORD *)((char *)a1 + 228) = *a10;
  *(_OWORD *)((char *)a1 + 244) = *a11;
  *(_OWORD *)((char *)a1 + 260) = *a11;
  *((_BYTE *)a1 + 364) = a12;
  *((_BYTE *)a1 + 365) = a13;
  *((_BYTE *)a1 + 366) = a14;
  *((_DWORD *)a1 + 90) = a15;
  return a1;
}
