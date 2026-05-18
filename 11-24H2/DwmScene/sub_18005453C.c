/*
 * XREFs of sub_18005453C @ 0x18005453C
 * Callers:
 *     sub_1800558A8 @ 0x1800558A8 (sub_1800558A8.c)
 * Callees:
 *     sub_1800542A0 @ 0x1800542A0 (sub_1800542A0.c)
 *     sub_180054A18 @ 0x180054A18 (sub_180054A18.c)
 *     sub_180054B2C @ 0x180054B2C (sub_180054B2C.c)
 *     sub_180059C6C @ 0x180059C6C (sub_180059C6C.c)
 *     sub_180059CB4 @ 0x180059CB4 (sub_180059CB4.c)
 */

__int64 __fastcall sub_18005453C(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a1;
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 4);
  if ( v7 == 0x555555555555555LL )
    std::_Xlength_error("vector too long");
  v8 = v7 + 1;
  v17 = sub_180059C6C(a1, v7 + 1);
  v10 = sub_1800542A0(v9, (unsigned __int64 *)&v17);
  v11 = (unsigned __int64)((unsigned __int128)((a2 - v3) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63;
  v12 = v10 + 48 * ((a2 - v3) / 48);
  sub_180054B2C(v11, v12, a3);
  v13 = a1[1];
  v14 = v10;
  v15 = *a1;
  if ( a2 != v13 )
  {
    sub_180054A18(v15, a2, v10);
    v13 = a1[1];
    v14 = v12 + 48;
    v15 = a2;
  }
  sub_180054A18(v15, v13, v14);
  sub_180059CB4(a1, v10, v8, v17);
  return v12;
}
