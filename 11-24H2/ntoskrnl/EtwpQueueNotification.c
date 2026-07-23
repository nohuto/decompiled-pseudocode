/*
 * XREFs of EtwpQueueNotification @ 0x140834C40
 * Callers:
 *     EtwpSendDataBlock @ 0x140834A64 (EtwpSendDataBlock.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     EtwpReleaseQueueEntry @ 0x140831B1C (EtwpReleaseQueueEntry.c)
 *     EtwpAddDataSource @ 0x140834E58 (EtwpAddDataSource.c)
 *     PsChargeProcessWakeCounter @ 0x1408983D0 (PsChargeProcessWakeCounter.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpQueueNotification(void *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int16 v4; // r12
  char v8; // r13
  _QWORD *v9; // r14
  __int64 Pool2; // rax
  signed __int64 v11; // rdi
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v13; // rsi
  char *v14; // rax
  char *v15; // rbp
  _QWORD *v16; // rdx
  _QWORD *j; // r8
  signed __int64 *v18; // rax
  signed __int64 v19; // rax
  signed __int64 v20; // rdx
  signed __int64 v21; // rtt
  struct _KEVENT *v23; // rcx
  void *v24; // rbx
  unsigned int i; // edx

  v3 = 0;
  v4 = *(_WORD *)(a3 + 98) & 0x80;
  v8 = 1;
  v9 = (_QWORD *)EtwpAddDataSource();
  if ( v9 && (Pool2 = ExAllocatePool2(0x40uLL, 0x38uLL, 0x72777445u), (v11 = Pool2) != 0) )
  {
    *(_QWORD *)(Pool2 + 16) = a2;
    *(_QWORD *)(Pool2 + 24) = a3;
    *(_WORD *)(Pool2 + 48) = *(_WORD *)(a3 + 96);
    *(_DWORD *)(Pool2 + 52) = 1;
    if ( *(_BYTE *)(a2 + 12) )
    {
      v24 = *(void **)(a2 + 24);
      *(_DWORD *)(Pool2 + 52) |= 2u;
      PsReferenceSiloContext(v24);
      *(_QWORD *)(v11 + 32) = v24;
      *(_QWORD *)(v11 + 40) = PsChargeProcessWakeCounter(a1);
      for ( i = 0; i < 4; ++i )
      {
        if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 8LL * i + 48), v11, 0LL) )
        {
          *(_WORD *)(v11 + 50) = i;
          v3 = 0;
          goto LABEL_4;
        }
      }
      v3 = -1073741823;
      EtwpReleaseQueueEntry((PVOID *)v11, 3);
    }
    else
    {
LABEL_4:
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 8));
      CurrentThread = KeGetCurrentThread();
      v13 = v9 + 2;
      --CurrentThread->KernelApcDisable;
      v14 = (char *)KeAbPreAcquire((__int64)(v9 + 2), 0LL);
      v15 = v14;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v9 + 4, 0LL) )
        ExfAcquirePushLockExclusiveEx(v9 + 2, v14, (__int64)(v9 + 2));
      if ( v15 )
        v15[10] = 1;
      v16 = v9 + 3;
      for ( j = (_QWORD *)v9[3]; j != v16; j = (_QWORD *)*j )
      {
        if ( (v4 != 0) == *(_BYTE *)(j[3] + 98LL) >> 7 )
        {
          v8 = 0;
          break;
        }
      }
      v18 = (signed __int64 *)v9[4];
      if ( (_QWORD *)*v18 != v16 )
        __fastfail(3u);
      *(_QWORD *)v11 = v16;
      *(_QWORD *)(v11 + 8) = v18;
      *v18 = v11;
      v9[4] = v11;
      if ( v8 )
      {
        v23 = (struct _KEVENT *)(v4 ? v9[1] : *v9);
        if ( v23 )
          KeSetEvent(v23, 1, 0);
      }
      _m_prefetchw(v13);
      v19 = *v13;
      v20 = *v13 - 16;
      if ( (*v13 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v20 = 0LL;
      if ( (v19 & 2) != 0 || (v21 = *v13, v21 != _InterlockedCompareExchange64(v13, v20, v19)) )
        ExfReleasePushLock(v9 + 2);
      KeAbPostRelease((ULONG_PTR)(v9 + 2));
      KeLeaveCriticalRegionThread();
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v3;
}
