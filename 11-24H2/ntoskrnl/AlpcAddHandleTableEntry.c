/*
 * XREFs of AlpcAddHandleTableEntry @ 0x1409408A0
 * Callers:
 *     NtAlpcCreateSecurityContext @ 0x140894C50 (NtAlpcCreateSecurityContext.c)
 *     AlpcpCreateSecurityContext @ 0x1408963D8 (AlpcpCreateSecurityContext.c)
 *     AlpcpCreateSection @ 0x14093EF54 (AlpcpCreateSection.c)
 *     AlpcpCreateReserve @ 0x14093F62C (AlpcpCreateReserve.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExFreeToPagedLookasideList @ 0x1403E03E0 (ExFreeToPagedLookasideList.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AlpcAddHandleTableEntry(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  unsigned __int64 v6; // rdx
  unsigned __int64 i; // rdi
  __int64 v9; // rbp
  void *Pool2; // rax
  void *v11; // r14
  __int64 v12; // rdi
  __int64 v13; // rdi

  v4 = KeAbPreAcquire(a1 + 8, 0LL);
  v5 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 8), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 8), (__int64)v4, a1 + 8);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  v6 = *(_QWORD *)(a1 + 16);
  for ( i = 0LL; i < v6; ++i )
  {
    if ( !*(_QWORD *)(*(_QWORD *)a1 + 8 * i) )
    {
      *(_QWORD *)(*(_QWORD *)a1 + 8 * i) = *a2;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 8));
      KeAbPostRelease(a1 + 8);
      return i + 16;
    }
  }
  v9 = 2 * v6;
  if ( 2 * v6 >= 0x1FFFFFFFFFFFFFFFLL )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 8));
    KeAbPostRelease(a1 + 8);
    return -1LL;
  }
  else
  {
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    v11 = Pool2;
    v12 = -1LL;
    if ( Pool2 )
    {
      memset_0(Pool2, 0, 8 * v9);
      memmove(v11, *(const void **)a1, 8LL * *(_QWORD *)(a1 + 16));
      v13 = *(_QWORD *)(a1 + 16);
      *((_QWORD *)v11 + v13) = *a2;
      if ( *(_QWORD *)(a1 + 16) == 16LL )
        ExFreeToPagedLookasideList(&stru_140E27100, *(PVOID *)a1);
      else
        ExFreePoolWithTag(*(PVOID *)a1, 0x61486C41u);
      *(_QWORD *)a1 = v11;
      v12 = v13 + 16;
      *(_QWORD *)(a1 + 16) = v9;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 8));
    KeAbPostRelease(a1 + 8);
    return v12;
  }
}
