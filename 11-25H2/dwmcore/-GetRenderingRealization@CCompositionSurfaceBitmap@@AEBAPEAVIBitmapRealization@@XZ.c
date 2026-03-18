/*
 * XREFs of ?GetRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVIBitmapRealization@@XZ @ 0x180108A80
 * Callers:
 *     ?ProcessReadyFlipExSurfaces@CWindowNode@@AEAA_NXZ @ 0x180108888 (-ProcessReadyFlipExSurfaces@CWindowNode@@AEAA_NXZ.c)
 *     ?SetFlipExSurface@CWindowNode@@QEAAJPEAX@Z @ 0x180113838 (-SetFlipExSurface@CWindowNode@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ @ 0x1800CFA2C (-ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct IBitmapRealization *__fastcall CCompositionSurfaceBitmap::GetRenderingRealization(
        CCompositionSurfaceBitmap *this)
{
  CGlobalCompositionSurfaceInfo *v1; // rbx
  struct IBitmapRealization *(__fastcall *v2)(CGlobalCompositionSurfaceInfo *); // rax
  __int64 v3; // rax
  __int64 v4; // rcx

  v1 = (CGlobalCompositionSurfaceInfo *)*((_QWORD *)this + 12);
  if ( !v1 )
    return 0LL;
  v2 = *(struct IBitmapRealization *(__fastcall **)(CGlobalCompositionSurfaceInfo *))(*(_QWORD *)v1 + 48LL);
  if ( v2 != CGlobalCompositionSurfaceInfo::GetRenderingRealization )
    return v2(v1);
  if ( !*((_QWORD *)v1 + 26) )
    CGlobalCompositionSurfaceInfo::ForceUpdateRenderingRealization(v1);
  v3 = *((_QWORD *)v1 + 26);
  v4 = v3 + 8;
  if ( !v3 )
    return 0LL;
  return (struct IBitmapRealization *)v4;
}
