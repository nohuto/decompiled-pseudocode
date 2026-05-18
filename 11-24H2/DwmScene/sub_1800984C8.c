/*
 * XREFs of sub_1800984C8 @ 0x1800984C8
 * Callers:
 *     sub_180096038 @ 0x180096038 (sub_180096038.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_1800253E8 @ 0x1800253E8 (sub_1800253E8.c)
 *     sub_180096820 @ 0x180096820 (sub_180096820.c)
 *     sub_18009687C @ 0x18009687C (sub_18009687C.c)
 *     sub_1800969CC @ 0x1800969CC (sub_1800969CC.c)
 *     sub_180096A6C @ 0x180096A6C (sub_180096A6C.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_1800984C8(__int64 a1)
{
  __int64 *v2; // rax
  char result; // al
  _QWORD *v4; // rdx
  _QWORD *v5; // rax
  _QWORD *v6; // r8
  __int64 v7; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v8; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD v9[23]; // [rsp+40h] [rbp-B8h] BYREF

  v2 = (__int64 *)sub_1800253E8(*(_QWORD *)(a1 + 912), (__int64)v9, 1u);
  sub_18009687C(a1 + 352, v2);
  sub_180096820(v9);
  result = sub_1800969CC(a1 + 352);
  if ( result )
  {
    unknown_libname_81(&v7, (_QWORD *)(a1 + 896));
    v5 = unknown_libname_81(&v8, v4);
    return sub_180096A6C(a1 + 352, v5, v6);
  }
  return result;
}
