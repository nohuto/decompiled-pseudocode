/*
 * XREFs of sub_14000A0C0 @ 0x14000A0C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_14000A0C0(__int128 *a1)
{
  __int128 v2; // [rsp+20h] [rbp-28h] BYREF

  v2 = *a1;
  return ((__int64 (__fastcall *)(__int128 *))qword_140019510)(&v2);
}
