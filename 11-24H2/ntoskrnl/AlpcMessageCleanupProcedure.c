/*
 * XREFs of AlpcMessageCleanupProcedure @ 0x140890820
 * Callers:
 *     AlpcpReleaseAttributes @ 0x140890220 (AlpcpReleaseAttributes.c)
 *     AlpcpDereferenceBlobEx @ 0x140890420 (AlpcpDereferenceBlobEx.c)
 *     AlpcpUnlockBlob @ 0x140890620 (AlpcpUnlockBlob.c)
 *     AlpcpUnlockMessage @ 0x140898D70 (AlpcpUnlockMessage.c)
 *     AlpcMessageDestroyProcedure @ 0x1409B08F0 (AlpcMessageDestroyProcedure.c)
 *     AlpcpProcessSynchronousRequest @ 0x140A304CC (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PspChargeProcessWakeCounter @ 0x14088FD70 (PspChargeProcessWakeCounter.c)
 *     AlpcpReleaseAttributes @ 0x140890220 (AlpcpReleaseAttributes.c)
 */

__int64 __fastcall AlpcMessageCleanupProcedure(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v5; // rcx
  __int64 v6; // rcx
  int v7; // ebp
  int v8; // r8d
  int v9; // edx
  __int64 v10; // rcx
  int v11; // r8d
  __int64 result; // rax

  *(_DWORD *)(a1 + 264) |= 0x80000000;
  v5 = *(void **)(a1 + 24);
  if ( v5 )
  {
    if ( (*(_DWORD *)(a1 + 40) & 0x1000) != 0 )
      ObfDereferenceObject(v5);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  AlpcpReleaseAttributes((_QWORD *)(a1 + 104), a2, a3, a4);
  v6 = *(_QWORD *)(a1 + 208);
  v7 = 2;
  if ( v6 )
  {
    v8 = 0;
    v9 = 2;
    if ( (v6 & 7) != 7 )
    {
      v8 = v6 & 7;
      v9 = 0;
    }
    PspChargeProcessWakeCounter(v6 & 0xFFFFFFFFFFFFFFF8uLL, v9, v8, *(unsigned int *)(a1 + 264), -1, 1, 0LL);
    *(_QWORD *)(a1 + 208) = 0LL;
  }
  v10 = *(_QWORD *)(a1 + 216);
  if ( v10 )
  {
    v11 = 0;
    if ( (v10 & 7) != 7 )
    {
      v7 = 0;
      v11 = v10 & 7;
    }
    PspChargeProcessWakeCounter(v10 & 0xFFFFFFFFFFFFFFF8uLL, v7, v11, *(unsigned int *)(a1 + 264), -1, 1, 0LL);
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
