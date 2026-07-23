/*
 * XREFs of KeCleanupImageTracepoints @ 0x140A8C874
 * Callers:
 *     MiUnloadSystemImage @ 0x140A870C4 (MiUnloadSystemImage.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall KeCleanupImageTracepoints(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r14
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v5; // r15
  char *v6; // rax
  signed __int8 v7; // cf
  char *v8; // rdi
  void **v9; // rdi
  void **v10; // rbp
  void **v11; // rcx
  void **v12; // rsi
  void *v13; // rax
  signed __int32 v14[14]; // [rsp+0h] [rbp-38h] BYREF

  if ( qword_140FC7480 )
    guard_dispatch_icall_no_overrides(a1, a2);
  if ( KiTpHashTable )
  {
    v3 = *(_QWORD *)(a1 + 48);
    CurrentThread = KeGetCurrentThread();
    v5 = v3 + *(unsigned int *)(a1 + 64) - 1LL;
    --CurrentThread->KernelApcDisable;
    v6 = (char *)KeAbPreAcquire((__int64)&KiTpStateLock, 0LL);
    v7 = _interlockedbittestandset64((volatile signed __int32 *)&KiTpStateLock, 0LL);
    v8 = v6;
    if ( v7 )
      ExfAcquirePushLockExclusiveEx(&KiTpStateLock, v6, (__int64)&KiTpStateLock);
    if ( v8 )
      v8[10] = 1;
    v9 = (void **)((char *)KiTpHashTable + 8 * ((v3 >> 4) & 0x3FFF));
    v10 = (void **)((char *)KiTpHashTable + 8 * ((v5 >> 4) & 0x3FFF));
    while ( v9 <= v10 )
    {
      v11 = (void **)*v9;
      v12 = v9;
      while ( v11 )
      {
        v13 = v11[1];
        if ( (unsigned __int64)v13 < v3 || (unsigned __int64)v13 > v5 )
        {
          v12 = v11;
        }
        else
        {
          if ( *((_BYTE *)v11 + 48) )
            --KiTpEnabledCount;
          *v12 = *v11;
          _InterlockedOr(v14, 0);
          --KiTpRegisteredCount;
          while ( KiTpActiveTrapsCount )
            _mm_pause();
          ExFreePoolWithTag(v11, 0x70727446u);
        }
        v11 = (void **)*v12;
      }
      ++v9;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KiTpStateLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&KiTpStateLock);
    KeAbPostRelease((ULONG_PTR)&KiTpStateLock);
    KeLeaveCriticalRegion();
  }
}
