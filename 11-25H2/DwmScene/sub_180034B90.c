/*
 * XREFs of sub_180034B90 @ 0x180034B90
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_1800296E0 @ 0x1800296E0 (sub_1800296E0.c)
 *     sub_180029B80 @ 0x180029B80 (sub_180029B80.c)
 *     sub_18002DB0C @ 0x18002DB0C (sub_18002DB0C.c)
 *     sub_180034AC8 @ 0x180034AC8 (sub_180034AC8.c)
 *     sub_180036750 @ 0x180036750 (sub_180036750.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall sub_180034B90(__int64 a1)
{
  __int64 v3; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v4[16]; // [rsp+28h] [rbp-30h] BYREF
  __int128 v5; // [rsp+38h] [rbp-20h] BYREF

  sub_1800296E0((__int64)v4, a1 + 1280);
  while ( 1 )
  {
    v3 = *(int *)(a1 + 1200);
    if ( v3 > 0 )
    {
      v5 = 0LL;
      sub_18002DB0C((__int64)&v5, &v3);
      sub_180036750((_Cnd_t)(a1 + 1208));
    }
    if ( *(_BYTE *)(a1 + 1312) )
      break;
    sub_180034AC8(a1);
  }
  return sub_180029B80((__int64)v4);
}
