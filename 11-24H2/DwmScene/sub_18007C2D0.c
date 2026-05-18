/*
 * XREFs of sub_18007C2D0 @ 0x18007C2D0
 * Callers:
 *     sub_18007C298 @ 0x18007C298 (sub_18007C298.c)
 * Callees:
 *     sub_18007C124 @ 0x18007C124 (sub_18007C124.c)
 */

_DWORD *__fastcall sub_18007C2D0(__int64 a1, unsigned __int16 a2, char a3)
{
  int v4; // edi
  _DWORD *result; // rax

  v4 = -(a3 != 0);
  result = (_DWORD *)sub_18007C124(a1, a2, 0);
  if ( *result != v4 )
  {
    *result = v4;
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
