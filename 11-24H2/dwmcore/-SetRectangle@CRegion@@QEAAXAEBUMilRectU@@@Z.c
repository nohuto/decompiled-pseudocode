/*
 * XREFs of ?SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z @ 0x18005B278
 * Callers:
 *     ?CalcDesktopClip@COverlayContext@@AEAA_NAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@PEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180027A6C (-CalcDesktopClip@COverlayContext@@AEAA_NAEBV-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gs.c)
 *     ?MarkFullInvalid@CD2DBitmapCache@@QEAAXXZ @ 0x18005A2D4 (-MarkFullInvalid@CD2DBitmapCache@@QEAAXXZ.c)
 *     ?Initialize@CSecondaryD2DBitmap@@MEAAJXZ @ 0x18005C660 (-Initialize@CSecondaryD2DBitmap@@MEAAJXZ.c)
 *     ?AddTightDirtyRect@?$CTargetDirtyBase@$07@@MEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180172990 (-AddTightDirtyRect@-$CTargetDirtyBase@$07@@MEAAXPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?Initialize@CSecondarySysmemBitmap@@IEAAJXZ @ 0x18018CAC0 (-Initialize@CSecondarySysmemBitmap@@IEAAJXZ.c)
 *     ?SetFullTightDirtyRegion@CMonitorDirty@@QEAAXXZ @ 0x18022369C (-SetFullTightDirtyRegion@CMonitorDirty@@QEAAXXZ.c)
 *     ?MarkFullInvalid@CSwapChainBuffer@@UEAAXXZ @ 0x1802285A0 (-MarkFullInvalid@CSwapChainBuffer@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CRegion::SetRectangle(CRegion *this, const struct MilRectU *a2)
{
  int v2; // r11d
  int v3; // r10d
  int v4; // eax
  int v5; // r9d
  _DWORD *v6; // rdx

  v2 = *(_DWORD *)a2;
  v3 = *((_DWORD *)a2 + 2);
  v4 = *((_DWORD *)a2 + 1);
  v5 = *((_DWORD *)a2 + 3);
  if ( *(_DWORD *)a2 >= v3 || v4 >= v5 )
  {
    **(_DWORD **)this = 0;
  }
  else
  {
    v6 = *(_DWORD **)this;
    *v6 = 2;
    v6[1] = v2;
    v6[3] = v4;
    v6[2] = v3;
    v6[4] = 16;
    v6[7] = v2;
    v6[8] = v3;
    v6[5] = v5;
    v6[6] = 16;
  }
}
