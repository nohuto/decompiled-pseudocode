/*
 * XREFs of XmNotOp @ 0x140572DB0
 * Callers:
 *     <none>
 * Callees:
 *     XmStoreResult @ 0x140461F4C (XmStoreResult.c)
 */

_WORD *__fastcall XmNotOp(__int64 a1)
{
  char v2; // cl

  v2 = 8 * *(_DWORD *)(a1 + 120) + 7;
  return XmStoreResult(a1, ~*(_DWORD *)(a1 + 104) & (((1 << v2) - 1) | (unsigned int)(1 << v2)));
}
