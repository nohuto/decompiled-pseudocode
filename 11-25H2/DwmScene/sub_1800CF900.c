/*
 * XREFs of sub_1800CF900 @ 0x1800CF900
 * Callers:
 *     sub_1800CF62C @ 0x1800CF62C (sub_1800CF62C.c)
 *     sub_1800CF73C @ 0x1800CF73C (sub_1800CF73C.c)
 * Callees:
 *     sub_1800CDC98 @ 0x1800CDC98 (sub_1800CDC98.c)
 */

__int64 __fastcall sub_1800CF900(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = a3;
  v5 = *a4;
  return sub_1800CDC98(a2, a2, &v5);
}
