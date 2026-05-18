/*
 * XREFs of sub_18007C170 @ 0x18007C170
 * Callers:
 *     sub_18007C138 @ 0x18007C138 (sub_18007C138.c)
 * Callees:
 *     sub_18007BFC4 @ 0x18007BFC4 (sub_18007BFC4.c)
 */

_DWORD *__fastcall sub_18007C170(__int64 a1, unsigned __int16 a2, char a3)
{
  int v4; // edi
  _DWORD *result; // rax

  v4 = -(a3 != 0);
  result = (_DWORD *)sub_18007BFC4(a1, a2, 0);
  if ( *result != v4 )
  {
    *result = v4;
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
