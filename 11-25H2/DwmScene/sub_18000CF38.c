/*
 * XREFs of sub_18000CF38 @ 0x18000CF38
 * Callers:
 *     sub_18000F0E4 @ 0x18000F0E4 (sub_18000F0E4.c)
 * Callees:
 *     sub_18000CDB4 @ 0x18000CDB4 (sub_18000CDB4.c)
 *     sub_18000E684 @ 0x18000E684 (sub_18000E684.c)
 */

__int64 __fastcall sub_18000CF38(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, unsigned int a7)
{
  int v7; // r8d
  int v8; // r9d
  int v9; // r10d
  int v11; // [rsp+20h] [rbp-48h]
  _DWORD v12[6]; // [rsp+50h] [rbp-18h] BYREF

  v12[0] = a7;
  v12[2] = 0;
  v12[1] = sub_18000E684(a7);
  return sub_18000CDB4(v9, v8, v7, v8, v11, a6, (__int64)v12);
}
