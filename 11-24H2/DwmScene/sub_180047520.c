/*
 * XREFs of sub_180047520 @ 0x180047520
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_180027ADC @ 0x180027ADC (sub_180027ADC.c)
 *     sub_180032C28 @ 0x180032C28 (sub_180032C28.c)
 *     sub_1800473C4 @ 0x1800473C4 (sub_1800473C4.c)
 *     sub_180078578 @ 0x180078578 (sub_180078578.c)
 */

__int64 __fastcall sub_180047520(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax
  int v6; // edx
  _BYTE v7[96]; // [rsp+20h] [rbp-78h] BYREF

  result = *a4;
  v6 = *(_DWORD *)(*a4 + 440);
  if ( (v6 & 0x10000) != 0 && (v6 & 0x400000) != 0 )
  {
    sub_180027ADC((__int64)v7, 12LL, 8LL, sub_180010340);
    sub_1800473C4((unsigned __int64 *)(a1 + 88), (__int64)v7);
    sub_180078578(a1);
    sub_180032C28();
  }
  return result;
}
