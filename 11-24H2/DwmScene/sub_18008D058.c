/*
 * XREFs of sub_18008D058 @ 0x18008D058
 * Callers:
 *     sub_18006C298 @ 0x18006C298 (sub_18006C298.c)
 *     sub_180091420 @ 0x180091420 (sub_180091420.c)
 *     sub_1800916C0 @ 0x1800916C0 (sub_1800916C0.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_1800374D4 @ 0x1800374D4 (sub_1800374D4.c)
 *     sub_180057494 @ 0x180057494 (sub_180057494.c)
 *     sub_180058A5C @ 0x180058A5C (sub_180058A5C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18008D058(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, unsigned int a5)
{
  __int64 *v8; // rax
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+28h] [rbp-20h]
  _QWORD v14[3]; // [rsp+30h] [rbp-18h] BYREF

  sub_180057494(a1, &v12, a2);
  sub_1800374D4(v12, a3, a4, a5);
  v8 = unknown_libname_81(v14, a3);
  result = sub_180058A5C(a1, v8);
  if ( v13 )
    result = sub_18001060C(v13);
  v10 = a3[1];
  if ( v10 )
    result = sub_18001060C(v10);
  v11 = *(_QWORD *)(a4 + 8);
  if ( v11 )
    return sub_18001060C(v11);
  return result;
}
