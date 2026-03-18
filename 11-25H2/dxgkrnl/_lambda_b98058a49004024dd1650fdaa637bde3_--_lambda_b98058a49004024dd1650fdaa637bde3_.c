/*
 * XREFs of _lambda_b98058a49004024dd1650fdaa637bde3_::_lambda_b98058a49004024dd1650fdaa637bde3_ @ 0x1401A8314
 * Callers:
 *     DxgkSetIndirectDisplayRenderAdapter @ 0x1401AD31C (DxgkSetIndirectDisplayRenderAdapter.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall lambda_b98058a49004024dd1650fdaa637bde3_::_lambda_b98058a49004024dd1650fdaa637bde3_(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _QWORD *result; // rax

  a1[3] = a5;
  a1[4] = a6;
  result = a1;
  *a1 = a2;
  a1[1] = a3;
  a1[2] = a4;
  return result;
}
