/*
 * XREFs of CreateAsyncCallbackWithLambda__lambda_00579e35fd3f40d9daeda2b75c1830f2___ @ 0x1801D817C
 * Callers:
 *     CApplicationViewManager::_HandleFlashingChange__lambda_dafc2c99c39dbaf60a815ea558bf8360___ @ 0x1803CB5F8 (CApplicationViewManager--_HandleFlashingChange__lambda_dafc2c99c39dbaf60a815ea558bf8360___.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____ @ 0x1801D079C (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b773.c)
 *     CAsyncCallbackWithLambda__lambda_00579e35fd3f40d9daeda2b75c1830f2___::CAsyncCallbackWithLambda__lambda_00579e35fd3f40d9daeda2b75c1830f2___ @ 0x1801D8724 (CAsyncCallbackWithLambda__lambda_00579e35fd3f40d9daeda2b75c1830f2___--CAsyncCallbackWithLambda__.c)
 */

__int64 *__fastcall CreateAsyncCallbackWithLambda__lambda_00579e35fd3f40d9daeda2b75c1830f2_(__int64 *a1, __int64 a2)
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
    v6 = CAsyncCallbackWithLambda__lambda_00579e35fd3f40d9daeda2b75c1830f2___::CAsyncCallbackWithLambda__lambda_00579e35fd3f40d9daeda2b75c1830f2___(
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
