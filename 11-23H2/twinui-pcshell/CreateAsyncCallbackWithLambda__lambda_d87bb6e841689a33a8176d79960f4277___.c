/*
 * XREFs of CreateAsyncCallbackWithLambda__lambda_d87bb6e841689a33a8176d79960f4277___ @ 0x1801D81E8
 * Callers:
 *     CApplicationViewManager::_HandleFlashingChange__lambda_d2283a63d6b85274b5dfb750ad5a931e___ @ 0x1803CB45C (CApplicationViewManager--_HandleFlashingChange__lambda_d2283a63d6b85274b5dfb750ad5a931e___.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____ @ 0x1801D079C (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b773.c)
 *     CAsyncCallbackWithLambda__lambda_d87bb6e841689a33a8176d79960f4277___::CAsyncCallbackWithLambda__lambda_d87bb6e841689a33a8176d79960f4277___ @ 0x1801D87A4 (CAsyncCallbackWithLambda__lambda_d87bb6e841689a33a8176d79960f4277___--CAsyncCallbackWithLambda__.c)
 */

__int64 *__fastcall CreateAsyncCallbackWithLambda__lambda_d87bb6e841689a33a8176d79960f4277_(__int64 *a1, __int64 a2)
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
    v6 = CAsyncCallbackWithLambda__lambda_d87bb6e841689a33a8176d79960f4277___::CAsyncCallbackWithLambda__lambda_d87bb6e841689a33a8176d79960f4277___(
           v5,
           a2);
    v8 = 0LL;
    v4 = v6;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____(&v8);
  result = a1;
  *a1 = v4;
  return result;
}
