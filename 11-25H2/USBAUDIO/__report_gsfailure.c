/*
 * XREFs of __report_gsfailure @ 0x14000BE10
 * Callers:
 *     __security_check_cookie @ 0x14001C640 (__security_check_cookie.c)
 * Callees:
 *     <none>
 */

void __cdecl __noreturn _report_gsfailure(uintptr_t StackCookie)
{
  __fastfail(2u);
}
