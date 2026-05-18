/*
 * XREFs of sub_1800143FC @ 0x1800143FC
 * Callers:
 *     sub_180014B60 @ 0x180014B60 (sub_180014B60.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010F44 @ 0x180010F44 (sub_180010F44.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18001258C @ 0x18001258C (sub_18001258C.c)
 *     sub_180013D0C @ 0x180013D0C (sub_180013D0C.c)
 *     sub_180013DD4 @ 0x180013DD4 (sub_180013DD4.c)
 *     sub_18002851C @ 0x18002851C (sub_18002851C.c)
 *     sub_18003AC70 @ 0x18003AC70 (sub_18003AC70.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800143FC(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  __int64 result; // rax
  __int64 v6; // [rsp+20h] [rbp-50h] BYREF
  __int64 v7; // [rsp+28h] [rbp-48h]
  __int128 v8; // [rsp+30h] [rbp-40h] BYREF
  __int64 v9; // [rsp+40h] [rbp-30h] BYREF
  __int64 v10; // [rsp+48h] [rbp-28h]
  __int64 v11; // [rsp+50h] [rbp-20h] BYREF
  __int64 v12; // [rsp+58h] [rbp-18h]
  _BYTE v13[16]; // [rsp+60h] [rbp-10h] BYREF

  v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
  unknown_libname_81(&v6, (_QWORD *)(v1 + 32));
  v2 = (_QWORD *)sub_18001258C(v6, &v9);
  sub_18002851C(*v2 + 16LL, v13);
  if ( v10 )
    sub_18001050C(v10);
  v3 = sub_180013DD4(v6, &v11);
  v8 = 0LL;
  v8 = *(_OWORD *)v3;
  *v3 = 0LL;
  v3[1] = 0LL;
  sub_18003AC70(v6, &v8);
  if ( v12 )
    sub_18001050C(v12);
  v4 = sub_180013D0C(v6, &v11);
  v8 = 0LL;
  v8 = *(_OWORD *)v4;
  *v4 = 0LL;
  v4[1] = 0LL;
  sub_18003AC70(v6, &v8);
  if ( v12 )
    sub_18001050C(v12);
  result = sub_180010F44((__int64)v13);
  if ( v7 )
    return sub_18001050C(v7);
  return result;
}
