/*
 * XREFs of ?GetSurfaceTransform@CPassthroughEffect@@UEBAAEBUD2D_MATRIX_3X2_F@@I@Z @ 0x1802E51B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct D2D_MATRIX_3X2_F *__fastcall CPassthroughEffect::GetSurfaceTransform(CPassthroughEffect *this)
{
  return (const struct D2D_MATRIX_3X2_F *)&CPassthroughEffect::k_identityTransform;
}
