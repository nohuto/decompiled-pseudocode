/*
 * XREFs of sub_18002ADB0 @ 0x18002ADB0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_180012408 @ 0x180012408 (sub_180012408.c)
 *     sub_18002381C @ 0x18002381C (sub_18002381C.c)
 *     sub_180023C58 @ 0x180023C58 (sub_180023C58.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002ADB0(__int64 *a1, __int64 a2)
{
  __int64 *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdx

  v4 = a1 + 16;
  v5 = a1[17];
  if ( v5 == a1[18] )
  {
    sub_18002381C(v4, v5, a2);
  }
  else
  {
    sub_180023C58((__int64)v4, v5, a2);
    a1[17] += 64LL;
  }
  return sub_180012408(a2, v6);
}
