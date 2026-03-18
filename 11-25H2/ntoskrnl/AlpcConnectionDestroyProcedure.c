/*
 * XREFs of AlpcConnectionDestroyProcedure @ 0x14098B330
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ExFreeToPagedLookasideList @ 0x1403D3020 (ExFreeToPagedLookasideList.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     AlpcpDereferenceBlobEx @ 0x1408B27D0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpUnlockBlobUncachedExclusive @ 0x14098BD4C (AlpcpUnlockBlobUncachedExclusive.c)
 *     AlpcpLockBlobExclusive @ 0x14098BD84 (AlpcpLockBlobExclusive.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AlpcConnectionDestroyProcedure(__int64 a1)
{
  _QWORD *v1; // rsi
  __int64 *v3; // rax
  __int64 *v4; // rbp
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  void *v7; // rcx
  ULONG_PTR v8; // rcx

  v1 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    AlpcpLockBlobExclusive(v1[2]);
    v3 = KeAbPreAcquire((__int64)(v1 + 44), 0LL);
    v4 = v3;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v1 + 88, 0LL) )
      ExfAcquirePushLockExclusiveEx(v1 + 44, v3, (__int64)(v1 + 44));
    if ( v4 )
      *((_BYTE *)v4 + 10) = 1;
    v5 = *(_QWORD *)(a1 + 24);
    if ( *(_QWORD *)(v5 + 8) != a1 + 24 || (v6 = *(_QWORD **)(a1 + 32), *v6 != a1 + 24) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    if ( (_InterlockedExchangeAdd64(v1 + 44, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v1 + 44);
    KeAbPostRelease((ULONG_PTR)(v1 + 44));
    AlpcpUnlockBlobUncachedExclusive(v1[2]);
    ObfDereferenceObject(*(PVOID *)a1);
  }
  v7 = *(void **)(a1 + 40);
  if ( v7 )
  {
    if ( *(_QWORD *)(a1 + 56) == 16LL )
      ExFreeToPagedLookasideList(&stru_140E26F40, *(PVOID *)(a1 + 40));
    else
      ExFreePoolWithTag(v7, 0x61486C41u);
  }
  v8 = _InterlockedExchange64((volatile __int64 *)(a1 + 72), 0LL);
  if ( v8 )
    AlpcpDereferenceBlobEx(v8, 1);
  return 0LL;
}
