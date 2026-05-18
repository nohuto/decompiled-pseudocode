/*
 * XREFs of sub_1800BCB50 @ 0x1800BCB50
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
 *     sub_1800BD804 @ 0x1800BD804 (sub_1800BD804.c)
 *     sub_1800C2A10 @ 0x1800C2A10 (sub_1800C2A10.c)
 *     sub_1800C2EE4 @ 0x1800C2EE4 (sub_1800C2EE4.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800BCB50(__int64 a1)
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

  result = sub_1800BD804(a1, &v10);
  v4 = v10;
  if ( v10 )
  {
    v5 = 0LL;
    v12 = 0LL;
    sub_1800287EC(v10 + 24, v3);
    unknown_libname_81(&v8, (_QWORD *)(v4 + 272));
    if ( v8 )
    {
      sub_1800BC4BC(&v7, &v8);
      v6 = (__int64 *)sub_1800C2EE4(v7, &v13);
      sub_1800BC134(&v12, v6);
      sub_18000E854(&v13);
      sub_1800C2A10(v7);
      if ( *((_QWORD *)&v7 + 1) )
        sub_18001050C(*((__int64 *)&v7 + 1));
      v5 = v12;
    }
    v7 = 0LL;
    sub_18002ACD0(a1, &v7);
    v7 = 0LL;
    sub_18002ABC4(a1, &v7);
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 880LL))(v5);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 888LL))(v5);
    }
    if ( v9 )
      sub_18001050C(v9);
    result = sub_18000E854(&v12);
  }
  if ( v11 )
    return sub_18001050C(v11);
  return result;
}
