/*
 * XREFs of CmpDelayCloseWorker @ 0x1409D7200
 * Callers:
 *     ExpWorkerThread @ 0x1403047F0 (ExpWorkerThread.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmpDrainDelayDerefContext @ 0x14041D8F0 (CmpDrainDelayDerefContext.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     CmpInitializeDelayDerefContext @ 0x14042A740 (CmpInitializeDelayDerefContext.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     CmpDeleteHive @ 0x1408488CC (CmpDeleteHive.c)
 *     CmpLockKcbExclusive @ 0x140874380 (CmpLockKcbExclusive.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1408743F0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpUnlockKcb @ 0x140BA92B0 (CmpUnlockKcb.c)
 *     CmpLockRegistry @ 0x140BA9570 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140BA99D0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BA9A10 (CmpDetachFromRegistryProcess.c)
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
  char *v10; // r14
  ULONG_PTR BugCheckParameter4; // rbx
  ULONG_PTR v12; // rbp
  unsigned __int64 *v13; // r15
  __int64 *v14; // rax
  __int64 *v15; // r13
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  unsigned int v18; // ebp
  _BYTE *v19; // rbx
  ULONG_PTR v20; // r15
  __int64 v21; // rax
  __int64 v22; // rbp
  __int64 *v23; // rbx
  signed __int64 v24; // rax
  signed __int64 v25; // rdx
  __int64 v26; // rtt
  __int64 v27; // rcx
  __int64 v29; // rdx
  __int128 v30; // [rsp+30h] [rbp-E8h] BYREF
  __int128 v31; // [rsp+40h] [rbp-D8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-C8h] BYREF
  _BYTE v33[12]; // [rsp+88h] [rbp-90h] BYREF
  char v34; // [rsp+94h] [rbp-84h] BYREF

  v30 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v31 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v31);
  CmpAttachToRegistryProcess(&ApcState);
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
      v4 = v33;
      do
      {
        v5 = CmpDelayedCloseElements;
        if ( CmpDelayedCloseElements <= (unsigned int)CmpDelayedCloseSize && (!a1 || !CmpDelayedCloseElements) )
          break;
        v6 = qword_140EF51A8 - 224;
        if ( *(__int64 **)qword_140EF51A8 == &CmpDelayedLRUListHead )
        {
          v7 = *(_QWORD **)(qword_140EF51A8 + 8);
          if ( *v7 == qword_140EF51A8 )
            continue;
        }
        __fastfail(3u);
        qword_140EF51A8 = *(_QWORD *)(qword_140EF51A8 + 8);
        *v7 = &CmpDelayedLRUListHead;
        --qword_140FD9448;
        CmpDelayedCloseElements = v5 - 1;
        *((_QWORD *)v4 - 1) = *(_QWORD *)(v6 + 32);
        *(_QWORD *)v4 = v6;
        v8 = v3++;
        v33[24 * v8 + 8] = 0;
        *((_DWORD *)v4 + 3) = *(_DWORD *)(v6 + 16);
        v4 += 24;
        *(_BYTE *)(v6 + 64) |= 4u;
        *(_QWORD *)(v6 + 224) = &v33[24 * v8 + 8];
      }
      while ( v3 < 4 );
      KeReleaseGuardedMutex(&CmpDelayedCloseTableLock);
      v9 = 0;
      if ( v3 )
      {
        v10 = &v34;
        do
        {
          BugCheckParameter4 = *(unsigned int *)v10;
          v12 = *(_QWORD *)(v10 - 20);
          v13 = (unsigned __int64 *)(*(_QWORD *)(v12 + 1648)
                                   + 24
                                   * ((unsigned int)(*(_DWORD *)(v12 + 1656) - 1) & ((101027
                                                                                    * ((unsigned int)BugCheckParameter4 ^ (*(_DWORD *)v10 >> 9))) ^ ((unsigned __int64)(101027 * ((unsigned int)BugCheckParameter4 ^ (*(_DWORD *)v10 >> 9))) >> 9))));
          v14 = KeAbPreAcquire((__int64)v13, 0LL);
          v15 = v14;
          if ( _interlockedbittestandset64((volatile signed __int32 *)v13, 0LL) )
            ExfAcquirePushLockExclusiveEx(v13, v14, (__int64)v13);
          if ( v15 )
            *((_BYTE *)v15 + 10) = 1;
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
            v19 = &v33[24 * v9];
            do
            {
              if ( *((_DWORD *)v19 + 3) == *(_DWORD *)v10 && *((_QWORD *)v19 - 1) == *(_QWORD *)(v10 - 20) && !v19[8] )
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
                v33[24 * v18 + 8] = 1;
              }
              ++v18;
              v19 += 24;
            }
            while ( v18 < v3 );
          }
          v22 = *(_QWORD *)(v10 - 20);
          v23 = (__int64 *)(*(_QWORD *)(v22 + 1648)
                          + 24
                          * ((unsigned int)(*(_DWORD *)(v22 + 1656) - 1) & ((unsigned int)(101027
                                                                                         * (*(_DWORD *)v10 ^ (*(_DWORD *)v10 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)v10 ^ (*(_DWORD *)v10 >> 9))) >> 9))));
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
          v10 += 24;
        }
        while ( v9 < v3 );
      }
    }
    while ( v3 == 4 );
  }
  while ( !a1 && _InterlockedCompareExchange(&CmpDelayCloseWorkItemActive, 0, 2) != 2 );
  CmpDrainDelayDerefContext((_QWORD **)&v30);
  CmpUnlockRegistry(v27);
  CmpDetachFromRegistryProcess(&ApcState);
  return CmCleanupThreadInfo((_KAFFINITY_EX **)&v31);
}
