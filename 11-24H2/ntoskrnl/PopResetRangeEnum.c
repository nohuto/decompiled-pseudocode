/*
 * XREFs of PopResetRangeEnum @ 0x1405D376C
 * Callers:
 *     PopSaveHiberContext @ 0x140B6EC80 (PopSaveHiberContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopResetRangeEnum(_QWORD *a1)
{
  __int64 result; // rax

  result = a1[10];
  a1[16] = 0LL;
  a1[15] = result;
  return result;
}
