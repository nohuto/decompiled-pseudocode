/*
 * XREFs of _lambda_c9b45bb761211b190adbb06a9db82044_::operator() @ 0x180250268
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c9b45bb761211b190adbb06a9db82044___::Run @ 0x180251C40 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c9b45bb761211b190adbb06a9db82044___--Run.c)
 * Callees:
 *     ??R_lambda_50bb0220b5fa1030b541f5726b219874_@@QEBA@XZ @ 0x18024FD60 (--R_lambda_50bb0220b5fa1030b541f5726b219874_@@QEBA@XZ.c)
 */

void __fastcall lambda_c9b45bb761211b190adbb06a9db82044_::operator()(void **a1)
{
  _QWORD *v1; // rcx
  const void *v2; // rax
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = a1 + 1;
  try
  {
    _lambda_50bb0220b5fa1030b541f5726b219874_::operator()(v1);
  }
  catch ( ... )
  {
    v2 = (const void *)std::current_exception(v3);
    __ExceptionPtrAssign(*a1, v2);
    __ExceptionPtrDestroy(v3);
  }
}
