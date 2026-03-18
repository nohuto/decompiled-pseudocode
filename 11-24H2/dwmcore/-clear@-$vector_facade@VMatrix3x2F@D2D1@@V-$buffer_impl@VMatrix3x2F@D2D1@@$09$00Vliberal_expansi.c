/*
 * XREFs of ?clear@?$vector_facade@VMatrix3x2F@D2D1@@V?$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18014099C
 * Callers:
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180140BA0 (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ??1CShapeDrawingContext@@QEAA@XZ @ 0x1801E9DE0 (--1CShapeDrawingContext@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall detail::vector_facade<D2D1::Matrix3x2F,detail::buffer_impl<D2D1::Matrix3x2F,10,1,detail::liberal_expansion_policy>>::clear(
        _QWORD *a1)
{
  __int64 result; // rax

  result = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[1] - *a1) >> 3);
  if ( result )
  {
    result = 8 * ((__int64)(a1[1] - *a1) >> 3);
    a1[1] -= result;
  }
  return result;
}
