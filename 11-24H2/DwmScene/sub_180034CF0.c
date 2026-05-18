/*
 * XREFs of sub_180034CF0 @ 0x180034CF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_180029840 @ 0x180029840 (sub_180029840.c)
 *     sub_180029CE0 @ 0x180029CE0 (sub_180029CE0.c)
 *     sub_18002DC6C @ 0x18002DC6C (sub_18002DC6C.c)
 *     sub_180034C28 @ 0x180034C28 (sub_180034C28.c)
 *     sub_1800368B0 @ 0x1800368B0 (sub_1800368B0.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall sub_180034CF0(__int64 a1)
{
  __int64 v3; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v4[16]; // [rsp+28h] [rbp-30h] BYREF
  __int128 v5; // [rsp+38h] [rbp-20h] BYREF

  sub_180029840((__int64)v4, a1 + 1280);
  while ( 1 )
  {
    v3 = *(int *)(a1 + 1200);
    if ( v3 > 0 )
    {
      v5 = 0LL;
      sub_18002DC6C((__int64)&v5, &v3);
      sub_1800368B0((_Cnd_t)(a1 + 1208));
    }
    if ( *(_BYTE *)(a1 + 1312) )
      break;
    sub_180034C28(a1);
  }
  return sub_180029CE0((__int64)v4);
}
