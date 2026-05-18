/*
 * XREFs of sub_1800CB300 @ 0x1800CB300
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_1800287EC @ 0x1800287EC (sub_1800287EC.c)
 *     sub_18002ABC4 @ 0x18002ABC4 (sub_18002ABC4.c)
 *     sub_18002ACD0 @ 0x18002ACD0 (sub_18002ACD0.c)
 *     sub_1800BC134 @ 0x1800BC134 (sub_1800BC134.c)
 *     sub_1800BC4BC @ 0x1800BC4BC (sub_1800BC4BC.c)
 *     sub_1800C2A10 @ 0x1800C2A10 (sub_1800C2A10.c)
 *     sub_1800C2EE4 @ 0x1800C2EE4 (sub_1800C2EE4.c)
 *     sub_1800CBA48 @ 0x1800CBA48 (sub_1800CBA48.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800CB300(__int64 *a1)
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

  sub_18000E854(a1 + 59);
  sub_18000E854(a1 + 60);
  result = sub_1800CBA48(a1, &v12);
  v4 = v12;
  if ( v12 )
  {
    v5 = 0LL;
    v14 = 0LL;
    sub_1800287EC(v12 + 24, v3);
    unknown_libname_81(&v10, (_QWORD *)(v4 + 272));
    if ( v10 )
    {
      sub_1800BC4BC(&v9, &v10);
      v6 = sub_1800C2EE4(v9, &v15);
      sub_1800BC134(&v14, v6);
      sub_18000E854(&v15);
      sub_1800C2A10(v9);
      if ( *((_QWORD *)&v9 + 1) )
        sub_18001050C(*((__int64 *)&v9 + 1));
      v5 = v14;
    }
    v9 = 0LL;
    sub_18002ACD0((__int64)a1, &v9);
    v9 = 0LL;
    sub_18002ABC4((__int64)a1, &v9);
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 880LL))(v5);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 888LL))(v5);
    }
    if ( v11 )
      sub_18001050C(v11);
    result = sub_18000E854(&v14);
  }
  if ( v13 )
    result = sub_18001050C(v13);
  v7 = (__int64 (__fastcall ***)(_QWORD))a1[61];
  if ( v7 )
  {
    result = (**v7)(v7);
    a1[61] = 0LL;
    v8 = a1[62];
    a1[62] = 0LL;
    if ( v8 )
      return sub_18001050C(v8);
  }
  return result;
}
