/*
 * XREFs of sub_18009855C @ 0x18009855C
 * Callers:
 *     sub_1800960D0 @ 0x1800960D0 (sub_1800960D0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180095ABC @ 0x180095ABC (sub_180095ABC.c)
 *     sub_180096E70 @ 0x180096E70 (sub_180096E70.c)
 *     sub_180097304 @ 0x180097304 (sub_180097304.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_18009855C(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD *v8; // r9
  __int64 v9; // rax
  char result; // al
  __int64 v11; // rcx
  _BYTE v12[16]; // [rsp+30h] [rbp-1F8h] BYREF
  _QWORD *v13; // [rsp+40h] [rbp-1E8h]
  __int64 v14; // [rsp+48h] [rbp-1E0h] BYREF
  __int64 v15; // [rsp+58h] [rbp-1D0h] BYREF
  _QWORD v16[51]; // [rsp+68h] [rbp-1C0h] BYREF

  v16[50] = a2;
  v13 = a3;
  v5 = (_QWORD *)(a1 + 880);
  unknown_libname_81(&v14, (_QWORD *)(a1 + 896));
  v6 = unknown_libname_81(&v15, a3);
  v9 = sub_180097304((__int64)v16, 0, v6, v8, v7);
  sub_180096E70(v5, (__int64)v12, a2, v9);
  sub_180095ABC(v16);
  result = sub_180011B5C(a2);
  v11 = a3[1];
  if ( v11 )
    return sub_18001060C(v11);
  return result;
}
