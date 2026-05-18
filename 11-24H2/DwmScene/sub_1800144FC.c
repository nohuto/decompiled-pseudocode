/*
 * XREFs of sub_1800144FC @ 0x1800144FC
 * Callers:
 *     sub_180014C60 @ 0x180014C60 (sub_180014C60.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011044 @ 0x180011044 (sub_180011044.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18001268C @ 0x18001268C (sub_18001268C.c)
 *     sub_180013E0C @ 0x180013E0C (sub_180013E0C.c)
 *     sub_180013ED4 @ 0x180013ED4 (sub_180013ED4.c)
 *     sub_18002867C @ 0x18002867C (sub_18002867C.c)
 *     sub_18003ADD0 @ 0x18003ADD0 (sub_18003ADD0.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800144FC(__int64 a1)
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
  v2 = (_QWORD *)sub_18001268C(v6, &v9);
  sub_18002867C(*v2 + 16LL, v13);
  if ( v10 )
    sub_18001060C(v10);
  v3 = sub_180013ED4(v6, &v11);
  v8 = 0LL;
  v8 = *(_OWORD *)v3;
  *v3 = 0LL;
  v3[1] = 0LL;
  sub_18003ADD0(v6, &v8);
  if ( v12 )
    sub_18001060C(v12);
  v4 = sub_180013E0C(v6, &v11);
  v8 = 0LL;
  v8 = *(_OWORD *)v4;
  *v4 = 0LL;
  v4[1] = 0LL;
  sub_18003ADD0(v6, &v8);
  if ( v12 )
    sub_18001060C(v12);
  result = sub_180011044((__int64)v13);
  if ( v7 )
    return sub_18001060C(v7);
  return result;
}
