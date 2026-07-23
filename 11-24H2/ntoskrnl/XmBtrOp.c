/*
 * XREFs of XmBtrOp @ 0x140574310
 * Callers:
 *     <none>
 * Callees:
 *     XmStoreResult @ 0x140461F4C (XmStoreResult.c)
 */

_WORD *__fastcall XmBtrOp(_DWORD *a1)
{
  unsigned int v1; // r9d
  int v3; // ecx
  int v4; // edx

  v1 = a1[26];
  v3 = a1[27];
  v4 = v1 & ~(1 << v3);
  a1[4] ^= (a1[4] ^ (v1 >> v3)) & 1;
  a1[26] = v4;
  return XmStoreResult((__int64)a1, v4);
}
