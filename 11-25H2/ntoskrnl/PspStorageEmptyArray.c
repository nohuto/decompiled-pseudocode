/*
 * XREFs of PspStorageEmptyArray @ 0x140A53220
 * Callers:
 *     PspJobDeleteStorageArrays @ 0x140A5315C (PspJobDeleteStorageArrays.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PspStorageEmptyArray(unsigned __int64 *BugCheckParameter2, unsigned int a2)
{
  unsigned int v2; // edi
  __int64 v4; // rbp
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v6; // rax
  __int64 *v7; // rsi
  void *v8; // rsi

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
        ExfAcquirePushLockExclusiveEx(BugCheckParameter2, v6, (__int64)BugCheckParameter2);
      if ( v7 )
        *((_BYTE *)v7 + 10) = 1;
      v8 = (void *)(BugCheckParameter2[1] & 0xFFFFFFFFFFFFFFFEuLL);
      BugCheckParameter2[1] = 1LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
      KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
      KeLeaveCriticalRegion();
      if ( v8 )
      {
        ObfDereferenceObject(v8);
        ++v2;
      }
      BugCheckParameter2 += 2;
      --v4;
    }
    while ( v4 );
  }
  return v2;
}
