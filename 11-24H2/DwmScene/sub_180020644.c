/*
 * XREFs of sub_180020644 @ 0x180020644
 * Callers:
 *     sub_1800206DC @ 0x1800206DC (sub_1800206DC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_1800205B4 @ 0x1800205B4 (sub_1800205B4.c)
 *     sub_180020B24 @ 0x180020B24 (sub_180020B24.c)
 */

__int64 *__fastcall sub_180020644(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  GUID v5; // [rsp+30h] [rbp-38h] BYREF
  GUID pguid; // [rsp+40h] [rbp-28h] BYREF

  v2 = sub_180020B24();
  *(_QWORD *)&pguid.Data1 = v2;
  v3 = v2;
  if ( v2 )
  {
    *(_QWORD *)(v2 + 152) = 64LL;
    pguid = 0LL;
    CoCreateGuid(&pguid);
    v5 = pguid;
    sub_1800205B4(v3, (__int128 *)&v5);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3;
  return a1;
}
