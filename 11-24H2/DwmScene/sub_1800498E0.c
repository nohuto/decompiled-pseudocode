/*
 * XREFs of sub_1800498E0 @ 0x1800498E0
 * Callers:
 *     sub_180014270 @ 0x180014270 (sub_180014270.c)
 *     sub_180047EF0 @ 0x180047EF0 (sub_180047EF0.c)
 *     sub_180061060 @ 0x180061060 (sub_180061060.c)
 *     sub_18006BAB4 @ 0x18006BAB4 (sub_18006BAB4.c)
 *     sub_18006C298 @ 0x18006C298 (sub_18006C298.c)
 *     sub_18008B3F0 @ 0x18008B3F0 (sub_18008B3F0.c)
 *     sub_18008D330 @ 0x18008D330 (sub_18008D330.c)
 *     sub_180091420 @ 0x180091420 (sub_180091420.c)
 *     sub_1800916C0 @ 0x1800916C0 (sub_1800916C0.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180049924 @ 0x180049924 (sub_180049924.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800498E0(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r9
  __int64 result; // rax
  __int64 v7; // rcx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = unknown_libname_81(v8, a2);
  result = sub_180049924(v5, v4, v3);
  v7 = a2[1];
  if ( v7 )
    return sub_18001060C(v7);
  return result;
}
