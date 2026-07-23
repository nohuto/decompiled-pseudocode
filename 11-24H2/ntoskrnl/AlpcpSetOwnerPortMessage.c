/*
 * XREFs of AlpcpSetOwnerPortMessage @ 0x140890C40
 * Callers:
 *     AlpcpDispatchCloseMessage @ 0x14089016C (AlpcpDispatchCloseMessage.c)
 *     AlpcpDispatchConnectionRequest @ 0x14089032C (AlpcpDispatchConnectionRequest.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14089055C (AlpcpSendLegacySynchronousRequest.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 */

LONG_PTR __fastcall AlpcpSetOwnerPortMessage(__int64 a1, void *a2)
{
  LONG_PTR result; // rax

  result = PsReferenceSiloContext(a2);
  *(_DWORD *)(a1 + 40) |= 0x1000u;
  *(_QWORD *)(a1 + 24) = a2;
  return result;
}
