/*
 * XREFs of sub_18003EA2C @ 0x18003EA2C
 * Callers:
 *     sub_18002BF3C @ 0x18002BF3C (sub_18002BF3C.c)
 *     sub_18003E2AC @ 0x18003E2AC (sub_18003E2AC.c)
 *     sub_18003E8D0 @ 0x18003E8D0 (sub_18003E8D0.c)
 *     sub_18003E97C @ 0x18003E97C (sub_18003E97C.c)
 *     sub_18003EBDC @ 0x18003EBDC (sub_18003EBDC.c)
 *     sub_18003F114 @ 0x18003F114 (sub_18003F114.c)
 *     sub_18003F5AC @ 0x18003F5AC (sub_18003F5AC.c)
 *     sub_18005F890 @ 0x18005F890 (sub_18005F890.c)
 *     sub_1800613B0 @ 0x1800613B0 (sub_1800613B0.c)
 *     sub_18006165C @ 0x18006165C (sub_18006165C.c)
 *     sub_1800648A8 @ 0x1800648A8 (sub_1800648A8.c)
 *     sub_180084280 @ 0x180084280 (sub_180084280.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180013228 @ 0x180013228 (sub_180013228.c)
 *     sub_180028890 @ 0x180028890 (sub_180028890.c)
 *     sub_18003CEFC @ 0x18003CEFC (sub_18003CEFC.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18003EA2C(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rax
  __int128 *v7; // rax
  char v8; // bl
  __int64 v10; // [rsp+28h] [rbp-40h] BYREF
  __int64 v11; // [rsp+30h] [rbp-38h]
  __int128 v12; // [rsp+38h] [rbp-30h] BYREF

  *(_QWORD *)&v12 = a3;
  sub_180028890(a1 + 16);
  v6 = sub_18003CEFC(a1 + 88, a3);
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
      sub_18001060C(v11);
  }
  if ( (v8 & 1) != 0 && *((_QWORD *)&v12 + 1) )
    sub_18001060C(*((__int64 *)&v12 + 1));
  sub_180013228(a3);
  return a2;
}
