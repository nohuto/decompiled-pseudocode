/*
 * XREFs of sub_180097738 @ 0x180097738
 * Callers:
 *     sub_180095C3C @ 0x180095C3C (sub_180095C3C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180013228 @ 0x180013228 (sub_180013228.c)
 *     sub_18001E1F0 @ 0x18001E1F0 (sub_18001E1F0.c)
 *     sub_180095ABC @ 0x180095ABC (sub_180095ABC.c)
 *     sub_180096E70 @ 0x180096E70 (sub_180096E70.c)
 *     sub_180097304 @ 0x180097304 (sub_180097304.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180097738(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD *v8; // r9
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
  _QWORD v13[3]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v14; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v16[51]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v17[32]; // [rsp+200h] [rbp+100h] BYREF

  v16[50] = a2;
  v13[2] = a3;
  sub_18001E1F0((__int64)v17, a2);
  (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a3 + 64LL))(*a3, v17);
  unknown_libname_81(&v14, (_QWORD *)(a1 + 896));
  v6 = unknown_libname_81(&v15, a3);
  v9 = sub_180097304((__int64)v16, 1, v6, v8, v7);
  sub_180096E70((_QWORD *)(a1 + 880), (__int64)v13, a2, v9);
  sub_180095ABC(v16);
  v10 = v13[0];
  sub_180013228((__int64)v17);
  sub_180011B5C(a2);
  v11 = a3[1];
  if ( v11 )
    sub_18001060C(v11);
  return v10 + 64;
}
