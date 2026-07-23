/*
 * XREFs of RealSuccessor @ 0x1403D9D30
 * Callers:
 *     RtlEnumerateGenericTableLikeADirectory @ 0x1403D9B90 (RtlEnumerateGenericTableLikeADirectory.c)
 *     RtlEnumerateGenericTableAvl @ 0x1403D9CC0 (RtlEnumerateGenericTableAvl.c)
 *     RtlGetElementGenericTableAvl @ 0x1404860C0 (RtlGetElementGenericTableAvl.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RealSuccessor(_QWORD *a1)
{
  _QWORD *result; // rax
  _QWORD *i; // rcx
  _QWORD *j; // rdx

  result = (_QWORD *)a1[2];
  if ( result )
  {
    for ( i = (_QWORD *)result[1]; i; i = (_QWORD *)i[1] )
      result = i;
  }
  else
  {
    for ( j = (_QWORD *)*a1; (_QWORD *)j[2] == a1; j = (_QWORD *)*j )
      a1 = j;
    result = 0LL;
    if ( (_QWORD *)j[1] == a1 )
      return j;
  }
  return result;
}
