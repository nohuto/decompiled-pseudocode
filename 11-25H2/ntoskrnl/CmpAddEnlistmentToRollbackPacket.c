/*
 * XREFs of CmpAddEnlistmentToRollbackPacket @ 0x1407D0740
 * Callers:
 *     CmSnapshotRMTxArray @ 0x140863EA8 (CmSnapshotRMTxArray.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     CmpAddPointerToRollbackPacket @ 0x1407D0794 (CmpAddPointerToRollbackPacket.c)
 */

__int64 __fastcall CmpAddEnlistmentToRollbackPacket(__int64 a1, void *a2)
{
  int v4; // eax
  unsigned int v5; // ebx

  PsReferenceSiloContext(a2);
  v4 = CmpAddPointerToRollbackPacket(a1, a2);
  v5 = v4;
  if ( v4 == -1073740008 )
  {
    v5 = 0;
  }
  else if ( v4 >= 0 )
  {
    return 0;
  }
  ObfDereferenceObject(a2);
  return v5;
}
