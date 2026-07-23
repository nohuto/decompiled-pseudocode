/*
 * XREFs of CmpDelayCloseWorker @ 0x1409C6AD0
 * Callers:
 *     ExpWorkerThread @ 0x14032F2A0 (ExpWorkerThread.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     CmpInitializeThreadInfo @ 0x1403F0160 (CmpInitializeThreadInfo.c)
 *     CmpDrainDelayDerefContext @ 0x14040AEB0 (CmpDrainDelayDerefContext.c)
 *     CmpCleanupThreadInfo @ 0x140414BA0 (CmpCleanupThreadInfo.c)
 *     CmpInitializeDelayDerefContext @ 0x140418320 (CmpInitializeDelayDerefContext.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     CmpDeleteHive @ 0x140840A1C (CmpDeleteHive.c)
 *     CmpLockKcbExclusive @ 0x1408747A0 (CmpLockKcbExclusive.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x140874810 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpUnlockKcb @ 0x140BBB2C0 (CmpUnlockKcb.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BBB920 (CmpDetachFromRegistryProcess.c)
 *     CmpLockRegistry @ 0x140BBBE60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

_KAFFINITY_EX *__fastcall CmpDelayCloseWorker(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // edi
  _BYTE *v4; // r9
  int v5; // eax
  __int64 v6; // r8
  _QWORD *v7; // rdx
  __int64 v8; // rax
  unsigned int v9; // esi
  _DWORD *v10; // r14
  ULONG_PTR BugCheckParameter4; // rbx
  ULONG_PTR v12; // rbp
  unsigned __int64 *v13; // r15
  char *v14; // rax
  char *v15; // r13
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  unsigned int v18; // ebp
  _BYTE *v19; // rbx
  ULONG_PTR v20; // r15
  __int64 v21; // rax
  __int64 v22; // rbp
  signed __int64 *v23; // rbx
  signed __int64 v24; // rax
  signed __int64 v25; // rdx
  signed __int64 v26; // rtt
  __int64 v27; // rcx
  __int64 v29; // rdx
  __int128 v30; // [rsp+30h] [rbp-F8h] BYREF
  _BYTE v31[232]; // [rsp+40h] [rbp-E8h] BYREF

  v30 = 0LL;
  memset(v31, 0, 72);
  CmpInitializeThreadInfo((_KAFFINITY_EX *)v31);
  CmpAttachToRegistryProcess((PRKAPC_STATE)&v31[24]);
  CmpInitializeDelayDerefContext(&v30);
  CmpLockRegistry(v2);
  if ( a1 )
    goto LABEL_3;
  do
  {
    _InterlockedExchange(&CmpDelayCloseWorkItemActive, 2);
    do
    {
LABEL_3:
      v3 = 0;
      ExAcquireFastMutex(&CmpDelayedCloseTableLock);
      v4 = &v31[88];
      do
      {
        v5 = CmpDelayedCloseElements;
        if ( CmpDelayedCloseElements <= (unsigned int)CmpDelayedCloseSize && (!a1 || !CmpDelayedCloseElements) )
          break;
        v6 = qword_140EF5708 - 224;
        if ( *(__int64 **)qword_140EF5708 == &CmpDelayedLRUListHead )
        {
          v7 = *(_QWORD **)(qword_140EF5708 + 8);
          if ( *v7 == qword_140EF5708 )
            continue;
        }
        __fastfail(3u);
        qword_140EF5708 = *(_QWORD *)(qword_140EF5708 + 8);
        *v7 = &CmpDelayedLRUListHead;
        --qword_140FDA428;
        CmpDelayedCloseElements = v5 - 1;
        *((_QWORD *)v4 - 1) = *(_QWORD *)(v6 + 32);
        *(_QWORD *)v4 = v6;
        v8 = v3++;
        v31[24 * v8 + 96] = 0;
        *((_DWORD *)v4 + 3) = *(_DWORD *)(v6 + 16);
        v4 += 24;
        *(_BYTE *)(v6 + 64) |= 4u;
        *(_QWORD *)(v6 + 224) = &v31[24 * v8 + 96];
      }
      while ( v3 < 4 );
      KeReleaseGuardedMutex(&CmpDelayedCloseTableLock);
      v9 = 0;
      if ( v3 )
      {
        v10 = &v31[100];
        do
        {
          BugCheckParameter4 = (unsigned int)*v10;
          v12 = *(_QWORD *)(v10 - 5);
          v13 = (unsigned __int64 *)(*(_QWORD *)(v12 + 1648)
                                   + 24
                                   * ((unsigned int)(*(_DWORD *)(v12 + 1656) - 1) & ((101027
                                                                                    * ((unsigned int)BugCheckParameter4 ^ (*v10 >> 9))) ^ ((unsigned __int64)(101027 * ((unsigned int)BugCheckParameter4 ^ (*v10 >> 9))) >> 9))));
          v14 = (char *)KeAbPreAcquire((__int64)v13, 0LL);
          v15 = v14;
          if ( _interlockedbittestandset64((volatile signed __int32 *)v13, 0LL) )
            ExfAcquirePushLockExclusiveEx(v13, v14, (__int64)v13);
          if ( v15 )
            v15[10] = 1;
          v13[1] = (unsigned __int64)KeGetCurrentThread();
          _m_prefetchw((const void *)(v12 + 4232));
          v16 = *(_DWORD *)(v12 + 4232);
          do
          {
            if ( !v16 )
              KeBugCheckEx(0x51u, 0x17uLL, v12, 0xCuLL, BugCheckParameter4);
            v17 = v16;
            v16 = _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 4232), v16 + 1, v16);
          }
          while ( v17 != v16 );
          v18 = v9;
          if ( v9 < v3 )
          {
            v19 = &v31[24 * v9 + 88];
            do
            {
              if ( *((_DWORD *)v19 + 3) == *v10 && *((_QWORD *)v19 - 1) == *(_QWORD *)(v10 - 5) && !v19[8] )
              {
                CmpLockKcbExclusive(*(_QWORD *)v19);
                v20 = 0LL;
                v21 = *(_QWORD *)(*(_QWORD *)v19 + 192LL);
                if ( v21 )
                {
                  v29 = *(_QWORD *)(v21 + 24);
                  if ( v29 )
                  {
                    v20 = *(_QWORD *)(v29 + 16);
                    CmpUnlockKcb(*(_QWORD *)v19);
                    CmpLockKcbExclusive(v20);
                    CmpLockKcbExclusive(*(_QWORD *)v19);
                  }
                }
                CmpCleanUpKcbCacheWithLock(*(_QWORD *)v19, (__int64)&v30);
                CmpUnlockKcb(*(_QWORD *)v19);
                if ( v20 )
                  CmpUnlockKcb(v20);
                v31[24 * v18 + 96] = 1;
              }
              ++v18;
              v19 += 24;
            }
            while ( v18 < v3 );
          }
          v22 = *(_QWORD *)(v10 - 5);
          v23 = (signed __int64 *)(*(_QWORD *)(v22 + 1648)
                                 + 24
                                 * ((unsigned int)(*(_DWORD *)(v22 + 1656) - 1) & ((unsigned int)(101027
                                                                                                * (*v10 ^ (*v10 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*v10 ^ (*v10 >> 9))) >> 9))));
          v23[1] = 0LL;
          _m_prefetchw(v23);
          v24 = *v23;
          v25 = *v23 - 16;
          if ( (*v23 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v25 = 0LL;
          if ( (v24 & 2) != 0 || (v26 = *v23, v26 != _InterlockedCompareExchange64(v23, v25, v24)) )
            ExfReleasePushLock(v23);
          KeAbPostRelease((ULONG_PTR)v23);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v22 + 4232), 0xFFFFFFFF) == 1 )
            CmpDeleteHive((_QWORD *)v22);
          ++v9;
          v10 += 6;
        }
        while ( v9 < v3 );
      }
    }
    while ( v3 == 4 );
  }
  while ( !a1 && _InterlockedCompareExchange(&CmpDelayCloseWorkItemActive, 0, 2) != 2 );
  CmpDrainDelayDerefContext((_QWORD **)&v30);
  CmpUnlockRegistry(v27);
  CmpDetachFromRegistryProcess(&v31[24]);
  return CmpCleanupThreadInfo((_KAFFINITY_EX **)v31);
}
