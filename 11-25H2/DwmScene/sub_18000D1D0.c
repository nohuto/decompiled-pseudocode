/*
 * XREFs of sub_18000D1D0 @ 0x18000D1D0
 * Callers:
 *     sub_18000CDC0 @ 0x18000CDC0 (sub_18000CDC0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     memset @ 0x18000C088 (memset.c)
 *     sub_18000E884 @ 0x18000E884 (sub_18000E884.c)
 *     sub_18000FA2C @ 0x18000FA2C (sub_18000FA2C.c)
 *     __alloca_probe @ 0x1800D4DE0 (__alloca_probe.c)
 */

__int64 __fastcall sub_18000D1D0(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 result; // rax
  int v13; // [rsp+48h] [rbp-1530h]
  _BYTE v14[160]; // [rsp+80h] [rbp-14F8h] BYREF
  __int64 v15[128]; // [rsp+120h] [rbp-1458h] BYREF
  WCHAR OutputString[2048]; // [rsp+520h] [rbp-1058h] BYREF

  memset(v14, 0, 0x98uLL);
  LOBYTE(v13) = 0;
  result = sub_18000E884(a1, a2, a3, a4, a5, a6, 2, a7, a8, v13, OutputString, 2048, (__int64)v15, 1024, (__int64)v14);
  if ( (v14[4] & 1) != 0 )
    sub_18000FA2C(v14);
  return result;
}
