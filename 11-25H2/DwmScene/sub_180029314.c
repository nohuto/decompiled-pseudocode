/*
 * XREFs of sub_180029314 @ 0x180029314
 * Callers:
 *     sub_180028D00 @ 0x180028D00 (sub_180028D00.c)
 * Callees:
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 */

__int64 __fastcall sub_180029314(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  __int64 result; // rax

  result = sub_180016F54(a2, a3);
  *(double *)(a2 + 32) = (double)*a4;
  return result;
}
