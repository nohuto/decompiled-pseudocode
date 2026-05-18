/*
 * XREFs of sub_18001419C @ 0x18001419C
 * Callers:
 *     sub_1800148F0 @ 0x1800148F0 (sub_1800148F0.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011044 @ 0x180011044 (sub_180011044.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18001268C @ 0x18001268C (sub_18001268C.c)
 *     sub_180013BCC @ 0x180013BCC (sub_180013BCC.c)
 *     sub_180013CEC @ 0x180013CEC (sub_180013CEC.c)
 *     sub_1800143A4 @ 0x1800143A4 (sub_1800143A4.c)
 *     sub_18002867C @ 0x18002867C (sub_18002867C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18001419C(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rax
  _QWORD *v3; // rax
  __int64 result; // rax
  __int64 v5; // [rsp+20h] [rbp-40h] BYREF
  __int64 v6; // [rsp+28h] [rbp-38h]
  __int64 v7; // [rsp+30h] [rbp-30h] BYREF
  __int64 v8; // [rsp+38h] [rbp-28h]
  __int64 v9; // [rsp+40h] [rbp-20h] BYREF
  __int64 v10; // [rsp+48h] [rbp-18h]
  _BYTE v11[16]; // [rsp+50h] [rbp-10h] BYREF

  v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
  unknown_libname_81(&v5, (_QWORD *)(v1 + 32));
  v2 = (_QWORD *)sub_18001268C(v5, &v9);
  sub_18002867C(*v2 + 16LL, v11);
  if ( v10 )
    sub_18001060C(v10);
  sub_180013CEC(v5, &v7);
  v3 = unknown_libname_81(&v9, (_QWORD *)(qword_1801C4448 + 96));
  sub_1800143A4(v7, v3);
  sub_180013BCC(v5, &v9);
  if ( v10 )
    sub_18001060C(v10);
  if ( v8 )
    sub_18001060C(v8);
  result = sub_180011044((__int64)v11);
  if ( v6 )
    return sub_18001060C(v6);
  return result;
}
