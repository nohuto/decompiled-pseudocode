/*
 * XREFs of sub_18003E5B4 @ 0x18003E5B4
 * Callers:
 *     sub_18003DF60 @ 0x18003DF60 (sub_18003DF60.c)
 *     sub_18003E2AC @ 0x18003E2AC (sub_18003E2AC.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011D64 @ 0x180011D64 (sub_180011D64.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_18002894C @ 0x18002894C (sub_18002894C.c)
 *     sub_180038D08 @ 0x180038D08 (sub_180038D08.c)
 *     sub_18003CA64 @ 0x18003CA64 (sub_18003CA64.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18003E5B4(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // r9
  __int64 v8; // [rsp+28h] [rbp-30h] BYREF
  __int64 v9; // [rsp+30h] [rbp-28h]
  _QWORD v10[4]; // [rsp+38h] [rbp-20h] BYREF

  sub_18002894C(a1 + 16, (__int64)a2);
  sub_180011D64(a1, &v8);
  v4 = sub_18001B1F8(592LL);
  if ( v4 )
  {
    v5 = unknown_libname_81(v10, &v8);
    v4 = sub_180038D08(v6, v5);
  }
  sub_18003CA64(a2, v4);
  if ( v9 )
    sub_18001060C(v9);
  return a2;
}
