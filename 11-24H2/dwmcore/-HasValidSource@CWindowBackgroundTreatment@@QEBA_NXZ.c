/*
 * XREFs of ?HasValidSource@CWindowBackgroundTreatment@@QEBA_NXZ @ 0x1801C82F4
 * Callers:
 *     ?ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x180032808 (-ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180033CD4 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?HasValidRenderingRealization@CWindowBackgroundTreatment@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x1801C7FF0 (-HasValidRenderingRealization@CWindowBackgroundTreatment@@QEBA_NAEBVRenderTargetInfo@@@Z.c)
 * Callees:
 *     ?IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800380C0 (-IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CEffectBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801C8360 (-IsOfType@CEffectBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CWindowBackgroundTreatment::HasValidSource(CWindowBackgroundTreatment *this)
{
  __int64 v2; // rcx
  bool (__fastcall *v3)(__int64, unsigned __int64); // rax
  char v4; // al

  v2 = *((_QWORD *)this + 9);
  v3 = *(bool (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v2 + 64LL);
  if ( (char *)v3 == (char *)CEffectBrush::IsOfType )
  {
    v4 = CEffectBrush::IsOfType(v2, 22LL);
  }
  else if ( v3 == CColorBrush::IsOfType )
  {
    v4 = CColorBrush::IsOfType(v2, 0x16uLL);
  }
  else
  {
    v4 = v3(v2, 22uLL);
  }
  return v4 || *((_QWORD *)this + 10) != 0LL;
}
