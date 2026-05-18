/*
 * XREFs of sub_1800977BC @ 0x1800977BC
 * Callers:
 *     sub_180095D08 @ 0x180095D08 (sub_180095D08.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180025288 @ 0x180025288 (sub_180025288.c)
 *     sub_1800966C0 @ 0x1800966C0 (sub_1800966C0.c)
 *     sub_18009671C @ 0x18009671C (sub_18009671C.c)
 *     sub_18009686C @ 0x18009686C (sub_18009686C.c)
 *     sub_18009690C @ 0x18009690C (sub_18009690C.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_1800977BC(__int64 a1)
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

  v2 = (__int64 *)sub_180025288(*(_QWORD *)(a1 + 912), (__int64)v15, 1u);
  sub_18009671C(a1 + 528, v2);
  sub_1800966C0(v15);
  if ( sub_18009686C(a1 + 528) )
  {
    unknown_libname_81(v13, (_QWORD *)(a1 + 896));
    v4 = unknown_libname_81(v14, v3);
    sub_18009690C(a1 + 528, v4, v5);
  }
  if ( sub_18009686C(a1 + 704) )
  {
    unknown_libname_81(v14, (_QWORD *)(a1 + 896));
    v7 = unknown_libname_81(v13, v6);
    sub_18009690C(a1 + 704, v7, v8);
  }
  result = sub_18009686C(a1);
  if ( result )
  {
    unknown_libname_81(v14, (_QWORD *)(a1 + 896));
    v11 = unknown_libname_81(v13, v10);
    result = sub_18009690C(a1, v11, v12);
  }
  *(_DWORD *)(a1 + 920) = 2;
  return result;
}
