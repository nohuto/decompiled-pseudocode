/*
 * XREFs of AlpcMessageCleanupProcedure @ 0x1408B2BD0
 * Callers:
 *     AlpcpUnlockMessage @ 0x1408AA9C0 (AlpcpUnlockMessage.c)
 *     AlpcpReleaseAttributes @ 0x1408B25D0 (AlpcpReleaseAttributes.c)
 *     AlpcpDereferenceBlobEx @ 0x1408B27D0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpUnlockBlob @ 0x1408B29D0 (AlpcpUnlockBlob.c)
 *     AlpcMessageDestroyProcedure @ 0x1408B3500 (AlpcMessageDestroyProcedure.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     PspChargeProcessWakeCounter @ 0x1408B2120 (PspChargeProcessWakeCounter.c)
 *     AlpcpReleaseAttributes @ 0x1408B25D0 (AlpcpReleaseAttributes.c)
 */

__int64 __fastcall AlpcMessageCleanupProcedure(__int64 a1)
{
  void *v2; // rcx
  __int64 v3; // rcx
  int v4; // ebp
  unsigned int v5; // r8d
  int v6; // edx
  __int64 v7; // rcx
  unsigned int v8; // r8d
  __int64 result; // rax

  *(_DWORD *)(a1 + 264) |= 0x80000000;
  v2 = *(void **)(a1 + 24);
  if ( v2 )
  {
    if ( (*(_DWORD *)(a1 + 40) & 0x1000) != 0 )
      ObfDereferenceObject(v2);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  AlpcpReleaseAttributes((_QWORD *)(a1 + 104));
  v3 = *(_QWORD *)(a1 + 208);
  v4 = 2;
  if ( v3 )
  {
    v5 = 0;
    v6 = 2;
    if ( (v3 & 7) != 7 )
    {
      v5 = v3 & 7;
      v6 = 0;
    }
    PspChargeProcessWakeCounter(v3 & 0xFFFFFFFFFFFFFFF8uLL, v6, v5, *(unsigned int *)(a1 + 264), -1, 1, 0LL);
    *(_QWORD *)(a1 + 208) = 0LL;
  }
  v7 = *(_QWORD *)(a1 + 216);
  if ( v7 )
  {
    v8 = 0;
    if ( (v7 & 7) != 7 )
    {
      v4 = 0;
      v8 = v7 & 7;
    }
    PspChargeProcessWakeCounter(v7 & 0xFFFFFFFFFFFFFFF8uLL, v4, v8, *(unsigned int *)(a1 + 264), -1, 1, 0LL);
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
