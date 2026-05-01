/*
 * XREFs of _lambda_96fcfb23d2949330f9f81abba36111b7_::operator() @ 0x180250118
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_96fcfb23d2949330f9f81abba36111b7___::Run @ 0x180251BE0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_96fcfb23d2949330f9f81abba36111b7___--Run.c)
 * Callees:
 *     _lambda_1fbeaa579e3ee671bf380f4b4d3dd4b7_::operator() @ 0x18024F9DC (_lambda_1fbeaa579e3ee671bf380f4b4d3dd4b7_--operator().c)
 */

void __fastcall lambda_96fcfb23d2949330f9f81abba36111b7_::operator()(void **a1)
{
  __int64 v1; // rcx
  const void *v2; // rax
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (__int64)(a1 + 1);
  try
  {
    lambda_1fbeaa579e3ee671bf380f4b4d3dd4b7_::operator()(v1);
  }
  catch ( ... )
  {
    v2 = (const void *)std::current_exception(v3);
    __ExceptionPtrAssign(*a1, v2);
    __ExceptionPtrDestroy(v3);
  }
}
