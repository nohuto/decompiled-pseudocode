/*
 * XREFs of PfpScenCtxServiceThreadSet @ 0x140B5D408
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1408F573C (PfSetSuperfetchInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PsGetThreadId @ 0x140442630 (PsGetThreadId.c)
 */

void __fastcall PfpScenCtxServiceThreadSet(unsigned __int64 *BugCheckParameter2, int a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  HANDLE ThreadId; // rax
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r14
  struct _KTHREAD *v7; // rax
  char *v8; // rax
  char *v9; // rbp

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
  v8 = (char *)KeAbPreAcquire((__int64)BugCheckParameter2, 0LL);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
    ExfAcquirePushLockExclusiveEx(BugCheckParameter2, v8, (__int64)BugCheckParameter2);
  if ( v9 )
    v9[10] = 1;
  BugCheckParameter2[9] = v6;
  BugCheckParameter2[10] = v5;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegion();
}
