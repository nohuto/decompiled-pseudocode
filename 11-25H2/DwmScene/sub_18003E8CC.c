/*
 * XREFs of sub_18003E8CC @ 0x18003E8CC
 * Callers:
 *     sub_18002BDDC @ 0x18002BDDC (sub_18002BDDC.c)
 *     sub_18003E14C @ 0x18003E14C (sub_18003E14C.c)
 *     sub_18003E770 @ 0x18003E770 (sub_18003E770.c)
 *     sub_18003E81C @ 0x18003E81C (sub_18003E81C.c)
 *     sub_18003EA7C @ 0x18003EA7C (sub_18003EA7C.c)
 *     sub_18003EFB4 @ 0x18003EFB4 (sub_18003EFB4.c)
 *     sub_18003F44C @ 0x18003F44C (sub_18003F44C.c)
 *     sub_18005F730 @ 0x18005F730 (sub_18005F730.c)
 *     sub_180061250 @ 0x180061250 (sub_180061250.c)
 *     sub_1800614FC @ 0x1800614FC (sub_1800614FC.c)
 *     sub_180064748 @ 0x180064748 (sub_180064748.c)
 *     sub_180084120 @ 0x180084120 (sub_180084120.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180013128 @ 0x180013128 (sub_180013128.c)
 *     sub_180028730 @ 0x180028730 (sub_180028730.c)
 *     sub_18003CD9C @ 0x18003CD9C (sub_18003CD9C.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18003E8CC(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rax
  __int128 *v7; // rax
  char v8; // bl
  __int64 v10; // [rsp+28h] [rbp-40h] BYREF
  __int64 v11; // [rsp+30h] [rbp-38h]
  __int128 v12; // [rsp+38h] [rbp-30h] BYREF

  *(_QWORD *)&v12 = a3;
  sub_180028730(a1 + 16);
  v6 = sub_18003CD9C(a1 + 88, a3);
  if ( v6 == *(_QWORD *)(a1 + 88) )
  {
    v12 = 0LL;
    v7 = &v12;
    v8 = 5;
  }
  else
  {
    v7 = (__int128 *)unknown_libname_81(&v10, (_QWORD *)(v6 + 64));
    v8 = 6;
  }
  unknown_libname_81(a2, v7);
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    if ( v11 )
      sub_18001050C(v11);
  }
  if ( (v8 & 1) != 0 && *((_QWORD *)&v12 + 1) )
    sub_18001050C(*((__int64 *)&v12 + 1));
  sub_180013128(a3);
  return a2;
}
