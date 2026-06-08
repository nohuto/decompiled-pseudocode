/*
 * XREFs of HvRequestIdle @ 0x140009D80
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14000FEF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HvRequestIdle(__int128 *a1)
{
  __int128 v2; // [rsp+20h] [rbp-28h] BYREF

  v2 = *a1;
  return ((__int64 (__fastcall *)(__int128 *))qword_140019540)(&v2);
}
