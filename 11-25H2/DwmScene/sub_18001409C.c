/*
 * XREFs of sub_18001409C @ 0x18001409C
 * Callers:
 *     sub_1800147F0 @ 0x1800147F0 (sub_1800147F0.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010F44 @ 0x180010F44 (sub_180010F44.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18001258C @ 0x18001258C (sub_18001258C.c)
 *     sub_180013ACC @ 0x180013ACC (sub_180013ACC.c)
 *     sub_180013BEC @ 0x180013BEC (sub_180013BEC.c)
 *     sub_1800142A4 @ 0x1800142A4 (sub_1800142A4.c)
 *     sub_18002851C @ 0x18002851C (sub_18002851C.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18001409C(__int64 a1)
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
  v2 = (_QWORD *)sub_18001258C(v5, &v9);
  sub_18002851C(*v2 + 16LL, v11);
  if ( v10 )
    sub_18001050C(v10);
  sub_180013BEC(v5, &v7);
  v3 = unknown_libname_81(&v9, (_QWORD *)(qword_1801C3438 + 96));
  sub_1800142A4(v7, v3);
  sub_180013ACC(v5, &v9);
  if ( v10 )
    sub_18001050C(v10);
  if ( v8 )
    sub_18001050C(v8);
  result = sub_180010F44((__int64)v11);
  if ( v6 )
    return sub_18001050C(v6);
  return result;
}
