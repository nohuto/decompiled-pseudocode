/*
 * XREFs of _guard_icall_bugcheck @ 0x1406B4CE0
 * Callers:
 *     KeCheckStackAndTargetAddress @ 0x14042A370 (KeCheckStackAndTargetAddress.c)
 *     _guard_check_icall_no_overrides @ 0x1406B4D40 (_guard_check_icall_no_overrides.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __fastcall __noreturn guard_icall_bugcheck(ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x139u, 0xAuLL, 0LL, 0LL, BugCheckParameter4);
}
