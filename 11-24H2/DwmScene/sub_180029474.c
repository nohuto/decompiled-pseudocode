/*
 * XREFs of sub_180029474 @ 0x180029474
 * Callers:
 *     sub_180028E60 @ 0x180028E60 (sub_180028E60.c)
 * Callees:
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 */

__int64 __fastcall sub_180029474(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  __int64 result; // rax

  result = sub_180017054(a2, a3);
  *(double *)(a2 + 32) = (double)*a4;
  return result;
}
