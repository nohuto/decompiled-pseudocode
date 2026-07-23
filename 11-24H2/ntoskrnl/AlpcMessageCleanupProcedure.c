/*
 * XREFs of AlpcMessageCleanupProcedure @ 0x1408982A0
 * Callers:
 *     AlpcMessageDestroyProcedure @ 0x140897C10 (AlpcMessageDestroyProcedure.c)
 *     AlpcpUnlockBlob @ 0x1408980A0 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14089EBC0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpUnlockMessage @ 0x1408A1410 (AlpcpUnlockMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x140A24FBC (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PspChargeProcessWakeCounter @ 0x1408999A0 (PspChargeProcessWakeCounter.c)
 *     AlpcpReleaseAttributes @ 0x140899E50 (AlpcpReleaseAttributes.c)
 */

__int64 __fastcall AlpcMessageCleanupProcedure(__int64 a1)
{
  void *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 result; // rax

  *(_DWORD *)(a1 + 264) |= 0x80000000;
  v2 = *(void **)(a1 + 24);
  if ( v2 )
  {
    if ( (*(_DWORD *)(a1 + 40) & 0x1000) != 0 )
      ObfDereferenceObject(v2);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  AlpcpReleaseAttributes(a1, a1 + 104);
  v3 = *(_QWORD *)(a1 + 208);
  if ( v3 )
  {
    PspChargeProcessWakeCounter((PVOID)(v3 & 0xFFFFFFFFFFFFFFF8uLL), -1, 1, 0LL);
    *(_QWORD *)(a1 + 208) = 0LL;
  }
  v4 = *(_QWORD *)(a1 + 216);
  if ( v4 )
  {
    PspChargeProcessWakeCounter((PVOID)(v4 & 0xFFFFFFFFFFFFFFF8uLL), -1, 1, 0LL);
    *(_QWORD *)(a1 + 216) = 0LL;
  }
  result = *(_QWORD *)(a1 + 96);
  if ( result )
  {
    *(_DWORD *)(a1 + 240) = 2621440;
    *(_QWORD *)(a1 + 184) = 0LL;
    *(_QWORD *)(a1 + 192) = 0LL;
    *(_DWORD *)(a1 + 40) = 0;
    _InterlockedExchange((volatile __int32 *)(result + 40), 0);
  }
  return result;
}
