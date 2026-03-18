/*
 * XREFs of ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x18002C178
 * Callers:
 *     ?GetTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002BD80 (-GetTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT_F@.c)
 *     ?SetToRotation@CMILMatrix@@QEAAXMMW4DXGI_MODE_ROTATION@@@Z @ 0x1802118DC (-SetToRotation@CMILMatrix@@QEAAXMMW4DXGI_MODE_ROTATION@@@Z.c)
 *     ?Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MMW4DXGI_MODE_ROTATION@@PEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180250B78 (-Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@U.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x1802677DC (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILMatrix::Rotate90(CMILMatrix *this)
{
  CMILMatrix *v1; // rax
  __int64 v2; // rdx
  int v3; // xmm1_4

  v1 = this;
  v2 = 4LL;
  do
  {
    v3 = *(_DWORD *)v1;
    *(_DWORD *)v1 = *((_DWORD *)v1 + 1) ^ _xmm;
    *((_DWORD *)v1 + 1) = v3;
    v1 = (CMILMatrix *)((char *)v1 + 16);
    --v2;
  }
  while ( v2 );
  *((_BYTE *)this + 64) &= 0xCu;
  *((_BYTE *)this + 65) &= 0xFCu;
}
