/*
 * XREFs of AlpcpQueryHeadCanceledQueue @ 0x14089E71C
 * Callers:
 *     AlpcpReceiveMessagePort @ 0x14089DB00 (AlpcpReceiveMessagePort.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcpQueryHeadCanceledQueue(__int64 a1)
{
  _QWORD *v1; // rcx

  v1 = (_QWORD *)(a1 + 384);
  if ( (_QWORD *)*v1 == v1 )
    return 0LL;
  else
    return (*v1 - 80LL) & -(__int64)(*v1 != 0LL);
}
