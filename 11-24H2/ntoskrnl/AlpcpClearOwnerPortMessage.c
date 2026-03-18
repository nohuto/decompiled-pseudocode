/*
 * XREFs of AlpcpClearOwnerPortMessage @ 0x140892D3C
 * Callers:
 *     AlpcpCancelMessagesByRequestor @ 0x14088CA00 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpDispatchReplyToPort @ 0x140892910 (AlpcpDispatchReplyToPort.c)
 *     AlpcpCancelMessage @ 0x140894410 (AlpcpCancelMessage.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1409EC9B0 (AlpcpReplyLegacySynchronousRequest.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
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
