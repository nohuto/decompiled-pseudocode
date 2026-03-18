/*
 * XREFs of AlpcReserveDestroyProcedure @ 0x1409E64A0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x140890590 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockMessage @ 0x140898D70 (AlpcpUnlockMessage.c)
 *     AlpcDeleteBlobByHandle @ 0x1409E6514 (AlpcDeleteBlobByHandle.c)
 *     AlpcpRemoveResourcePort @ 0x1409E65DC (AlpcpRemoveResourcePort.c)
 */

__int64 __fastcall AlpcReserveDestroyProcedure(PVOID *a1)
{
  ULONG_PTR v1; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  PVOID v6; // rcx

  v1 = (ULONG_PTR)a1[3];
  if ( v1 )
  {
    AlpcpLockForCachedReferenceBlob((ULONG_PTR)a1[3]);
    *(_QWORD *)(v1 + 96) = 0LL;
    a1[3] = 0LL;
    AlpcpUnlockMessage(v1, v3, v4, v5);
  }
  v6 = a1[1];
  if ( v6 )
    AlpcDeleteBlobByHandle(v6, a1[2], a1);
  if ( *a1 )
  {
    AlpcpRemoveResourcePort(*a1, a1);
    ObfDereferenceObject(*a1);
  }
  return 0LL;
}
