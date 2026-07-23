/*
 * XREFs of RealPredecessor @ 0x18008F190
 * Callers:
 *     RtlDeleteElementGenericTableAvl @ 0x18008E420 (RtlDeleteElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvlEx @ 0x18008EF90 (RtlDeleteElementGenericTableAvlEx.c)
 *     RtlLookupFirstMatchingElementGenericTableAvl @ 0x1800F0300 (RtlLookupFirstMatchingElementGenericTableAvl.c)
 *     RtlGetElementGenericTableAvl @ 0x180142B30 (RtlGetElementGenericTableAvl.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RealPredecessor(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // r8
  _QWORD *v3; // rdx
  _QWORD *i; // rcx

  result = (_QWORD *)a1[1];
  v2 = 0LL;
  v3 = a1;
  if ( result )
  {
    for ( i = (_QWORD *)result[2]; i; i = (_QWORD *)i[2] )
      result = i;
  }
  else
  {
    while ( 1 )
    {
      a1 = (_QWORD *)*a1;
      if ( (_QWORD *)a1[1] != v3 )
        break;
      v3 = a1;
    }
    if ( (_QWORD *)a1[2] == v3 )
    {
      if ( (_QWORD *)*a1 != a1 )
        return a1;
      return (_QWORD *)v2;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
