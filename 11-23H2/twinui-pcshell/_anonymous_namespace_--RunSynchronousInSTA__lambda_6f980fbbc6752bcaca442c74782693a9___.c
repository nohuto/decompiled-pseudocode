/*
 * XREFs of _anonymous_namespace_::RunSynchronousInSTA__lambda_6f980fbbc6752bcaca442c74782693a9___ @ 0x18024EF7C
 * Callers:
 *     ?MoveTaskbarPin@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@@HW4PINNEDLISTMODIFYCALLER@@@Z @ 0x180250B60 (-MoveTaskbarPin@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@@H.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_32e8f84988e4294a1229b4d4483bb0b7___ @ 0x18024E868 (Windows--Internal--ComTaskPool--QueueTask__lambda_32e8f84988e4294a1229b4d4483bb0b7___.c)
 *     ??R_lambda_6f980fbbc6752bcaca442c74782693a9_@@QEBA@XZ @ 0x18024FF24 (--R_lambda_6f980fbbc6752bcaca442c74782693a9_@@QEBA@XZ.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x1804DF9CC (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x1804E0BE0 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 */

void __fastcall anonymous_namespace_::RunSynchronousInSTA__lambda_6f980fbbc6752bcaca442c74782693a9___(__int128 *a1)
{
  HRESULT ApartmentType; // eax
  wil::details::in1diag3 *v3; // rcx
  DWORD CurrentThreadId; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rax
  int v9[4]; // [rsp+20h] [rbp-19h] BYREF
  __int128 *v10; // [rsp+30h] [rbp-9h] BYREF
  __int128 v11; // [rsp+38h] [rbp-1h]
  __int128 v12; // [rsp+48h] [rbp+Fh]
  __int64 v13; // [rsp+58h] [rbp+1Fh]
  APTTYPE pAptType; // [rsp+60h] [rbp+27h] BYREF
  __int128 v15; // [rsp+68h] [rbp+2Fh] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+78h] [rbp+3Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+5Fh]

  ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
  v3 = retaddr;
  if ( ApartmentType < 0 )
    goto LABEL_9;
  if ( pAptType && pAptType != APTTYPE_MAINSTA )
  {
    v15 = 0LL;
    __ExceptionPtrCreate(&v15);
    v10 = &v15;
    v11 = *a1;
    v12 = a1[1];
    v13 = *((_QWORD *)a1 + 4);
    CurrentThreadId = GetCurrentThreadId();
    v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_32e8f84988e4294a1229b4d4483bb0b7___(
           v6,
           v5,
           CurrentThreadId,
           &v10);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x7F,
        (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
        (const char *)(unsigned int)v7,
        v9[0]);
    if ( !__ExceptionPtrToBool(&v15) )
    {
      __ExceptionPtrDestroy(&v15);
      return;
    }
    v8 = std::exception_ptr::exception_ptr((std::exception_ptr *)v9, (const struct std::exception_ptr *)&v15);
    ApartmentType = std::rethrow_exception(v8);
LABEL_9:
    wil::details::in1diag3::Throw_Hr(
      v3,
      (void *)0x6B,
      (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
      (const char *)(unsigned int)ApartmentType,
      v9[0]);
  }
  _lambda_6f980fbbc6752bcaca442c74782693a9_::operator()(a1);
}
