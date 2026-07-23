/*
 * XREFs of ExpWnfGetPermanentDataStore @ 0x140A87FEC
 * Callers:
 *     ExpWnfDeletePermanentStateData @ 0x1407C665C (ExpWnfDeletePermanentStateData.c)
 *     ExpWnfCreateNameInstance @ 0x140835DA0 (ExpWnfCreateNameInstance.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExpWnfDestroyPermanentDataStore @ 0x1407C688C (ExpWnfDestroyPermanentDataStore.c)
 *     ExpWnfGetPermanentDataStoreHandleByScopeId @ 0x1407C6A00 (ExpWnfGetPermanentDataStoreHandleByScopeId.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpWnfGetPermanentDataStore(__int64 a1, int a2, int a3, _QWORD *a4)
{
  _BOOL8 v8; // rsi
  __int64 v9; // rax
  __int64 Pool2; // rax
  signed __int64 v12; // rdi
  __int64 v13; // r14
  __int64 v14; // r9
  int PermanentDataStoreHandleByScopeId; // ebp
  char *v16; // rax
  signed __int8 v17; // cf
  char *v18; // rbp
  __int64 *v19; // rax

  v8 = (unsigned int)(a2 - 2) <= 1;
  v9 = *(_QWORD *)(a1 + 8 * v8 + 64);
  if ( v9 )
  {
    *a4 = v9;
    return 0LL;
  }
  Pool2 = ExAllocatePool2(0x100uLL, (unsigned int)(*(_DWORD *)(a1 + 20) + 48), 0x20666E57u);
  v12 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_DWORD *)(Pool2 + 4) = 0;
  v13 = Pool2 + 24;
  *(_QWORD *)(Pool2 + 16) = 0LL;
  *(_QWORD *)(Pool2 + 32) = 0LL;
  *(_QWORD *)(Pool2 + 40) = 0LL;
  *(_DWORD *)Pool2 = 3148042;
  *(_QWORD *)(Pool2 + 8) = 0LL;
  *(_QWORD *)(Pool2 + 32) = Pool2 + 24;
  *(_QWORD *)(Pool2 + 24) = Pool2 + 24;
  *(_DWORD *)(Pool2 + 40) = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(Pool2 + 44) = *(_DWORD *)(a1 + 20);
  memmove((void *)(Pool2 + 48), *(const void **)(a1 + 24), *(unsigned int *)(a1 + 20));
  PermanentDataStoreHandleByScopeId = ExpWnfGetPermanentDataStoreHandleByScopeId(
                                        *(_DWORD *)(a1 + 16),
                                        a2,
                                        *(void **)(a1 + 24),
                                        v14,
                                        (unsigned int)(a2 - 2) <= 1,
                                        a3,
                                        (PHANDLE)(v12 + 16));
  if ( PermanentDataStoreHandleByScopeId >= 0 )
  {
    v16 = (char *)KeAbPreAcquire((__int64)&ExpWnfPermenentDataStoresListLock, 0LL);
    v17 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWnfPermenentDataStoresListLock, 0LL);
    v18 = v16;
    if ( v17 )
      ExfAcquirePushLockExclusiveEx(
        &ExpWnfPermenentDataStoresListLock,
        v16,
        (__int64)&ExpWnfPermenentDataStoresListLock);
    if ( v18 )
      v18[10] = 1;
    v19 = (__int64 *)off_140FD82B8;
    if ( *off_140FD82B8 != (_UNKNOWN *)&ExpWnfPermenentDataStoresList )
      __fastfail(3u);
    *(_QWORD *)(v13 + 8) = off_140FD82B8;
    *(_QWORD *)v13 = &ExpWnfPermenentDataStoresList;
    *v19 = v13;
    off_140FD82B8 = (_UNKNOWN **)v13;
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&ExpWnfPermenentDataStoresListLock,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpWnfPermenentDataStoresListLock);
    KeAbPostRelease((ULONG_PTR)&ExpWnfPermenentDataStoresListLock);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v8 + 64), v12, 0LL) )
      ExpWnfDestroyPermanentDataStore((_QWORD *)v12);
    *a4 = *(_QWORD *)(a1 + 8 * v8 + 64);
    return 0LL;
  }
  ExFreePoolWithTag((PVOID)v12, 0x20666E57u);
  return (unsigned int)PermanentDataStoreHandleByScopeId;
}
