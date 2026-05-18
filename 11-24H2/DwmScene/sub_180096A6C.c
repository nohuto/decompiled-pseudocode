/*
 * XREFs of sub_180096A6C @ 0x180096A6C
 * Callers:
 *     sub_180097304 @ 0x180097304 (sub_180097304.c)
 *     sub_180097544 @ 0x180097544 (sub_180097544.c)
 *     sub_18009791C @ 0x18009791C (sub_18009791C.c)
 *     sub_180097A40 @ 0x180097A40 (sub_180097A40.c)
 *     sub_1800984C8 @ 0x1800984C8 (sub_1800984C8.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180096A6C(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v6; // rax
  __int64 (__fastcall *v7)(__int64, _QWORD *); // r9
  __int64 v8; // r10
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v13[5]; // [rsp+30h] [rbp-28h] BYREF

  sub_18001254C((__int64 *)(a1 + 144), a2);
  sub_18001254C((__int64 *)(a1 + 160), a3);
  unknown_libname_81(&v12, a3);
  v6 = unknown_libname_81(v13, a2);
  result = v7(v8, v6);
  v10 = a2[1];
  if ( v10 )
    result = sub_18001060C(v10);
  v11 = a3[1];
  if ( v11 )
    return sub_18001060C(v11);
  return result;
}
