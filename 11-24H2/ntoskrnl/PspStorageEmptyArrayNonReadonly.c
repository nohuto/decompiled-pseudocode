/*
 * XREFs of PspStorageEmptyArrayNonReadonly @ 0x140493408
 * Callers:
 *     PspCompleteHardDereferenceSiloDeferred @ 0x140AA07B0 (PspCompleteHardDereferenceSiloDeferred.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

__int64 __fastcall PspStorageEmptyArrayNonReadonly(unsigned __int64 *BugCheckParameter2, unsigned int a2)
{
  unsigned int v2; // esi
  __int64 v4; // rbp
  struct _KTHREAD *CurrentThread; // rax
  char *v6; // rax
  char *v7; // rdi
  unsigned __int64 v8; // rdi
  void *v9; // rdi

  v2 = 0;
  if ( a2 )
  {
    v4 = a2;
    do
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v6 = (char *)KeAbPreAcquire((__int64)BugCheckParameter2, 0LL);
      v7 = v6;
      if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
        ExfAcquirePushLockExclusiveEx(BugCheckParameter2, v6, (__int64)BugCheckParameter2);
      if ( v7 )
        v7[10] = 1;
      v8 = BugCheckParameter2[1];
      if ( (v8 & 1) != 0 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
        KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
        KeLeaveCriticalRegion();
      }
      else
      {
        BugCheckParameter2[1] = 1LL;
        v9 = (void *)(v8 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
        KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
        KeLeaveCriticalRegion();
        if ( v9 )
        {
          ObfDereferenceObjectWithTag(v9, 0x746C6644u);
          ++v2;
        }
      }
      BugCheckParameter2 += 2;
      --v4;
    }
    while ( v4 );
  }
  return v2;
}
