/*
 * XREFs of ?HasValidSource@CWindowBackgroundTreatment@@QEBA_NXZ @ 0x180108DF8
 * Callers:
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180023C04 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x180107B68 (-ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?HasValidRenderingRealization@CWindowBackgroundTreatment@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x180108AF4 (-HasValidRenderingRealization@CWindowBackgroundTreatment@@QEBA_NAEBVRenderTargetInfo@@@Z.c)
 * Callees:
 *     ?IsOfType@CEffectBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180108E60 (-IsOfType@CEffectBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012D970 (-IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CWindowBackgroundTreatment::HasValidSource(CWindowBackgroundTreatment *this)
{
  __int64 v2; // rcx
  __int64 (__fastcall *v3)(__int64, __int64); // rax
  char v4; // al

  v2 = *((_QWORD *)this + 9);
  v3 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 64LL);
  if ( v3 == CEffectBrush::IsOfType )
  {
    v4 = CEffectBrush::IsOfType(v2, 22LL);
  }
  else if ( v3 == CColorBrush::IsOfType )
  {
    v4 = CColorBrush::IsOfType(v2, 22LL);
  }
  else
  {
    v4 = v3(v2, 22LL);
  }
  return v4 || *((_QWORD *)this + 10) != 0LL;
}
