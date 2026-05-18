/*
 * XREFs of sub_180020784 @ 0x180020784
 * Callers:
 *     sub_18002160C @ 0x18002160C (sub_18002160C.c)
 *     sub_180022A6C @ 0x180022A6C (sub_180022A6C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_180020454 @ 0x180020454 (sub_180020454.c)
 */

__int64 __fastcall sub_180020784(__int64 a1)
{
  GUID v3; // [rsp+20h] [rbp-38h] BYREF
  GUID pguid; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)(a1 + 152) = 64LL;
  pguid = 0LL;
  CoCreateGuid(&pguid);
  v3 = pguid;
  sub_180020454(a1, (__int128 *)&v3);
  return a1;
}
