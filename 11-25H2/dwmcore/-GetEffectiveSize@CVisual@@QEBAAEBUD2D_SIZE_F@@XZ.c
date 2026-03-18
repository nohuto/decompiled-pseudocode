/*
 * XREFs of ?GetEffectiveSize@CVisual@@QEBAAEBUD2D_SIZE_F@@XZ @ 0x18025B860
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800BB3C0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

const struct D2D_SIZE_F *__fastcall CVisual::GetEffectiveSize(CVisual *this)
{
  return (const struct D2D_SIZE_F *)((char *)this + 144);
}
