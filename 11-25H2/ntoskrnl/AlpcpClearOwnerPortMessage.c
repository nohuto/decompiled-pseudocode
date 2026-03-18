/*
 * XREFs of AlpcpClearOwnerPortMessage @ 0x1408AD120
 * Callers:
 *     AlpcpCancelMessage @ 0x1408AC700 (AlpcpCancelMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x1408ACCE0 (AlpcpDispatchReplyToPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x14098C750 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1409F1EF0 (AlpcpReplyLegacySynchronousRequest.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall AlpcpClearOwnerPortMessage(__int64 a1)
{
  void *v2; // rcx
  LONG_PTR result; // rax

  v2 = *(void **)(a1 + 24);
  if ( v2 )
  {
    if ( (*(_DWORD *)(a1 + 40) & 0x1000) != 0 )
      result = ObfDereferenceObject(v2);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  return result;
}
