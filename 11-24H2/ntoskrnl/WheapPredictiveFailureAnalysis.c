/*
 * XREFs of WheapPredictiveFailureAnalysis @ 0x140A3B4F0
 * Callers:
 *     WheapProcessWorkQueueItem @ 0x140474590 (WheapProcessWorkQueueItem.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     WheaAttemptPhysicalPageOffline @ 0x1407C7790 (WheaAttemptPhysicalPageOffline.c)
 *     WheapPfaMemoryCheck @ 0x1407C9714 (WheapPfaMemoryCheck.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall WheapPredictiveFailureAnalysis(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v3; // ecx
  unsigned int *v4; // r8
  char v5; // r9
  unsigned int i; // edx
  unsigned int *v7; // rdi
  void *Pool2; // rbp
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdi
  struct _KTHREAD *CurrentThread; // rax
  char *v13; // rax
  unsigned __int64 v14; // rcx
  signed __int8 v15; // cf
  char *v16; // rsi

  v1 = a1 + 40;
  if ( (unsigned int)PshedDoPfa(a1 + 40) != 1 && !*(_BYTE *)off_140E095A8 )
  {
    if ( WheapPfaInitialized )
    {
      v3 = *(unsigned __int16 *)(v1 + 10);
      if ( (_WORD)v3 )
      {
        if ( *(_DWORD *)(v1 + 12) == 2 && (*(_BYTE *)(v1 + 104) & 1) == 0 )
        {
          v4 = 0LL;
          v5 = 0;
          for ( i = 0; i < v3; ++i )
          {
            v4 = (unsigned int *)(v1 + 8 * (i + 8 * (i + 2LL)));
            if ( (v4[3] & 1) != 0 )
            {
              v5 = 1;
              break;
            }
          }
          v7 = (unsigned int *)(v1 + 128);
          if ( v5 )
            v7 = v4;
          Pool2 = (void *)ExAllocatePool2(0x100uLL, 0x1828uLL, 0x61656857u);
          if ( Pool2 )
          {
            v9 = *((_QWORD *)v7 + 2) - *(_QWORD *)&MEMORY_ERROR_SECTION_GUID.Data1;
            if ( !v9 )
              v9 = *((_QWORD *)v7 + 3) - *(_QWORD *)MEMORY_ERROR_SECTION_GUID.Data4;
            if ( !v9 )
            {
              v10 = *(_DWORD *)(a1 + 24);
              v11 = v1 + *v7;
              if ( (v10 & 4) != 0 )
              {
                if ( (v10 & 8) != 0 && (*(_BYTE *)v11 & 2) != 0 )
                  WheaAttemptPhysicalPageOffline(*(_QWORD *)(v11 + 16) >> 12, 1, 0, 0, (__int64)Pool2);
              }
              else
              {
                CurrentThread = KeGetCurrentThread();
                --CurrentThread->KernelApcDisable;
                v13 = (char *)KeAbPreAcquire((__int64)&WheapPfaLock, 0LL);
                v15 = _interlockedbittestandset64((volatile signed __int32 *)&WheapPfaLock, 0LL);
                v16 = v13;
                if ( v15 )
                  ExfAcquirePushLockExclusiveEx(&WheapPfaLock, v13, (__int64)&WheapPfaLock);
                if ( v16 )
                  v16[10] = 1;
                WheapPfaMemoryCheck(v14, v11, (__int64)Pool2);
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapPfaLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)&WheapPfaLock);
                KeAbPostRelease((ULONG_PTR)&WheapPfaLock);
                KeLeaveCriticalRegion();
              }
            }
            ExFreePoolWithTag(Pool2, 0x61656857u);
          }
        }
      }
    }
  }
}
