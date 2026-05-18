/*
 * XREFs of sub_1800CFA60 @ 0x1800CFA60
 * Callers:
 *     sub_1800CF78C @ 0x1800CF78C (sub_1800CF78C.c)
 *     sub_1800CF89C @ 0x1800CF89C (sub_1800CF89C.c)
 * Callees:
 *     sub_1800CDDF8 @ 0x1800CDDF8 (sub_1800CDDF8.c)
 */

__int64 __fastcall sub_1800CFA60(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = a3;
  v5 = *a4;
  return sub_1800CDDF8(a2, a2, &v5);
}
