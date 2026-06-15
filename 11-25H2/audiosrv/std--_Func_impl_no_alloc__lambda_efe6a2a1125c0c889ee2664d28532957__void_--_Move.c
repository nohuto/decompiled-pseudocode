/*
 * XREFs of std::_Func_impl_no_alloc__lambda_efe6a2a1125c0c889ee2664d28532957__void_::_Move @ 0x1800C13E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_efe6a2a1125c0c889ee2664d28532957__void_::_Move(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rax

  *(_QWORD *)a2 = off_180170F78;
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a2 + 16) = v2;
  *(_BYTE *)(a2 + 24) = *(_BYTE *)(a1 + 24);
  return a2;
}
