/*
 * XREFs of sub_180098368 @ 0x180098368
 * Callers:
 *     sub_180095ED8 @ 0x180095ED8 (sub_180095ED8.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180025288 @ 0x180025288 (sub_180025288.c)
 *     sub_1800966C0 @ 0x1800966C0 (sub_1800966C0.c)
 *     sub_18009671C @ 0x18009671C (sub_18009671C.c)
 *     sub_18009686C @ 0x18009686C (sub_18009686C.c)
 *     sub_18009690C @ 0x18009690C (sub_18009690C.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_180098368(__int64 a1)
{
  __int64 *v2; // rax
  char result; // al
  _QWORD *v4; // rdx
  _QWORD *v5; // rax
  _QWORD *v6; // r8
  __int64 v7; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v8; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD v9[23]; // [rsp+40h] [rbp-B8h] BYREF

  v2 = (__int64 *)sub_180025288(*(_QWORD *)(a1 + 912), (__int64)v9, 1u);
  sub_18009671C(a1 + 352, v2);
  sub_1800966C0(v9);
  result = sub_18009686C(a1 + 352);
  if ( result )
  {
    unknown_libname_81(&v7, (_QWORD *)(a1 + 896));
    v5 = unknown_libname_81(&v8, v4);
    return sub_18009690C(a1 + 352, v5, v6);
  }
  return result;
}
