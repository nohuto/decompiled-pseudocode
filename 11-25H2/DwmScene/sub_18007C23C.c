/*
 * XREFs of sub_18007C23C @ 0x18007C23C
 * Callers:
 *     sub_18007C204 @ 0x18007C204 (sub_18007C204.c)
 * Callees:
 *     sub_18007BFC4 @ 0x18007BFC4 (sub_18007BFC4.c)
 */

_DWORD *__fastcall sub_18007C23C(__int64 a1, unsigned __int16 a2, int a3)
{
  _DWORD *result; // rax

  result = (_DWORD *)sub_18007BFC4(a1, a2, 1);
  if ( *result != a3 )
  {
    *result = a3;
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
