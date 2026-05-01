/*
 * XREFs of _lambda_5db4e25fc9e771b1735cfc95eb4c8d49_::operator() @ 0x1805E4064
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5db4e25fc9e771b1735cfc95eb4c8d49___::Run @ 0x1805E8B40 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5db4e25fc9e771b1735cfc95eb4c8d49___--Run.c)
 * Callees:
 *     ??R_lambda_5724e9f0897f2fd11b6a24af4b09628e_@@QEBA@XZ @ 0x1805E3FBC (--R_lambda_5724e9f0897f2fd11b6a24af4b09628e_@@QEBA@XZ.c)
 */

void __fastcall lambda_5db4e25fc9e771b1735cfc95eb4c8d49_::operator()(void **a1)
{
  __int64 v1; // rcx
  __int128 v2; // [rsp+20h] [rbp-18h] BYREF

  v1 = (__int64)(a1 + 1);
  try
  {
    _lambda_5724e9f0897f2fd11b6a24af4b09628e_::operator()(v1);
  }
  catch ( ... )
  {
    v2 = 0LL;
    __ExceptionPtrCreate(&v2);
    __ExceptionPtrCurrentException(&v2);
    __ExceptionPtrAssign(*a1, &v2);
    __ExceptionPtrDestroy(&v2);
  }
}
