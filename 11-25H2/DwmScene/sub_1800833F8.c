/*
 * XREFs of sub_1800833F8 @ 0x1800833F8
 * Callers:
 *     sub_180082E54 @ 0x180082E54 (sub_180082E54.c)
 * Callees:
 *     <none>
 */

char *__fastcall sub_1800833F8(_QWORD *a1, _WORD *a2)
{
  _BYTE *v3; // rdx
  char *result; // rax

  v3 = (_BYTE *)a1[1];
  if ( v3 == (_BYTE *)a1[2] )
    return sub_180082A00(a1, v3, a2);
  result = (char *)(unsigned __int16)*a2;
  *(_WORD *)v3 = (_WORD)result;
  a1[1] += 2LL;
  return result;
}
