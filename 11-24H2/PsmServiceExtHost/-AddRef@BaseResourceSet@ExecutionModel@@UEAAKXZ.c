/*
 * XREFs of ?AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x18005EC20
 * Callers:
 *     ?AddRef@ExternalResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800688A0 (-AddRef@ExternalResourceSet@ExecutionModel@@UEAAKXZ.c)
 * Callees:
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::AddRef(ExecutionModel::BaseResourceSet *this)
{
  unsigned __int32 v1; // ebx
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  v1 = _InterlockedIncrement((volatile signed __int32 *)this + 9);
  if ( v1 < 2 )
  {
    memset_0(&pExceptionRecord.ExceptionRecord, 0, 0x90uLL);
    pExceptionRecord.ExceptionCode = -1073741675;
    pExceptionRecord.ExceptionFlags = 1;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  return v1;
}
