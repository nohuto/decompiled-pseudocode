/*
 * XREFs of ?GetInverseDesktopMPOTransform@COverlayContext@@QEBAXPEAVCMILMatrix@@@Z @ 0x1801F3254
 * Callers:
 *     ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@PEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180242F58 (-DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@PEAV-$TMilRect_@HUtagRECT@@UD2D_POINT.c)
 * Callees:
 *     ?GetVirtualModeClip@COverlayContext@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800231A8 (-GetVirtualModeClip@COverlayContext@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTAND.c)
 *     ?GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ @ 0x180060010 (-GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ.c)
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1800FE738 (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_ea_1800FE738.c)
 */

void __fastcall COverlayContext::GetInverseDesktopMPOTransform(COverlayContext *this, struct CMILMatrix *a2)
{
  char v4; // al
  const struct CMonitorTransform *MonitorTransform; // rax
  float v6; // xmm1_4
  float *VirtualModeClip; // rax
  float v8[4]; // [rsp+20h] [rbp-28h] BYREF
  float v9[6]; // [rsp+30h] [rbp-18h] BYREF

  if ( *((_BYTE *)this + 19089) )
  {
    MonitorTransform = COverlayContext::GetMonitorTransform(this);
    v8[0] = 0.0;
    v8[1] = 0.0;
    v6 = (float)*((int *)MonitorTransform + 11);
    v8[2] = (float)*((int *)MonitorTransform + 10);
    v8[3] = v6;
    VirtualModeClip = COverlayContext::GetVirtualModeClip((CLegacyRenderTarget **)this, v9);
    CMILMatrix::InferAffineMatrix((__int64)a2, VirtualModeClip, v8);
  }
  else
  {
    *(_QWORD *)a2 = 1065353216LL;
    *((_QWORD *)a2 + 1) = 0LL;
    *((_DWORD *)a2 + 4) = 0;
    *(_QWORD *)((char *)a2 + 20) = 1065353216LL;
    *(_QWORD *)((char *)a2 + 28) = 0LL;
    *((_DWORD *)a2 + 9) = 0;
    *((_QWORD *)a2 + 5) = 1065353216LL;
    *((_QWORD *)a2 + 6) = 0LL;
    *((_DWORD *)a2 + 14) = 0;
    *((_DWORD *)a2 + 15) = 1065353216;
    v4 = *((_BYTE *)a2 + 65) & 0xE9;
    *((_BYTE *)a2 + 64) = -86;
    *((_BYTE *)a2 + 65) = v4 | 0x29;
  }
}
