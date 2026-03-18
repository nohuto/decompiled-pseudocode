/*
 * XREFs of PspStorageEmptyArrayNonReadonly @ 0x140498A80
 * Callers:
 *     PspCompleteHardDereferenceSiloDeferred @ 0x140AA5740 (PspCompleteHardDereferenceSiloDeferred.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 __fastcall PspStorageEmptyArrayNonReadonly(unsigned __int64 *BugCheckParameter2, unsigned int a2)
{
  unsigned int v2; // esi
  __int64 v4; // rbp
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
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
      v6 = KeAbPreAcquire((__int64)BugCheckParameter2, 0LL);
      v7 = v6;
      if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
        ExfAcquirePushLockExclusiveEx(BugCheckParameter2, (__int64)v6, (__int64)BugCheckParameter2);
      if ( v7 )
        *((_BYTE *)v7 + 10) = 1;
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
