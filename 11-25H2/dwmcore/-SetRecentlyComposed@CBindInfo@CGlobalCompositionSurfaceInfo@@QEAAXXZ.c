/*
 * XREFs of ?SetRecentlyComposed@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ @ 0x18024C15C
 * Callers:
 *     ?SetCompositionMode@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_NW4BufferCompositionMode@@AEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@PEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1801A6250 (-SetCompositionMode@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_NW4BufferCompositionMode@@AEB.c)
 *     ?SetCompositionMode@CCompositionSurfaceBitmap@@UEAAX_NW4BufferCompositionMode@@AEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@PEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1801A6390 (-SetCompositionMode@CCompositionSurfaceBitmap@@UEAAX_NW4BufferCompositionMode@@AEBVCMILMatrix@@W.c)
 *     ?SetCompositionMode@CGlobalCompositionSurfaceInfo@@UEAAX_NW4BufferCompositionMode@@AEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@PEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1801A6570 (-SetCompositionMode@CGlobalCompositionSurfaceInfo@@UEAAX_NW4BufferCompositionMode@@AEBVCMILMatri.c)
 *     ?SetRecentlyComposed@CGlobalCompositionSurfaceInfo@@UEAAXXZ @ 0x180255800 (-SetRecentlyComposed@CGlobalCompositionSurfaceInfo@@UEAAXXZ.c)
 * Callees:
 *     ?SetIndependentFlipNotify@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_N@Z @ 0x18023FD8C (-SetIndependentFlipNotify@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_N@Z.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::SetRecentlyComposed(
        CGlobalCompositionSurfaceInfo::CBindInfo *this)
{
  __int64 v1; // rax
  bool v2; // zf

  v1 = 0LL;
  if ( g_pComposition )
    v1 = *((_QWORD *)g_pComposition + 111);
  v2 = *((_BYTE *)this + 180) == 0;
  *((_QWORD *)this + 20) = v1;
  if ( !v2 && !*((_BYTE *)this + 181) && *((int *)this + 44) >= 2 )
    CGlobalCompositionSurfaceInfo::CBindInfo::SetIndependentFlipNotify(this, 1u);
}
