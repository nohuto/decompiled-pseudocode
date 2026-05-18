/*
 * XREFs of __report_gsfailure @ 0x18000C130
 * Callers:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 * Callees:
 *     __raise_securityfailure @ 0x18000C0E8 (__raise_securityfailure.c)
 *     sub_18000C208 @ 0x18000C208 (sub_18000C208.c)
 */

void __cdecl __noreturn _report_gsfailure(uintptr_t StackCookie)
{
  DWORD64 retaddr; // [rsp+38h] [rbp+0h]
  uintptr_t v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = StackCookie;
  if ( IsProcessorFeaturePresent(0x17u) )
    __fastfail(2u);
  sub_18000C208(&ContextRecord);
  ContextRecord.Rip = retaddr;
  ContextRecord.Rsp = (DWORD64)&v2;
  qword_1801C3D30 = retaddr;
  ContextRecord.Rcx = v2;
  dword_1801C3D20 = -1073740791;
  dword_1801C3D24 = 1;
  dword_1801C3D38 = 1;
  unk_1801C3D40 = 2LL;
  _raise_securityfailure((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
}
