/*
 * XREFs of std::_Func_impl_no_alloc__lambda_60673b061d188a4eb97306c361edc41f__void_IAudioStreamInfo___::_Move @ 0x1800BFBC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_60673b061d188a4eb97306c361edc41f__void_IAudioStreamInfo___::_Move(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = off_18017ACD8;
  result = a2;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
  return result;
}
