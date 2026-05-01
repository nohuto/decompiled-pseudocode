/*
 * XREFs of _lambda_c339d120b376647924ab8d58f8f10fc7_::operator() @ 0x1802501F8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c339d120b376647924ab8d58f8f10fc7___::Run @ 0x180251C20 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c339d120b376647924ab8d58f8f10fc7___--Run.c)
 * Callees:
 *     _lambda_49390bb1d2cae92a58be327124002af0_::operator() @ 0x18024FBE4 (_lambda_49390bb1d2cae92a58be327124002af0_--operator().c)
 */

void __fastcall lambda_c339d120b376647924ab8d58f8f10fc7_::operator()(void **a1)
{
  __int64 v1; // rcx
  const void *v2; // rax
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (__int64)(a1 + 1);
  try
  {
    lambda_49390bb1d2cae92a58be327124002af0_::operator()(v1);
  }
  catch ( ... )
  {
    v2 = (const void *)std::current_exception(v3);
    __ExceptionPtrAssign(*a1, v2);
    __ExceptionPtrDestroy(v3);
  }
}
