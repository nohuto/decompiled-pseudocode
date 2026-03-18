/*
 * XREFs of PfpScenCtxServiceThreadSet @ 0x140B4B428
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1408E9C54 (PfSetSuperfetchInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     PsGetThreadId @ 0x14044BF30 (PsGetThreadId.c)
 */

void __fastcall PfpScenCtxServiceThreadSet(unsigned __int64 *BugCheckParameter2, int a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  HANDLE ThreadId; // rax
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r14
  struct _KTHREAD *v7; // rax
  __int64 *v8; // rax
  __int64 *v9; // rbp

  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    ThreadId = PsGetThreadId(CurrentThread);
    v5 = *(_QWORD *)&CurrentThread[1].Header.Lock;
    v6 = (unsigned __int64)ThreadId;
  }
  else
  {
    v6 = 0LL;
    v5 = 0LL;
  }
  v7 = KeGetCurrentThread();
  --v7->KernelApcDisable;
  v8 = KeAbPreAcquire((__int64)BugCheckParameter2, 0LL);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
    ExfAcquirePushLockExclusiveEx(BugCheckParameter2, v8, (__int64)BugCheckParameter2);
  if ( v9 )
    *((_BYTE *)v9 + 10) = 1;
  BugCheckParameter2[9] = v6;
  BugCheckParameter2[10] = v5;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegion();
}
