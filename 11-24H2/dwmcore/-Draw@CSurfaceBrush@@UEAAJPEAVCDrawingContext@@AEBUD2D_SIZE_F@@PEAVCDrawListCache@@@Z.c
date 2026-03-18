/*
 * XREFs of ?Draw@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801D2BF0
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800500C0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801109C0 (-RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSurfaceBrush::Draw(
        CSurfaceBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  CSurfaceBrush::CSurfaceRenderStrategy *v4; // r10
  __int64 (__fastcall *v5)(CSurfaceBrush::CSurfaceRenderStrategy *, float **, struct CDrawingContext *, const struct D2D_SIZE_F *, struct CDrawListCache *); // rax

  v4 = (CSurfaceBrush::CSurfaceRenderStrategy *)*((_QWORD *)this + 17);
  v5 = *(__int64 (__fastcall **)(CSurfaceBrush::CSurfaceRenderStrategy *, float **, struct CDrawingContext *, const struct D2D_SIZE_F *, struct CDrawListCache *))(*(_QWORD *)v4 + 96LL);
  if ( v5 == CSurfaceBrush::CSurfaceRenderStrategy::Draw )
    return CBrush::Draw((CEffectBrush **)this, a2, a3, a4);
  else
    return v5(v4, (float **)this, a2, a3, a4);
}
