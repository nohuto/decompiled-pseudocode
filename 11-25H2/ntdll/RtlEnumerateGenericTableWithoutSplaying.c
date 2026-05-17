/*
 * XREFs of RtlEnumerateGenericTableWithoutSplaying @ 0x1800DD540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RtlEnumerateGenericTableWithoutSplaying(_QWORD *a1, _QWORD *a2)
{
  _QWORD *result; // rax
  _QWORD *v3; // rcx
  _QWORD *j; // rax
  _QWORD *v5; // rcx
  _QWORD *i; // rcx
  _QWORD *k; // rcx
  _QWORD *v8; // rcx

  result = (_QWORD *)*a1;
  if ( !*a1 )
    return result;
  v3 = (_QWORD *)*a2;
  if ( *a2 )
  {
    j = (_QWORD *)v3[2];
    if ( j )
    {
      for ( i = (_QWORD *)j[1]; i; i = (_QWORD *)i[1] )
        j = i;
    }
    else
    {
      for ( j = (_QWORD *)*v3; (_QWORD *)j[2] == v3; j = (_QWORD *)*j )
        v3 = j;
      if ( (_QWORD *)j[1] != v3 )
      {
        j = 0LL;
LABEL_8:
        v5 = j + 5;
        if ( !j )
          return 0LL;
        return v5;
      }
    }
    if ( j )
      *a2 = j;
    goto LABEL_8;
  }
  for ( k = (_QWORD *)result[1]; k; k = (_QWORD *)k[1] )
    result = k;
  *a2 = result;
  v8 = result + 5;
  if ( !result )
    return 0LL;
  return v8;
}
