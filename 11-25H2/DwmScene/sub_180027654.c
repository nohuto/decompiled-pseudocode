/*
 * XREFs of sub_180027654 @ 0x180027654
 * Callers:
 *     sub_18002755C @ 0x18002755C (sub_18002755C.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_180027654(__int64 a1, __int64 a2, __int64 a3, _DWORD **a4)
{
  _DWORD *result; // rax

  result = *a4;
  *(_DWORD *)a2 = **a4;
  *(_BYTE *)(a2 + 4) = 0;
  return result;
}
