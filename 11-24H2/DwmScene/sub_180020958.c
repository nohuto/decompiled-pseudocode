/*
 * XREFs of sub_180020958 @ 0x180020958
 * Callers:
 *     sub_18002176C @ 0x18002176C (sub_18002176C.c)
 *     sub_180022BCC @ 0x180022BCC (sub_180022BCC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_180020538 @ 0x180020538 (sub_180020538.c)
 */

__int64 __fastcall sub_180020958(__int64 a1)
{
  GUID v3; // [rsp+20h] [rbp-38h] BYREF
  GUID pguid; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)(a1 + 152) = 127LL;
  pguid = 0LL;
  CoCreateGuid(&pguid);
  v3 = pguid;
  sub_180020538(a1, (__int128 *)&v3);
  return a1;
}
