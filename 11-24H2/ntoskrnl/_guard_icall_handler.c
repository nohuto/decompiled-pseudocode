/*
 * XREFs of _guard_icall_handler @ 0x1406B4D10
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __fastcall __noreturn guard_icall_handler(__int64 a1, __int64 a2, ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x139u, 0xAuLL, 0LL, 0LL, BugCheckParameter4);
}
