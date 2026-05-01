/*
 * XREFs of _anonymous_namespace_::RunSynchronousInSTA__lambda_50bb0220b5fa1030b541f5726b219874___ @ 0x18024EE50
 * Callers:
 *     ??$ApplyTaskbarLayout@$$VP8CPinnedList@@EAAJXZ@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAAJW4ApiType@PinManagerTipTests@@P8CPinnedList@@EAAJXZ@Z @ 0x180699DEC (--$ApplyTaskbarLayout@$$VP8CPinnedList@@EAAJXZ@PinManager@implementation@Shell@Internal@Windows@.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_c9b45bb761211b190adbb06a9db82044___ @ 0x18024EAA8 (Windows--Internal--ComTaskPool--QueueTask__lambda_c9b45bb761211b190adbb06a9db82044___.c)
 *     ??R_lambda_50bb0220b5fa1030b541f5726b219874_@@QEBA@XZ @ 0x18024FD60 (--R_lambda_50bb0220b5fa1030b541f5726b219874_@@QEBA@XZ.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x1804DF9CC (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x1804E0BE0 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall anonymous_namespace_::RunSynchronousInSTA__lambda_50bb0220b5fa1030b541f5726b219874___(__int128 *a1)
{
  HRESULT ApartmentType; // eax
  wil::details::in1diag3 *v3; // rcx
  DWORD CurrentThreadId; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rax
  __int128 *v9; // [rsp+20h] [rbp-40h] BYREF
  __int128 v10; // [rsp+28h] [rbp-38h]
  APTTYPE pAptType; // [rsp+38h] [rbp-28h] BYREF
  __int128 v12; // [rsp+40h] [rbp-20h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
  v3 = retaddr;
  if ( ApartmentType < 0 )
    goto LABEL_9;
  if ( pAptType && pAptType != APTTYPE_MAINSTA )
  {
    v12 = 0LL;
    __ExceptionPtrCreate(&v12);
    v9 = &v12;
    v10 = *a1;
    CurrentThreadId = GetCurrentThreadId();
    v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_c9b45bb761211b190adbb06a9db82044___(
           v6,
           v5,
           CurrentThreadId,
           (__int64)&v9);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x7F,
        (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
        (const char *)(unsigned int)v7,
        (int)v9);
    if ( !__ExceptionPtrToBool(&v12) )
    {
      __ExceptionPtrDestroy(&v12);
      return;
    }
    v8 = std::exception_ptr::exception_ptr((std::exception_ptr *)&v9, (const struct std::exception_ptr *)&v12);
    ApartmentType = std::rethrow_exception(v8);
LABEL_9:
    wil::details::in1diag3::Throw_Hr(
      v3,
      (void *)0x6B,
      (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
      (const char *)(unsigned int)ApartmentType,
      (int)v9);
  }
  _lambda_50bb0220b5fa1030b541f5726b219874_::operator()(a1);
}
