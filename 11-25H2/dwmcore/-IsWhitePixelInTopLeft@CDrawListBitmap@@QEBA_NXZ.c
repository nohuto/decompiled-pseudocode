/*
 * XREFs of ?IsWhitePixelInTopLeft@CDrawListBitmap@@QEBA_NXZ @ 0x1801E4FB4
 * Callers:
 *     ?AppendReconstructableEntry@CDrawListEntryBuilder@@AEAAJAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N2PEBUPrimitiveVertexAttributesDesc@@I@Z @ 0x180047920 (-AppendReconstructableEntry@CDrawListEntryBuilder@@AEAAJAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N2PE.c)
 *     ?CreateRenderingEffect@CCommonRenderingEffectFactory@@QEAAJAEBVCDrawListBitmap@@USamplerMode@@01PEAPEAVCRenderingEffect@@@Z @ 0x180128BA0 (-CreateRenderingEffect@CCommonRenderingEffectFactory@@QEAAJAEBVCDrawListBitmap@@USamplerMode@@01.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDrawListBitmap::IsWhitePixelInTopLeft(CCompositionSurfaceBitmap **this)
{
  CCompositionSurfaceBitmap *v1; // rcx
  __int64 (*v2)(void); // rax

  v1 = *this;
  if ( !v1 )
    return 0;
  v2 = *(__int64 (**)(void))(*(_QWORD *)v1 + 40LL);
  if ( (char *)v2 == (char *)CCompositionSurfaceBitmap::IsWhitePixelInTopLeft )
    return CCompositionSurfaceBitmap::IsWhitePixelInTopLeft(v1);
  else
    return v2();
}
