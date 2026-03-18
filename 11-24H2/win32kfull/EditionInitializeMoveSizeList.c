/*
 * XREFs of EditionInitializeMoveSizeList @ 0x1402AA970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall EditionInitializeMoveSizeList(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)(W32GetUserSessionState(a1, a2) + 63432);
  result[1] = result;
  *result = result;
  return result;
}
