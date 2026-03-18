/*
 * XREFs of ?Is2DAffine@Matrix3x3@@QEBA_NXZ @ 0x18024FFE8
 * Callers:
 *     ?IsCompatibleTransform@CRectangleMapStrategy@CEdgeFlagsMap@@SA_NPEBVMatrix3x3@@@Z @ 0x180151CF8 (-IsCompatibleTransform@CRectangleMapStrategy@CEdgeFlagsMap@@SA_NPEBVMatrix3x3@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Matrix3x3::Is2DAffine(Matrix3x3 *this)
{
  return COERCE_FLOAT(*((_DWORD *)this + 2) & _xmm) < 0.0000011920929
      && COERCE_FLOAT(*((_DWORD *)this + 5) & _xmm) < 0.0000011920929
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 8) - 1.0) & _xmm) < 0.0000011920929;
}
