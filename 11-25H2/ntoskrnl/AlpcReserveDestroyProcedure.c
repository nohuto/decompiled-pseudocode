/*
 * XREFs of AlpcReserveDestroyProcedure @ 0x1409EC530
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     AlpcpUnlockMessage @ 0x1408AA9C0 (AlpcpUnlockMessage.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1408B2940 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcDeleteBlobByHandle @ 0x1409EC5A4 (AlpcDeleteBlobByHandle.c)
 *     AlpcpRemoveResourcePort @ 0x1409EC66C (AlpcpRemoveResourcePort.c)
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
