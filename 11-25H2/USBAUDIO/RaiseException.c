/*
 * XREFs of RaiseException @ 0x14001C000
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseException_0 @ 0x14001C605 (RtlRaiseException_0.c)
 *     __security_check_cookie @ 0x14001C640 (__security_check_cookie.c)
 *     memmove @ 0x14001C740 (memmove.c)
 */

void __fastcall RaiseException(DWORD a1, char a2, unsigned int a3, const void *a4)
{
  DWORD v4; // eax
  _EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  memset(&ExceptionRecord.NumberParameters + 1, 0, 124);
  ExceptionRecord.ExceptionCode = a1;
  ExceptionRecord.ExceptionFlags = a2 & 1;
  ExceptionRecord.ExceptionRecord = 0LL;
  ExceptionRecord.ExceptionAddress = &RaiseException;
  if ( a4 )
  {
    v4 = 15;
    if ( a3 <= 0xF )
      v4 = a3;
    ExceptionRecord.NumberParameters = v4;
    if ( v4 )
      memmove(ExceptionRecord.ExceptionInformation, a4, 8LL * v4);
  }
  else
  {
    ExceptionRecord.NumberParameters = 0;
  }
  RtlRaiseException_0(&ExceptionRecord);
}
