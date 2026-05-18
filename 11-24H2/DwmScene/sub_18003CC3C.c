/*
 * XREFs of sub_18003CC3C @ 0x18003CC3C
 * Callers:
 *     sub_18003E2AC @ 0x18003E2AC (sub_18003E2AC.c)
 * Callees:
 *     sub_180012444 @ 0x180012444 (sub_180012444.c)
 *     sub_18003D7E4 @ 0x18003D7E4 (sub_18003D7E4.c)
 */

__int64 __fastcall sub_18003CC3C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  _BYTE v7[40]; // [rsp+20h] [rbp-28h] BYREF

  v5 = sub_180012444((__int64)v7, a2);
  return sub_18003D7E4(a1, v5, a3);
}
