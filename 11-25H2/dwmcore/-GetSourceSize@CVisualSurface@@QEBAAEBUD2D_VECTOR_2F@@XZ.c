/*
 * XREFs of ?GetSourceSize@CVisualSurface@@QEBAAEBUD2D_VECTOR_2F@@XZ @ 0x18001510C
 * Callers:
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x180015130 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 * Callees:
 *     <none>
 */

const struct D2D_VECTOR_2F *__fastcall CVisualSurface::GetSourceSize(CVisualSurface *this)
{
  const struct D2D_VECTOR_2F *result; // rax

  result = (const struct D2D_VECTOR_2F *)((char *)this + 184);
  if ( *((_BYTE *)this + 204) )
    return (const struct D2D_VECTOR_2F *)((char *)this + 192);
  return result;
}
