/*
 * XREFs of std::_Func_impl_no_alloc__lambda_02f5f1fbcf15b576b00898c5b7a1de2a__void_::_Move @ 0x1800BFF90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_02f5f1fbcf15b576b00898c5b7a1de2a__void_::_Move(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  *(_QWORD *)a2 = off_18017ACA8;
  v2 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 8) = v2;
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
  result = a2;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)(a2 + 32) = *(_OWORD *)(a1 + 32);
  return result;
}
