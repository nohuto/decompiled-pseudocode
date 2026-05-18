/*
 * XREFs of sub_18000D120 @ 0x18000D120
 * Callers:
 *     sub_18000CEEC @ 0x18000CEEC (sub_18000CEEC.c)
 * Callees:
 *     memset @ 0x18000C4E8 (memset.c)
 *     sub_18000E984 @ 0x18000E984 (sub_18000E984.c)
 *     sub_18000FB2C @ 0x18000FB2C (sub_18000FB2C.c)
 *     __alloca_probe @ 0x1800D4F40 (__alloca_probe.c)
 */

void __fastcall __noreturn sub_18000D120(int a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  int v10; // [rsp+48h] [rbp-14F0h]
  int v11; // [rsp+58h] [rbp-14E0h]
  int v12; // [rsp+68h] [rbp-14D0h]
  __int64 v13[20]; // [rsp+80h] [rbp-14B8h] BYREF
  __int64 v14[128]; // [rsp+120h] [rbp-1418h] BYREF
  WCHAR OutputString[2060]; // [rsp+520h] [rbp-1018h] BYREF

  memset(v13, 0, 0x98uLL);
  sub_18000E984(a1, a2, a3, 0, 0LL, a6, 3, a7, 0LL, v10, OutputString, v11, (__int64)v14, v12, (__int64)v13);
  sub_18000FB2C(v13);
}
