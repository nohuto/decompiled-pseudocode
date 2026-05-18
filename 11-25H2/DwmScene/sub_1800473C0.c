/*
 * XREFs of sub_1800473C0 @ 0x1800473C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18002797C @ 0x18002797C (sub_18002797C.c)
 *     sub_180032AC8 @ 0x180032AC8 (sub_180032AC8.c)
 *     sub_180047264 @ 0x180047264 (sub_180047264.c)
 *     sub_180078418 @ 0x180078418 (sub_180078418.c)
 */

__int64 __fastcall sub_1800473C0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax
  int v6; // edx
  _BYTE v7[96]; // [rsp+20h] [rbp-78h] BYREF

  result = *a4;
  v6 = *(_DWORD *)(*a4 + 440);
  if ( (v6 & 0x10000) != 0 && (v6 & 0x400000) != 0 )
  {
    sub_18002797C((__int64)v7, 12LL, 8LL, sub_180010240);
    sub_180047264((unsigned __int64 *)(a1 + 88), (__int64)v7);
    sub_180078418(a1);
    sub_180032AC8();
  }
  return result;
}
