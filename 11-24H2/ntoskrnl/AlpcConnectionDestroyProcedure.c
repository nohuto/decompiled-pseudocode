/*
 * XREFs of AlpcConnectionDestroyProcedure @ 0x140A1EAA0
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExFreeToPagedLookasideList @ 0x1403E03E0 (ExFreeToPagedLookasideList.c)
 *     AlpcpDereferenceBlobEx @ 0x140890420 (AlpcpDereferenceBlobEx.c)
 *     AlpcpUnlockBlobUncachedExclusive @ 0x1408963A0 (AlpcpUnlockBlobUncachedExclusive.c)
 *     AlpcpLockBlobExclusive @ 0x14089666C (AlpcpLockBlobExclusive.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AlpcConnectionDestroyProcedure(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rsi
  _QWORD *v6; // rax
  _QWORD *v7; // rbp
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  void *v10; // rcx
  ULONG_PTR v11; // rcx

  v4 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    AlpcpLockBlobExclusive(v4[2]);
    v6 = KeAbPreAcquire((__int64)(v4 + 44), 0LL);
    v7 = v6;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v4 + 88, 0LL) )
      ExfAcquirePushLockExclusiveEx(v4 + 44, (__int64)v6, (__int64)(v4 + 44));
    if ( v7 )
      *((_BYTE *)v7 + 10) = 1;
    v8 = *(_QWORD *)(a1 + 24);
    if ( *(_QWORD *)(v8 + 8) != a1 + 24 || (v9 = *(_QWORD **)(a1 + 32), *v9 != a1 + 24) )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    if ( (_InterlockedExchangeAdd64(v4 + 44, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v4 + 44);
    KeAbPostRelease((ULONG_PTR)(v4 + 44));
    AlpcpUnlockBlobUncachedExclusive(v4[2]);
    ObfDereferenceObject(*(PVOID *)a1);
  }
  v10 = *(void **)(a1 + 40);
  if ( v10 )
  {
    if ( *(_QWORD *)(a1 + 56) == 16LL )
      ExFreeToPagedLookasideList(&stru_140E27100, *(PVOID *)(a1 + 40));
    else
      ExFreePoolWithTag(v10, 0x61486C41u);
  }
  v11 = _InterlockedExchange64((volatile __int64 *)(a1 + 72), 0LL);
  if ( v11 )
    AlpcpDereferenceBlobEx(v11, 1, a3, a4);
  return 0LL;
}
