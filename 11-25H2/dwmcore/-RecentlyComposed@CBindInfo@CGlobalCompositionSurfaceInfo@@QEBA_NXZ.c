/*
 * XREFs of ?RecentlyComposed@CBindInfo@CGlobalCompositionSurfaceInfo@@QEBA_NXZ @ 0x1801A6540
 * Callers:
 *     ?SetCompositionMode@CCompositionSurfaceBitmap@@UEAAX_NW4BufferCompositionMode@@AEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@PEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1801A6390 (-SetCompositionMode@CCompositionSurfaceBitmap@@UEAAX_NW4BufferCompositionMode@@AEBVCMILMatrix@@W.c)
 * Callees:
 *     <none>
 */

bool __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::RecentlyComposed(
        CGlobalCompositionSurfaceInfo::CBindInfo *this)
{
  __int64 v1; // rax

  v1 = 0LL;
  if ( g_pComposition )
    v1 = *((_QWORD *)g_pComposition + 111);
  return (unsigned __int64)(v1 - *((_QWORD *)this + 20)) <= 0xF;
}
