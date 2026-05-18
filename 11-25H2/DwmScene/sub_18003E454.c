/*
 * XREFs of sub_18003E454 @ 0x18003E454
 * Callers:
 *     sub_18003DE00 @ 0x18003DE00 (sub_18003DE00.c)
 *     sub_18003E14C @ 0x18003E14C (sub_18003E14C.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011C64 @ 0x180011C64 (sub_180011C64.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_1800287EC @ 0x1800287EC (sub_1800287EC.c)
 *     sub_180038BA8 @ 0x180038BA8 (sub_180038BA8.c)
 *     sub_18003C904 @ 0x18003C904 (sub_18003C904.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18003E454(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // r9
  __int64 v8; // [rsp+28h] [rbp-30h] BYREF
  __int64 v9; // [rsp+30h] [rbp-28h]
  _QWORD v10[4]; // [rsp+38h] [rbp-20h] BYREF

  sub_1800287EC(a1 + 16, (__int64)a2);
  sub_180011C64(a1, &v8);
  v4 = sub_18001B098(592LL);
  if ( v4 )
  {
    v5 = unknown_libname_81(v10, &v8);
    v4 = sub_180038BA8(v6, v5);
  }
  sub_18003C904(a2, v4);
  if ( v9 )
    sub_18001050C(v9);
  return a2;
}
