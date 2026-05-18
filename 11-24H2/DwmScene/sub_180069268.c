/*
 * XREFs of sub_180069268 @ 0x180069268
 * Callers:
 *     sub_180068B9C @ 0x180068B9C (sub_180068B9C.c)
 *     sub_180068F70 @ 0x180068F70 (sub_180068F70.c)
 * Callees:
 *     sub_180015F64 @ 0x180015F64 (sub_180015F64.c)
 *     sub_180027DD0 @ 0x180027DD0 (sub_180027DD0.c)
 *     sub_180051B88 @ 0x180051B88 (sub_180051B88.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180069268(__int64 *a1, __int64 a2, int a3, int a4, int a5, int a6, int a7)
{
  int v10; // r8d
  int v11; // r8d
  __int64 v12; // r8
  __int64 v14; // [rsp+38h] [rbp-30h]
  int v15; // [rsp+40h] [rbp-28h]
  __int64 v16; // [rsp+48h] [rbp-20h]

  sub_180015F64(a2, a1);
  sub_180027DD0(*a1, 1, 0);
  sub_180027DD0(*a1, v10 + 2, v10);
  sub_180027DD0(*a1, v11 + 4, v11);
  sub_180051B88(*a1, a3, a4, 0, a5, a6, a7, (const void *)(v12 & v14), v12 & v15, v12 & v16);
  return a1;
}
