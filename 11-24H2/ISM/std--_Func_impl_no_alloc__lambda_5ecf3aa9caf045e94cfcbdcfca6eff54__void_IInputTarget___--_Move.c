/*
 * XREFs of std::_Func_impl_no_alloc__lambda_5ecf3aa9caf045e94cfcbdcfca6eff54__void_IInputTarget___::_Move @ 0x1800F23D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_5ecf3aa9caf045e94cfcbdcfca6eff54__void_IInputTarget___::_Move(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = off_1801E4D40;
  result = a2;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
  return result;
}
