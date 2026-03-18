/*
 * XREFs of ?GenerateDrawList@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801FBD00
 * Callers:
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800D4130 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?GenerateDrawList@CSurfaceRenderStrategy@CSurfaceBrush@@UEBAJPEAV2@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801FBD50 (-GenerateDrawList@CSurfaceRenderStrategy@CSurfaceBrush@@UEBAJPEAV2@PEAVCDrawingContext@@AEBUD2D_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int __fastcall CSurfaceBrush::GenerateDrawList(
        CSurfaceBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  CSurfaceBrush::CSurfaceRenderStrategy *v7; // rcx
  int (*v8)(CSurfaceBrush::CSurfaceRenderStrategy *__hidden, struct CSurfaceBrush *, struct CDrawingContext *, const struct D2D_SIZE_F *, struct CDrawListCache *); // rax

  v7 = (CSurfaceBrush::CSurfaceRenderStrategy *)*((_QWORD *)this + 17);
  v8 = *(int (**)(CSurfaceBrush::CSurfaceRenderStrategy *__hidden, struct CSurfaceBrush *, struct CDrawingContext *, const struct D2D_SIZE_F *, struct CDrawListCache *))(*(_QWORD *)v7 + 104LL);
  if ( v8 == CSurfaceBrush::CSurfaceRenderStrategy::GenerateDrawList )
    return CSurfaceBrush::CSurfaceRenderStrategy::GenerateDrawList(v7, this, a2, a3, a4);
  else
    return ((__int64 (__fastcall *)(CSurfaceBrush::CSurfaceRenderStrategy *, CSurfaceBrush *, struct CDrawingContext *, const struct D2D_SIZE_F *, struct CDrawListCache *))v8)(
             v7,
             this,
             a2,
             a3,
             a4);
}
