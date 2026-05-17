/*
 * XREFs of RaiseException @ 0x18012A750
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseException @ 0x180070510 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

void __stdcall RaiseException(
        DWORD dwExceptionCode,
        DWORD dwExceptionFlags,
        DWORD nNumberOfArguments,
        const ULONG_PTR *lpArguments)
{
  DWORD v4; // eax
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  memset(&ExceptionRecord.NumberParameters + 1, 0, 124);
  ExceptionRecord.ExceptionCode = dwExceptionCode;
  ExceptionRecord.ExceptionFlags = dwExceptionFlags & 1;
  ExceptionRecord.ExceptionRecord = 0LL;
  ExceptionRecord.ExceptionAddress = RaiseException;
  if ( lpArguments )
  {
    v4 = 15;
    if ( nNumberOfArguments <= 0xF )
      v4 = nNumberOfArguments;
    ExceptionRecord.NumberParameters = v4;
    if ( v4 )
      memmove(ExceptionRecord.ExceptionInformation, lpArguments, 8LL * v4);
  }
  else
  {
    ExceptionRecord.NumberParameters = 0;
  }
  RtlRaiseException(&ExceptionRecord);
}
