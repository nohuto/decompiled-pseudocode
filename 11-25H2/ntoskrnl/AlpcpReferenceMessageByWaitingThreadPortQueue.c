/*
 * XREFs of AlpcpReferenceMessageByWaitingThreadPortQueue @ 0x140A35620
 * Callers:
 *     AlpcpReferenceMessageByWaitingThreadPort @ 0x140A353EC (AlpcpReferenceMessageByWaitingThreadPort.c)
 * Callees:
 *     AlpcpReferenceBlob @ 0x1408B4930 (AlpcpReferenceBlob.c)
 */

_QWORD *__fastcall AlpcpReferenceMessageByWaitingThreadPortQueue(__int64 a1, _QWORD **a2)
{
  _QWORD *i; // rbx

  for ( i = *a2; ; i = (_QWORD *)*i )
  {
    if ( i == a2 )
      return 0LL;
    if ( i[4] == a1 && AlpcpReferenceBlob((ULONG_PTR)i) )
      break;
  }
  return i;
}
