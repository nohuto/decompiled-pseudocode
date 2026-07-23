/*
 * XREFs of AlpcReserveDestroyProcedure @ 0x1409E0D30
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14089ED30 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockMessage @ 0x1408A1410 (AlpcpUnlockMessage.c)
 *     AlpcDeleteBlobByHandle @ 0x1409E0DA4 (AlpcDeleteBlobByHandle.c)
 *     AlpcpRemoveResourcePort @ 0x1409E0E6C (AlpcpRemoveResourcePort.c)
 */

__int64 __fastcall AlpcReserveDestroyProcedure(PVOID *a1)
{
  ULONG_PTR v1; // rdi
  PVOID v3; // rcx

  v1 = (ULONG_PTR)a1[3];
  if ( v1 )
  {
    AlpcpLockForCachedReferenceBlob((ULONG_PTR)a1[3]);
    *(_QWORD *)(v1 + 96) = 0LL;
    a1[3] = 0LL;
    AlpcpUnlockMessage(v1);
  }
  v3 = a1[1];
  if ( v3 )
    AlpcDeleteBlobByHandle(v3, a1[2], a1);
  if ( *a1 )
  {
    AlpcpRemoveResourcePort(*a1, a1);
    ObfDereferenceObject(*a1);
  }
  return 0LL;
}
