/*
 * XREFs of _anonymous_namespace_::RunSynchronousInSTA__lambda_de2d726059b44d27a392c508ba387a14___ @ 0x18024F204
 * Callers:
 *     ??$ApplyTaskbarLayout@W4TaskbarLayoutType@@P8CPinnedList@@EAAJW41@@Z@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAAJW4ApiType@PinManagerTipTests@@P8CPinnedList@@EAAJW4TaskbarLayoutType@@@Z1@Z @ 0x18008618C (--$ApplyTaskbarLayout@W4TaskbarLayoutType@@P8CPinnedList@@EAAJW41@@Z@PinManager@implementation@S.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_bcfbc8e9dbb18e4ddb6540cdb574c293___ @ 0x18024E988 (Windows--Internal--ComTaskPool--QueueTask__lambda_bcfbc8e9dbb18e4ddb6540cdb574c293___.c)
 *     ??R_lambda_de2d726059b44d27a392c508ba387a14_@@QEBA@XZ @ 0x1802502D8 (--R_lambda_de2d726059b44d27a392c508ba387a14_@@QEBA@XZ.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x1804DF9CC (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x1804E0BE0 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall anonymous_namespace_::RunSynchronousInSTA__lambda_de2d726059b44d27a392c508ba387a14___(__int128 *a1)
{
  HRESULT ApartmentType; // eax
  wil::details::in1diag3 *v3; // rcx
  DWORD CurrentThreadId; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rax
  __int128 *v9; // [rsp+20h] [rbp-50h] BYREF
  __int128 v10; // [rsp+28h] [rbp-48h]
  __int64 v11; // [rsp+38h] [rbp-38h]
  APTTYPE pAptType; // [rsp+40h] [rbp-30h] BYREF
  __int128 v13; // [rsp+48h] [rbp-28h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
  v3 = retaddr;
  if ( ApartmentType < 0 )
    goto LABEL_9;
  if ( pAptType && pAptType != APTTYPE_MAINSTA )
  {
    v13 = 0LL;
    __ExceptionPtrCreate(&v13);
    v9 = &v13;
    v10 = *a1;
    v11 = *((_QWORD *)a1 + 2);
    CurrentThreadId = GetCurrentThreadId();
    v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_bcfbc8e9dbb18e4ddb6540cdb574c293___(
           v6,
           v5,
           CurrentThreadId,
           &v9);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x7F,
        (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
        (const char *)(unsigned int)v7,
        (int)v9);
    if ( !__ExceptionPtrToBool(&v13) )
    {
      __ExceptionPtrDestroy(&v13);
      return;
    }
    v8 = std::exception_ptr::exception_ptr((std::exception_ptr *)&v9, (const struct std::exception_ptr *)&v13);
    ApartmentType = std::rethrow_exception(v8);
LABEL_9:
    wil::details::in1diag3::Throw_Hr(
      v3,
      (void *)0x6B,
      (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
      (const char *)(unsigned int)ApartmentType,
      (int)v9);
  }
  _lambda_de2d726059b44d27a392c508ba387a14_::operator()(a1);
}
