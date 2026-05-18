/*
 * XREFs of sub_1800277B4 @ 0x1800277B4
 * Callers:
 *     sub_1800276BC @ 0x1800276BC (sub_1800276BC.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_1800277B4(__int64 a1, __int64 a2, __int64 a3, _DWORD **a4)
{
  _DWORD *result; // rax

  result = *a4;
  *(_DWORD *)a2 = **a4;
  *(_BYTE *)(a2 + 4) = 0;
  return result;
}
