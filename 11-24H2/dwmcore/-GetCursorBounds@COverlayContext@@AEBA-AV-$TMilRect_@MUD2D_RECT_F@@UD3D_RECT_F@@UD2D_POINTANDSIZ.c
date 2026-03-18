/*
 * XREFs of ?GetCursorBounds@COverlayContext@@AEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18026BF8C
 * Callers:
 *     ?BeginOverlayCandidateCollection@COverlayContext@@QEAA_NPEBVCRegion@@PEAV2@@Z @ 0x1802317DC (-BeginOverlayCandidateCollection@COverlayContext@@QEAA_NPEBVCRegion@@PEAV2@@Z.c)
 *     ?Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@IPEA_N_N@Z @ 0x180233400 (-Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@UtagR.c)
 *     ?ForceSoftwareCursor@COverlayContext@@AEAAXXZ @ 0x18026A168 (-ForceSoftwareCursor@COverlayContext@@AEAAXXZ.c)
 *     ?SetHardwareCursor@COverlayContext@@QEAAXPEAVCCursorVisual@@AEBVCMILMatrix@@@Z @ 0x18026CF64 (-SetHardwareCursor@COverlayContext@@QEAAXPEAVCCursorVisual@@AEBVCMILMatrix@@@Z.c)
 *     ?UpdateHardwareCursor@COverlayContext@@AEAA_NXZ @ 0x18026D0CC (-UpdateHardwareCursor@COverlayContext@@AEAA_NXZ.c)
 * Callees:
 *     ?GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ @ 0x180060010 (-GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800750E0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?GetHardwareShapeBounds@CCursorVisual@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCDesktopTree@@@Z @ 0x18029057C (-GetHardwareShapeBounds@CCursorVisual@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct D2D_RECT_F *__fastcall COverlayContext::GetCursorBounds(COverlayContext *this, struct D2D_RECT_F *a2)
{
  __int64 v4; // rax
  float *MonitorTransform; // rax
  float v6; // xmm0_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm1_4

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 56LL))(*(_QWORD *)this);
  CCursorVisual::GetHardwareShapeBounds(*((_QWORD *)this + 2403), a2, v4);
  MonitorTransform = (float *)COverlayContext::GetMonitorTransform(this);
  v6 = MonitorTransform[2];
  if ( v6 > a2->left )
    a2->left = v6;
  v7 = MonitorTransform[3];
  if ( v7 > a2->top )
    a2->top = v7;
  v8 = MonitorTransform[4];
  if ( a2->right > v8 )
    a2->right = v8;
  v9 = MonitorTransform[5];
  if ( a2->bottom > v9 )
    a2->bottom = v9;
  if ( IsEmpty(a2) )
  {
    *(_QWORD *)&a2->right = 0LL;
    *(_QWORD *)&a2->left = 0LL;
  }
  return a2;
}
