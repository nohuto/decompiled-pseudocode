/*
 * XREFs of sub_180083558 @ 0x180083558
 * Callers:
 *     sub_180082FB4 @ 0x180082FB4 (sub_180082FB4.c)
 * Callees:
 *     <none>
 */

char *__fastcall sub_180083558(_QWORD *a1, _WORD *a2)
{
  _BYTE *v3; // rdx
  char *result; // rax

  v3 = (_BYTE *)a1[1];
  if ( v3 == (_BYTE *)a1[2] )
    return sub_180082B60(a1, v3, a2);
  result = (char *)(unsigned __int16)*a2;
  *(_WORD *)v3 = (_WORD)result;
  a1[1] += 2LL;
  return result;
}
