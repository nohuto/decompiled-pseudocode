/*
 * XREFs of std::_Func_impl_no_alloc__lambda_44c05b5872deb73713c8c59481f10520__long_CMeshGeometry2D_const___::_Do_call @ 0x1802A3400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_44c05b5872deb73713c8c59481f10520__long_CMeshGeometry2D_const___::_Do_call(
        __int64 a1,
        const struct CMeshGeometry2D **a2)
{
  return CRenderData::DrawMesh2D(
           *(struct CDrawListEntryBuilder **)(a1 + 8),
           *a2,
           *(unsigned int (__fastcall ****)(CMILRefCountImpl *__hidden))(a1 + 16));
}
