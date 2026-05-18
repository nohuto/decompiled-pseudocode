/*
 * XREFs of sub_18002AF10 @ 0x18002AF10
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_180012508 @ 0x180012508 (sub_180012508.c)
 *     sub_18002397C @ 0x18002397C (sub_18002397C.c)
 *     sub_180023DB8 @ 0x180023DB8 (sub_180023DB8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002AF10(__int64 *a1, __int64 a2)
{
  __int64 *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdx

  v4 = a1 + 16;
  v5 = a1[17];
  if ( v5 == a1[18] )
  {
    sub_18002397C(v4, v5, a2);
  }
  else
  {
    sub_180023DB8((__int64)v4, v5, a2);
    a1[17] += 64LL;
  }
  return sub_180012508(a2, v6);
}
