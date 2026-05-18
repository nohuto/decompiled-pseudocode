/*
 * XREFs of sub_18000D1CC @ 0x18000D1CC
 * Callers:
 *     sub_18000CE9C @ 0x18000CE9C (sub_18000CE9C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     memset @ 0x18000C4E8 (memset.c)
 *     sub_18000E984 @ 0x18000E984 (sub_18000E984.c)
 *     sub_18000FB2C @ 0x18000FB2C (sub_18000FB2C.c)
 *     __alloca_probe @ 0x1800D4F40 (__alloca_probe.c)
 */

__int64 __fastcall sub_18000D1CC(int a1, int a2, int a3, __int64 a4, int a5, __int64 a6, __int64 a7)
{
  __int64 result; // rax
  int v11; // [rsp+48h] [rbp-1500h]
  int v12; // [rsp+58h] [rbp-14F0h]
  int v13; // [rsp+68h] [rbp-14E0h]
  _BYTE v14[160]; // [rsp+80h] [rbp-14C8h] BYREF
  __int64 v15[128]; // [rsp+120h] [rbp-1428h] BYREF
  WCHAR OutputString[2048]; // [rsp+520h] [rbp-1028h] BYREF

  memset(v14, 0, 0x98uLL);
  result = sub_18000E984(a1, a2, a3, 0, 0LL, a6, 1, a7, 0LL, v11, OutputString, v12, (__int64)v15, v13, (__int64)v14);
  if ( (v14[4] & 1) != 0 )
    sub_18000FB2C(v14);
  return result;
}
