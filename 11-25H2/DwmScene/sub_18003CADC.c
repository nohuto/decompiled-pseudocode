/*
 * XREFs of sub_18003CADC @ 0x18003CADC
 * Callers:
 *     sub_18003E14C @ 0x18003E14C (sub_18003E14C.c)
 * Callees:
 *     sub_180012344 @ 0x180012344 (sub_180012344.c)
 *     sub_18003D684 @ 0x18003D684 (sub_18003D684.c)
 */

__int64 __fastcall sub_18003CADC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  _BYTE v7[40]; // [rsp+20h] [rbp-28h] BYREF

  v5 = sub_180012344((__int64)v7, a2);
  return sub_18003D684(a1, v5, a3);
}
