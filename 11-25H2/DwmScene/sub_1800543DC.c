/*
 * XREFs of sub_1800543DC @ 0x1800543DC
 * Callers:
 *     sub_180055748 @ 0x180055748 (sub_180055748.c)
 * Callees:
 *     sub_180054140 @ 0x180054140 (sub_180054140.c)
 *     sub_1800548B8 @ 0x1800548B8 (sub_1800548B8.c)
 *     sub_1800549CC @ 0x1800549CC (sub_1800549CC.c)
 *     sub_180059B0C @ 0x180059B0C (sub_180059B0C.c)
 *     sub_180059B54 @ 0x180059B54 (sub_180059B54.c)
 */

__int64 __fastcall sub_1800543DC(__int64 *a1, __int64 a2, __int64 a3)
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
  v17 = sub_180059B0C(a1, v7 + 1);
  v10 = sub_180054140(v9, (unsigned __int64 *)&v17);
  v11 = (unsigned __int64)((unsigned __int128)((a2 - v3) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63;
  v12 = v10 + 48 * ((a2 - v3) / 48);
  sub_1800549CC(v11, v12, a3);
  v13 = a1[1];
  v14 = v10;
  v15 = *a1;
  if ( a2 != v13 )
  {
    sub_1800548B8(v15, a2, v10);
    v13 = a1[1];
    v14 = v12 + 48;
    v15 = a2;
  }
  sub_1800548B8(v15, v13, v14);
  sub_180059B54(a1, v10, v8, v17);
  return v12;
}
