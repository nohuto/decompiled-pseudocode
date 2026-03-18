/*
 * XREFs of AlpcpLocateView @ 0x1408930E8
 * Callers:
 *     AlpcpQueryRemoteView @ 0x14088A6E4 (AlpcpQueryRemoteView.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1408926D0 (AlpcpExposeViewAttributeInSenderContext.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall AlpcpLocateView(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rcx
  _QWORD *result; // rax

  v2 = (_QWORD *)(a1 + 56);
  for ( result = (_QWORD *)*v2; result != v2; result = (_QWORD *)*result )
  {
    if ( result[3] == a2 )
      return result;
  }
  return 0LL;
}
