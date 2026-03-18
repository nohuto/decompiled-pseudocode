/*
 * XREFs of KeCleanupImageTracepoints @ 0x140A90178
 * Callers:
 *     MiUnloadSystemImage @ 0x140A8AD84 (MiUnloadSystemImage.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall KeCleanupImageTracepoints(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // r14
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v7; // r15
  _QWORD *v8; // rax
  signed __int8 v9; // cf
  _QWORD *v10; // rdi
  void **v11; // rdi
  void **v12; // rbp
  void **v13; // rcx
  void **v14; // rsi
  void *v15; // rax
  signed __int32 v16[14]; // [rsp+0h] [rbp-38h] BYREF

  if ( qword_140FC6400 )
    guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  if ( KiTpHashTable )
  {
    v5 = *(_QWORD *)(a1 + 48);
    CurrentThread = KeGetCurrentThread();
    v7 = v5 + *(unsigned int *)(a1 + 64) - 1LL;
    --CurrentThread->KernelApcDisable;
    v8 = KeAbPreAcquire((__int64)&KiTpStateLock, 0LL);
    v9 = _interlockedbittestandset64((volatile signed __int32 *)&KiTpStateLock, 0LL);
    v10 = v8;
    if ( v9 )
      ExfAcquirePushLockExclusiveEx(&KiTpStateLock, (__int64)v8, (__int64)&KiTpStateLock);
    if ( v10 )
      *((_BYTE *)v10 + 10) = 1;
    v11 = (void **)((char *)KiTpHashTable + 8 * ((v5 >> 4) & 0x3FFF));
    v12 = (void **)((char *)KiTpHashTable + 8 * ((v7 >> 4) & 0x3FFF));
    while ( v11 <= v12 )
    {
      v13 = (void **)*v11;
      v14 = v11;
      while ( v13 )
      {
        v15 = v13[1];
        if ( (unsigned __int64)v15 < v5 || (unsigned __int64)v15 > v7 )
        {
          v14 = v13;
        }
        else
        {
          if ( *((_BYTE *)v13 + 48) )
            --KiTpEnabledCount;
          *v14 = *v13;
          _InterlockedOr(v16, 0);
          --KiTpRegisteredCount;
          while ( KiTpActiveTrapsCount )
            _mm_pause();
          ExFreePoolWithTag(v13, 0x70727446u);
        }
        v13 = (void **)*v14;
      }
      ++v11;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KiTpStateLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&KiTpStateLock);
    KeAbPostRelease((ULONG_PTR)&KiTpStateLock);
    KeLeaveCriticalRegion();
  }
}
