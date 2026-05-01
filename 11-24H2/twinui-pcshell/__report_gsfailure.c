/*
 * XREFs of __report_gsfailure @ 0x1802D1E60
 * Callers:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 * Callees:
 *     __raise_securityfailure @ 0x1802D1E18 (__raise_securityfailure.c)
 *     capture_previous_context @ 0x1802D207C (capture_previous_context.c)
 */

void __cdecl __noreturn _report_gsfailure(uintptr_t StackCookie)
{
  DWORD64 retaddr; // [rsp+38h] [rbp+0h]
  uintptr_t v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = StackCookie;
  if ( IsProcessorFeaturePresent(0x17u) )
    __fastfail(2u);
  capture_previous_context(&ContextRecord);
  ContextRecord.Rip = retaddr;
  ContextRecord.Rsp = (DWORD64)&v2;
  qword_1808C7F50 = retaddr;
  ContextRecord.Rcx = v2;
  dword_1808C7F40 = -1073740791;
  dword_1808C7F44 = 1;
  dword_1808C7F58 = 1;
  unk_1808C7F60 = 2LL;
  _raise_securityfailure((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
}
