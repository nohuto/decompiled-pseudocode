/*
 * XREFs of sub_1800BCCB0 @ 0x1800BCCB0
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
 *     sub_1800BD964 @ 0x1800BD964 (sub_1800BD964.c)
 *     sub_1800C2B70 @ 0x1800C2B70 (sub_1800C2B70.c)
 *     sub_1800C3044 @ 0x1800C3044 (sub_1800C3044.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800BCCB0(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 *v6; // rax
  __int128 v7; // [rsp+20h] [rbp-30h] BYREF
  __int64 v8; // [rsp+30h] [rbp-20h] BYREF
  __int64 v9; // [rsp+38h] [rbp-18h]
  __int64 v10; // [rsp+40h] [rbp-10h] BYREF
  __int64 v11; // [rsp+48h] [rbp-8h]
  __int64 v12; // [rsp+78h] [rbp+28h] BYREF
  __int64 v13; // [rsp+80h] [rbp+30h] BYREF

  result = sub_1800BD964(a1, &v10);
  v4 = v10;
  if ( v10 )
  {
    v5 = 0LL;
    v12 = 0LL;
    sub_18002894C(v10 + 24, v3);
    unknown_libname_81(&v8, (_QWORD *)(v4 + 272));
    if ( v8 )
    {
      sub_1800BC61C(&v7, &v8);
      v6 = (__int64 *)sub_1800C3044(v7, &v13);
      sub_1800BC294(&v12, v6);
      sub_18000E954(&v13);
      sub_1800C2B70(v7);
      if ( *((_QWORD *)&v7 + 1) )
        sub_18001060C(*((__int64 *)&v7 + 1));
      v5 = v12;
    }
    v7 = 0LL;
    sub_18002AE30(a1, &v7);
    v7 = 0LL;
    sub_18002AD24(a1, &v7);
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 880LL))(v5);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 888LL))(v5);
    }
    if ( v9 )
      sub_18001060C(v9);
    result = sub_18000E954(&v12);
  }
  if ( v11 )
    return sub_18001060C(v11);
  return result;
}
