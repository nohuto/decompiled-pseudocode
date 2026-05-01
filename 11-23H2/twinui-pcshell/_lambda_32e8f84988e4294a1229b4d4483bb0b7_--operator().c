/*
 * XREFs of _lambda_32e8f84988e4294a1229b4d4483bb0b7_::operator() @ 0x18024FB74
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_32e8f84988e4294a1229b4d4483bb0b7___::Run @ 0x180251BC0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_32e8f84988e4294a1229b4d4483bb0b7___--Run.c)
 * Callees:
 *     ??R_lambda_6f980fbbc6752bcaca442c74782693a9_@@QEBA@XZ @ 0x18024FF24 (--R_lambda_6f980fbbc6752bcaca442c74782693a9_@@QEBA@XZ.c)
 */

void __fastcall lambda_32e8f84988e4294a1229b4d4483bb0b7_::operator()(void **a1)
{
  void **v1; // rcx
  const void *v2; // rax
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = a1 + 1;
  try
  {
    _lambda_6f980fbbc6752bcaca442c74782693a9_::operator()(v1);
  }
  catch ( ... )
  {
    v2 = (const void *)std::current_exception(v3);
    __ExceptionPtrAssign(*a1, v2);
    __ExceptionPtrDestroy(v3);
  }
}
