/*
 * XREFs of RtlRaiseNoncontinuableException @ 0x180122EB0
 * Callers:
 *     RtlRaiseStatus @ 0x18007C3F0 (RtlRaiseStatus.c)
 * Callees:
 *     RtlpCaptureContext @ 0x180122660 (RtlpCaptureContext.c)
 */

void __cdecl __noreturn RtlRaiseNoncontinuableException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord)
{
  BOOLEAN v2; // r8
  EXCEPTION_RECORD *v3; // [rsp+28h] [rbp-10h]
  struct _CONTEXT *v4; // [rsp+30h] [rbp-8h]
  DWORD64 retaddr; // [rsp+38h] [rbp+0h]
  char v6; // [rsp+40h] [rbp+8h] BYREF

  RtlpCaptureContext((__int64)ContextRecord);
  v4->Rsp = (DWORD64)&v6;
  v4->Rip = retaddr;
  if ( v3->ExceptionAddress == (void *)-1LL )
    v3->ExceptionAddress = (void *)v4->Rip;
  if ( !v2 || NtCurrentPeb()->BeingDebugged )
    ZwRaiseException(v3, v4, v2);
  else
    RtlDispatchException(v3, v4);
}
