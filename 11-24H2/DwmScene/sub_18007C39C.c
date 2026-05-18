/*
 * XREFs of sub_18007C39C @ 0x18007C39C
 * Callers:
 *     sub_18007C364 @ 0x18007C364 (sub_18007C364.c)
 * Callees:
 *     sub_18007C124 @ 0x18007C124 (sub_18007C124.c)
 */

_DWORD *__fastcall sub_18007C39C(__int64 a1, unsigned __int16 a2, int a3)
{
  _DWORD *result; // rax

  result = (_DWORD *)sub_18007C124(a1, a2, 1);
  if ( *result != a3 )
  {
    *result = a3;
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
