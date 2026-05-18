/*
 * XREFs of sub_18000D074 @ 0x18000D074
 * Callers:
 *     sub_18000E1FC @ 0x18000E1FC (sub_18000E1FC.c)
 *     sub_18000E984 @ 0x18000E984 (sub_18000E984.c)
 * Callees:
 *     sub_18000CEA8 @ 0x18000CEA8 (sub_18000CEA8.c)
 *     sub_18000E784 @ 0x18000E784 (sub_18000E784.c)
 */

__int64 __fastcall sub_18000D074(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7)
{
  int v7; // r8d
  int v8; // r9d
  int v9; // r10d
  int v10; // r11d
  _DWORD v12[6]; // [rsp+50h] [rbp-18h] BYREF

  v12[0] = a7;
  v12[2] = 0;
  v12[1] = sub_18000E784(a7);
  return sub_18000CEA8(v10, v9, v7, v8, a5, a6, (__int64)v12);
}
