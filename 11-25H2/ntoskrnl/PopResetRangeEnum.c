/*
 * XREFs of PopResetRangeEnum @ 0x1405CED14
 * Callers:
 *     PopSaveHiberContext @ 0x140B5BF00 (PopSaveHiberContext.c)
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
