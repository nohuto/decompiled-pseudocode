/*
 * XREFs of CreateAsyncCallbackWithLambda__lambda_4963465e0f00482d68929271c70599ba___ @ 0x18030C0FC
 * Callers:
 *     CApplicationViewManager::_HandleFlashingChange__lambda_d2283a63d6b85274b5dfb750ad5a931e___ @ 0x1801B811C (CApplicationViewManager--_HandleFlashingChange__lambda_d2283a63d6b85274b5dfb750ad5a931e___.c)
 * Callees:
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____ @ 0x18022A2BC (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_634a.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     CAsyncCallbackWithLambda__lambda_4963465e0f00482d68929271c70599ba___::CAsyncCallbackWithLambda__lambda_4963465e0f00482d68929271c70599ba___ @ 0x18030C868 (CAsyncCallbackWithLambda__lambda_4963465e0f00482d68929271c70599ba___--CAsyncCallbackWithLambda__.c)
 */

__int64 *__fastcall CreateAsyncCallbackWithLambda__lambda_4963465e0f00482d68929271c70599ba_(__int64 *a1, __int64 a2)
{
  __int64 v4; // rbx
  void *v5; // rax
  __int64 v6; // rax
  __int64 *result; // rax
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v5;
  if ( v5 )
  {
    v6 = CAsyncCallbackWithLambda__lambda_4963465e0f00482d68929271c70599ba___::CAsyncCallbackWithLambda__lambda_4963465e0f00482d68929271c70599ba___(
           v5,
           a2);
    v8 = 0LL;
    v4 = v6;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____(&v8);
  result = a1;
  *a1 = v4;
  return result;
}
