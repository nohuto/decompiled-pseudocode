/*
 * XREFs of sub_180069108 @ 0x180069108
 * Callers:
 *     sub_180068A3C @ 0x180068A3C (sub_180068A3C.c)
 *     sub_180068E10 @ 0x180068E10 (sub_180068E10.c)
 * Callees:
 *     sub_180015E64 @ 0x180015E64 (sub_180015E64.c)
 *     sub_180027C70 @ 0x180027C70 (sub_180027C70.c)
 *     sub_180051A28 @ 0x180051A28 (sub_180051A28.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180069108(__int64 *a1, __int64 a2, int a3, int a4, int a5, int a6, int a7)
{
  int v10; // r8d
  int v11; // r8d
  __int64 v12; // r8
  __int64 v14; // [rsp+38h] [rbp-30h]
  int v15; // [rsp+40h] [rbp-28h]
  __int64 v16; // [rsp+48h] [rbp-20h]

  sub_180015E64(a2, a1);
  sub_180027C70(*a1, 1, 0);
  sub_180027C70(*a1, v10 + 2, v10);
  sub_180027C70(*a1, v11 + 4, v11);
  sub_180051A28(*a1, a3, a4, 0, a5, a6, a7, (const void *)(v12 & v14), v12 & v15, v12 & v16);
  return a1;
}
