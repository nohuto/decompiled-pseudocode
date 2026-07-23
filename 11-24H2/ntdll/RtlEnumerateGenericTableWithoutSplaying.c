/*
 * XREFs of RtlEnumerateGenericTableWithoutSplaying @ 0x1800DB020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlEnumerateGenericTableWithoutSplaying(PRTL_GENERIC_TABLE Table, PVOID *RestartKey)
{
  PVOID result; // rax
  _QWORD *v3; // rcx
  _QWORD *j; // rax
  void *v5; // rcx
  _QWORD *i; // rcx
  _QWORD *k; // rcx
  char *v8; // rcx

  result = Table->TableRoot;
  if ( !Table->TableRoot )
    return result;
  v3 = *RestartKey;
  if ( *RestartKey )
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
      *RestartKey = j;
    goto LABEL_8;
  }
  for ( k = (_QWORD *)*((_QWORD *)result + 1); k; k = (_QWORD *)k[1] )
    result = k;
  *RestartKey = result;
  v8 = (char *)result + 40;
  if ( !result )
    return 0LL;
  return v8;
}
