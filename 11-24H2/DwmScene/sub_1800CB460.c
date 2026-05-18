/*
 * XREFs of sub_1800CB460 @ 0x1800CB460
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18002894C @ 0x18002894C (sub_18002894C.c)
 *     sub_18002AD24 @ 0x18002AD24 (sub_18002AD24.c)
 *     sub_18002AE30 @ 0x18002AE30 (sub_18002AE30.c)
 *     sub_1800BC294 @ 0x1800BC294 (sub_1800BC294.c)
 *     sub_1800BC61C @ 0x1800BC61C (sub_1800BC61C.c)
 *     sub_1800C2B70 @ 0x1800C2B70 (sub_1800C2B70.c)
 *     sub_1800C3044 @ 0x1800C3044 (sub_1800C3044.c)
 *     sub_1800CBBA8 @ 0x1800CBBA8 (sub_1800CBBA8.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800CB460(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 *v6; // rax
  __int64 (__fastcall ***v7)(_QWORD); // rcx
  __int64 v8; // rcx
  __int128 v9; // [rsp+20h] [rbp-30h] BYREF
  __int64 v10; // [rsp+30h] [rbp-20h] BYREF
  __int64 v11; // [rsp+38h] [rbp-18h]
  __int64 v12; // [rsp+40h] [rbp-10h] BYREF
  __int64 v13; // [rsp+48h] [rbp-8h]
  __int64 v14; // [rsp+70h] [rbp+20h] BYREF
  __int64 v15; // [rsp+78h] [rbp+28h] BYREF

  sub_18000E954(a1 + 59);
  sub_18000E954(a1 + 60);
  result = sub_1800CBBA8(a1, &v12);
  v4 = v12;
  if ( v12 )
  {
    v5 = 0LL;
    v14 = 0LL;
    sub_18002894C(v12 + 24, v3);
    unknown_libname_81(&v10, (_QWORD *)(v4 + 272));
    if ( v10 )
    {
      sub_1800BC61C(&v9, &v10);
      v6 = sub_1800C3044(v9, &v15);
      sub_1800BC294(&v14, v6);
      sub_18000E954(&v15);
      sub_1800C2B70(v9);
      if ( *((_QWORD *)&v9 + 1) )
        sub_18001060C(*((__int64 *)&v9 + 1));
      v5 = v14;
    }
    v9 = 0LL;
    sub_18002AE30((__int64)a1, &v9);
    v9 = 0LL;
    sub_18002AD24((__int64)a1, &v9);
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 880LL))(v5);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 888LL))(v5);
    }
    if ( v11 )
      sub_18001060C(v11);
    result = sub_18000E954(&v14);
  }
  if ( v13 )
    result = sub_18001060C(v13);
  v7 = (__int64 (__fastcall ***)(_QWORD))a1[61];
  if ( v7 )
  {
    result = (**v7)(v7);
    a1[61] = 0LL;
    v8 = a1[62];
    a1[62] = 0LL;
    if ( v8 )
      return sub_18001060C(v8);
  }
  return result;
}
