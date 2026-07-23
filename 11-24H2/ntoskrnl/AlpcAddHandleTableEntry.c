/*
 * XREFs of AlpcAddHandleTableEntry @ 0x140894EE0
 * Callers:
 *     AlpcpCreateSection @ 0x140893594 (AlpcpCreateSection.c)
 *     AlpcpCreateReserve @ 0x140893C6C (AlpcpCreateReserve.c)
 *     NtAlpcCreateSecurityContext @ 0x14089D0F0 (NtAlpcCreateSecurityContext.c)
 *     AlpcpCreateSecurityContext @ 0x14089E878 (AlpcpCreateSecurityContext.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExFreeToPagedLookasideList @ 0x1403C00D0 (ExFreeToPagedLookasideList.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AlpcAddHandleTableEntry(__int64 a1, _QWORD *a2)
{
  char *v4; // rax
  char *v5; // rbx
  unsigned __int64 v6; // rdx
  unsigned __int64 i; // rdi
  __int64 v9; // rbp
  void *Pool2; // rax
  void *v11; // r14
  __int64 v12; // rdi
  __int64 v13; // rdi

  v4 = (char *)KeAbPreAcquire(a1 + 8, 0LL);
  v5 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 8), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 8), v4, a1 + 8);
  if ( v5 )
    v5[10] = 1;
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
    Pool2 = (void *)ExAllocatePool2(0x100uLL, 16 * v6, 0x61486C41u);
    v11 = Pool2;
    v12 = -1LL;
    if ( Pool2 )
    {
      memset_0(Pool2, 0, 8 * v9);
      memmove(v11, *(const void **)a1, 8LL * *(_QWORD *)(a1 + 16));
      v13 = *(_QWORD *)(a1 + 16);
      *((_QWORD *)v11 + v13) = *a2;
      if ( *(_QWORD *)(a1 + 16) == 16LL )
        ExFreeToPagedLookasideList(&stru_140E27240, *(PVOID *)a1);
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
