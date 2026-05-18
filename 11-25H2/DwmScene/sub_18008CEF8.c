/*
 * XREFs of sub_18008CEF8 @ 0x18008CEF8
 * Callers:
 *     sub_18006C138 @ 0x18006C138 (sub_18006C138.c)
 *     sub_1800912C0 @ 0x1800912C0 (sub_1800912C0.c)
 *     sub_180091560 @ 0x180091560 (sub_180091560.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180037374 @ 0x180037374 (sub_180037374.c)
 *     sub_180057334 @ 0x180057334 (sub_180057334.c)
 *     sub_1800588FC @ 0x1800588FC (sub_1800588FC.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18008CEF8(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, unsigned int a5)
{
  __int64 *v8; // rax
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+28h] [rbp-20h]
  _QWORD v14[3]; // [rsp+30h] [rbp-18h] BYREF

  sub_180057334(a1, &v12, a2);
  sub_180037374(v12, a3, a4, a5);
  v8 = unknown_libname_81(v14, a3);
  result = sub_1800588FC(a1, v8);
  if ( v13 )
    result = sub_18001050C(v13);
  v10 = a3[1];
  if ( v10 )
    result = sub_18001050C(v10);
  v11 = *(_QWORD *)(a4 + 8);
  if ( v11 )
    return sub_18001050C(v11);
  return result;
}
