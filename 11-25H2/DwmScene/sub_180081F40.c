/*
 * XREFs of sub_180081F40 @ 0x180081F40
 * Callers:
 *     sub_18007D894 @ 0x18007D894 (sub_18007D894.c)
 *     sub_180082320 @ 0x180082320 (sub_180082320.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011C64 @ 0x180011C64 (sub_180011C64.c)
 *     sub_1800279D0 @ 0x1800279D0 (sub_1800279D0.c)
 *     sub_180027B50 @ 0x180027B50 (sub_180027B50.c)
 *     sub_180036994 @ 0x180036994 (sub_180036994.c)
 *     sub_18007D4F0 @ 0x18007D4F0 (sub_18007D4F0.c)
 *     sub_180081A58 @ 0x180081A58 (sub_180081A58.c)
 *     sub_180082044 @ 0x180082044 (sub_180082044.c)
 *     sub_180082260 @ 0x180082260 (sub_180082260.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180081F40(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int128 v10; // [rsp+20h] [rbp-60h] BYREF
  __int64 v11; // [rsp+30h] [rbp-50h] BYREF
  __int64 v12; // [rsp+38h] [rbp-48h]
  __int128 v13; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v14[48]; // [rsp+50h] [rbp-30h] BYREF

  sub_1800279D0(a1, (__int64)a2);
  result = (__int64)sub_180036994(a1 + 160, &v11);
  if ( v11 )
  {
    v5 = *a2;
    sub_180081A58((__int64 *)(*a2 + 496LL), (__int64 *)&v10);
    v6 = v10;
    v7 = (_QWORD *)sub_180011C64(v5 + 8, &v13);
    sub_180027B50(v6, v7);
    if ( *((_QWORD *)&v13 + 1) )
      sub_18001050C(*((__int64 *)&v13 + 1));
    v8 = v10;
    v9 = sub_18007D4F0((__int64)v14, a1 + 96);
    sub_180082260(v8, *a2, v9, v11);
    v13 = v10;
    v10 = 0LL;
    result = sub_180082044(a1, &v13);
    if ( *((_QWORD *)&v10 + 1) )
      result = sub_18001050C(*((__int64 *)&v10 + 1));
  }
  if ( v12 )
    return sub_18001050C(v12);
  return result;
}
