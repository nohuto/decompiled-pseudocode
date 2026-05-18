/*
 * XREFs of sub_18000CFEC @ 0x18000CFEC
 * Callers:
 *     sub_18000DBC4 @ 0x18000DBC4 (sub_18000DBC4.c)
 *     sub_18000DBF0 @ 0x18000DBF0 (sub_18000DBF0.c)
 * Callees:
 *     sub_18000CE04 @ 0x18000CE04 (sub_18000CE04.c)
 *     sub_18000E684 @ 0x18000E684 (sub_18000E684.c)
 */

void __fastcall __noreturn sub_18000CFEC(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        unsigned int a7)
{
  int v7; // r8d
  int v8; // r9d
  int v9; // r10d
  int v10; // [rsp+20h] [rbp-48h]
  _DWORD v11[6]; // [rsp+50h] [rbp-18h] BYREF

  v11[0] = a7;
  v11[2] = 0;
  v11[1] = sub_18000E684(a7);
  sub_18000CE04(v9, v8, v7, v8, v10, a6, (__int64)v11);
}
