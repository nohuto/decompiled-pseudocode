/*
 * XREFs of ?IsOpaqueRect@CNineGridBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z @ 0x18004B5D0
 * Callers:
 *     ?AddOcclusionInformation@CBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x18004B410 (-AddOcclusionInformation@CBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18004FEF0 (-RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?IsOpaqueRect@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z @ 0x18004B630 (-IsOpaqueRect@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CNineGridBrush::IsOpaqueRect(CNineGridBrush *this, const struct D2D_SIZE_F *a2, struct D2D_RECT_F *a3)
{
  char v3; // bl
  CSurfaceBrush *v5; // rcx
  bool (__fastcall *v6)(CSurfaceBrush *__hidden, const struct D2D_SIZE_F *, struct D2D_RECT_F *); // rax
  bool IsOpaqueRect; // al

  v3 = 0;
  if ( !*((_BYTE *)this + 168) )
  {
    v5 = (CSurfaceBrush *)*((_QWORD *)this + 13);
    if ( v5 )
    {
      v6 = *(bool (__fastcall **)(CSurfaceBrush *__hidden, const struct D2D_SIZE_F *, struct D2D_RECT_F *))(*(_QWORD *)v5 + 320LL);
      if ( v6 == CSurfaceBrush::IsOpaqueRect )
        IsOpaqueRect = CSurfaceBrush::IsOpaqueRect(v5, a2, a3);
      else
        IsOpaqueRect = v6(v5, a2, a3);
      if ( IsOpaqueRect )
        return 1;
    }
  }
  return v3;
}
