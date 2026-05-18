/*
 * XREFs of sub_18000D0D4 @ 0x18000D0D4
 * Callers:
 *     sub_18000DCA4 @ 0x18000DCA4 (sub_18000DCA4.c)
 *     sub_18000DCD0 @ 0x18000DCD0 (sub_18000DCD0.c)
 * Callees:
 *     sub_18000CEEC @ 0x18000CEEC (sub_18000CEEC.c)
 *     sub_18000E784 @ 0x18000E784 (sub_18000E784.c)
 */

void __fastcall __noreturn sub_18000D0D4(
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
  v11[1] = sub_18000E784(a7);
  sub_18000CEEC(v9, v8, v7, v8, v10, a6, (__int64)v11);
}
