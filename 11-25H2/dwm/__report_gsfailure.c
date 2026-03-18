/*
 * XREFs of __report_gsfailure @ 0x1400051F0
 * Callers:
 *     __security_check_cookie @ 0x140004EE0 (__security_check_cookie.c)
 * Callees:
 *     __raise_securityfailure @ 0x1400051B0 (__raise_securityfailure.c)
 *     capture_previous_context @ 0x1400052C8 (capture_previous_context.c)
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
  qword_1400193B0 = retaddr;
  ContextRecord.Rcx = v2;
  dword_1400193A0 = -1073740791;
  dword_1400193A4 = 1;
  dword_1400193B8 = 1;
  unk_1400193C0 = 2LL;
  _raise_securityfailure((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
}
