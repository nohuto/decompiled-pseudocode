/*
 * XREFs of AlpcpQueryHeadMainQueue @ 0x140896358
 * Callers:
 *     AlpcpReceiveMessagePort @ 0x140895660 (AlpcpReceiveMessagePort.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall AlpcpQueryHeadMainQueue(__int64 a1)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  v1 = (_QWORD *)(a1 + 144);
  result = (_QWORD *)*v1;
  if ( (_QWORD *)*v1 == v1 )
    return 0LL;
  return result;
}
