/*
 * XREFs of AlpcRegionDestroyProcedure @ 0x140A1D030
 * Callers:
 *     <none>
 * Callees:
 *     AlpcpDereferenceBlobEx @ 0x1408B27D0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1408B2940 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x1408B29D0 (AlpcpUnlockBlob.c)
 */

__int64 __fastcall AlpcRegionDestroyProcedure(__int64 a1)
{
  ULONG_PTR v1; // rdi

  v1 = *(_QWORD *)(a1 + 16);
  AlpcpLockForCachedReferenceBlob(v1);
  **(_QWORD **)(a1 + 8) = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)(a1 + 8);
  --*(_DWORD *)(v1 + 52);
  AlpcpUnlockBlob(v1);
  AlpcpDereferenceBlobEx(v1, 1);
  return 0LL;
}
