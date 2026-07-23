/*
 * XREFs of __report_gsfailure @ 0x140537C50
 * Callers:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __cdecl __noreturn _report_gsfailure(uintptr_t StackCookie)
{
  KeBugCheckEx(0xF7u, StackCookie, _security_cookie, _security_cookie_complement, 0LL);
}
