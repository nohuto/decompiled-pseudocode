/*
 * XREFs of sub_1800204E4 @ 0x1800204E4
 * Callers:
 *     sub_18002057C @ 0x18002057C (sub_18002057C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_180020454 @ 0x180020454 (sub_180020454.c)
 *     sub_1800209C4 @ 0x1800209C4 (sub_1800209C4.c)
 */

__int64 *__fastcall sub_1800204E4(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  GUID v5; // [rsp+30h] [rbp-38h] BYREF
  GUID pguid; // [rsp+40h] [rbp-28h] BYREF

  v2 = sub_1800209C4();
  *(_QWORD *)&pguid.Data1 = v2;
  v3 = v2;
  if ( v2 )
  {
    *(_QWORD *)(v2 + 152) = 64LL;
    pguid = 0LL;
    CoCreateGuid(&pguid);
    v5 = pguid;
    sub_180020454(v3, (__int128 *)&v5);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3;
  return a1;
}
