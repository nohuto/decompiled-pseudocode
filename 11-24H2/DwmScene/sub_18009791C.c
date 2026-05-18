/*
 * XREFs of sub_18009791C @ 0x18009791C
 * Callers:
 *     sub_180095E68 @ 0x180095E68 (sub_180095E68.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_1800253E8 @ 0x1800253E8 (sub_1800253E8.c)
 *     sub_180096820 @ 0x180096820 (sub_180096820.c)
 *     sub_18009687C @ 0x18009687C (sub_18009687C.c)
 *     sub_1800969CC @ 0x1800969CC (sub_1800969CC.c)
 *     sub_180096A6C @ 0x180096A6C (sub_180096A6C.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18009791C(__int64 a1)
{
  __int64 *v2; // rax
  _QWORD *v3; // rdx
  _QWORD *v4; // rax
  _QWORD *v5; // r8
  _QWORD *v6; // rdx
  _QWORD *v7; // rax
  _QWORD *v8; // r8
  char result; // al
  _QWORD *v10; // rdx
  _QWORD *v11; // rax
  _QWORD *v12; // r8
  _QWORD v13[2]; // [rsp+28h] [rbp-79h] BYREF
  _QWORD v14[2]; // [rsp+38h] [rbp-69h] BYREF
  _QWORD v15[22]; // [rsp+48h] [rbp-59h] BYREF

  v2 = (__int64 *)sub_1800253E8(*(_QWORD *)(a1 + 912), (__int64)v15, 1u);
  sub_18009687C(a1 + 528, v2);
  sub_180096820(v15);
  if ( sub_1800969CC(a1 + 528) )
  {
    unknown_libname_81(v13, (_QWORD *)(a1 + 896));
    v4 = unknown_libname_81(v14, v3);
    sub_180096A6C(a1 + 528, v4, v5);
  }
  if ( sub_1800969CC(a1 + 704) )
  {
    unknown_libname_81(v14, (_QWORD *)(a1 + 896));
    v7 = unknown_libname_81(v13, v6);
    sub_180096A6C(a1 + 704, v7, v8);
  }
  result = sub_1800969CC(a1);
  if ( result )
  {
    unknown_libname_81(v14, (_QWORD *)(a1 + 896));
    v11 = unknown_libname_81(v13, v10);
    result = sub_180096A6C(a1, v11, v12);
  }
  *(_DWORD *)(a1 + 920) = 2;
  return result;
}
