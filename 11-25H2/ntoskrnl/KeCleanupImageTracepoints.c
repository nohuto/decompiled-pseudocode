/*
 * XREFs of KeCleanupImageTracepoints @ 0x140A8B3E4
 * Callers:
 *     MiUnloadSystemImage @ 0x140A862D4 (MiUnloadSystemImage.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall KeCleanupImageTracepoints(__int64 a1)
{
  unsigned __int64 v2; // r14
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v4; // r15
  __int64 *v5; // rax
  signed __int8 v6; // cf
  __int64 *v7; // rdi
  void **v8; // rdi
  void **v9; // rbp
  void **v10; // rcx
  void **v11; // rsi
  void *v12; // rax
  signed __int32 v13[14]; // [rsp+0h] [rbp-38h] BYREF

  if ( qword_140FC6440 )
    guard_dispatch_icall_no_overrides(a1);
  if ( KiTpHashTable )
  {
    v2 = *(_QWORD *)(a1 + 48);
    CurrentThread = KeGetCurrentThread();
    v4 = v2 + *(unsigned int *)(a1 + 64) - 1LL;
    --CurrentThread->KernelApcDisable;
    v5 = KeAbPreAcquire((__int64)&KiTpStateLock, 0LL);
    v6 = _interlockedbittestandset64((volatile signed __int32 *)&KiTpStateLock, 0LL);
    v7 = v5;
    if ( v6 )
      ExfAcquirePushLockExclusiveEx(&KiTpStateLock, v5, (__int64)&KiTpStateLock);
    if ( v7 )
      *((_BYTE *)v7 + 10) = 1;
    v8 = (void **)((char *)KiTpHashTable + 8 * ((v2 >> 4) & 0x3FFF));
    v9 = (void **)((char *)KiTpHashTable + 8 * ((v4 >> 4) & 0x3FFF));
    while ( v8 <= v9 )
    {
      v10 = (void **)*v8;
      v11 = v8;
      while ( v10 )
      {
        v12 = v10[1];
        if ( (unsigned __int64)v12 < v2 || (unsigned __int64)v12 > v4 )
        {
          v11 = v10;
        }
        else
        {
          if ( *((_BYTE *)v10 + 48) )
            --KiTpEnabledCount;
          *v11 = *v10;
          _InterlockedOr(v13, 0);
          --KiTpRegisteredCount;
          while ( KiTpActiveTrapsCount )
            _mm_pause();
          ExFreePoolWithTag(v10, 0x70727446u);
        }
        v10 = (void **)*v11;
      }
      ++v8;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KiTpStateLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&KiTpStateLock);
    KeAbPostRelease((ULONG_PTR)&KiTpStateLock);
    KeLeaveCriticalRegion();
  }
}
