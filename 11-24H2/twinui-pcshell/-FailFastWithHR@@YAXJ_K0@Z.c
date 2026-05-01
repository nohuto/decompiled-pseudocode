/*
 * XREFs of ?FailFastWithHR@@YAXJ_K0@Z @ 0x180675B7C
 * Callers:
 *     ?SecurityShim_SharedMessagePortSecurity@SharedMessagePortRefPtr@@SAHPEAPEAX@Z @ 0x18020BC84 (-SecurityShim_SharedMessagePortSecurity@SharedMessagePortRefPtr@@SAHPEAPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 */

void __fastcall FailFastWithHR(__int64 a1, ULONG_PTR a2)
{
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF
  void *retaddr; // [rsp+D8h] [rbp+0h]

  memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
  pExceptionRecord.ExceptionAddress = retaddr;
  pExceptionRecord.ExceptionCode = 1653;
  pExceptionRecord.ExceptionFlags = 1;
  pExceptionRecord.NumberParameters = 3;
  pExceptionRecord.ExceptionInformation[0] = -2147467259LL;
  pExceptionRecord.ExceptionInformation[1] = a2;
  pExceptionRecord.ExceptionInformation[2] = 238LL;
  if ( IsDebuggerPresent() )
    __debugbreak();
  RaiseFailFastException(&pExceptionRecord, 0LL, 0);
}
