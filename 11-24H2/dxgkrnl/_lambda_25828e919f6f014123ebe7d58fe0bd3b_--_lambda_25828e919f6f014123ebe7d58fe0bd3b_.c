/*
 * XREFs of _lambda_25828e919f6f014123ebe7d58fe0bd3b_::_lambda_25828e919f6f014123ebe7d58fe0bd3b_ @ 0x1401AA834
 * Callers:
 *     DxgkSetIndirectDisplayRenderAdapter @ 0x1401AF7FC (DxgkSetIndirectDisplayRenderAdapter.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall lambda_25828e919f6f014123ebe7d58fe0bd3b_::_lambda_25828e919f6f014123ebe7d58fe0bd3b_(
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
