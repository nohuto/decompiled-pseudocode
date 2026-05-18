/*
 * XREFs of __report_gsfailure @ 0x18000BB20
 * Callers:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 * Callees:
 *     __raise_securityfailure @ 0x18000BAD8 (__raise_securityfailure.c)
 *     sub_18000BBF8 @ 0x18000BBF8 (sub_18000BBF8.c)
 */

void __cdecl __noreturn _report_gsfailure(uintptr_t StackCookie)
{
  DWORD64 retaddr; // [rsp+38h] [rbp+0h]
  uintptr_t v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = StackCookie;
  if ( IsProcessorFeaturePresent(0x17u) )
    __fastfail(2u);
  sub_18000BBF8(&ContextRecord);
  ContextRecord.Rip = retaddr;
  ContextRecord.Rsp = (DWORD64)&v2;
  qword_1801C2D10 = retaddr;
  ContextRecord.Rcx = v2;
  dword_1801C2D00 = -1073740791;
  dword_1801C2D04 = 1;
  dword_1801C2D18 = 1;
  unk_1801C2D20 = 2LL;
  _raise_securityfailure((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
}
