/*
 * XREFs of PfpScenCtxPrefetchAbortSet @ 0x140B5CFE0
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1409353B4 (PfpPrefetchRequestPerform.c)
 *     PfpScenCtxScenarioSet @ 0x140B6EDB0 (PfpScenCtxScenarioSet.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

__int64 __fastcall PfpScenCtxPrefetchAbortSet(ULONG_PTR BugCheckParameter2, int a2, __int64 a3, int a4, int a5)
{
  struct _KTHREAD *CurrentThread; // rax
  char *v10; // rax
  char *v11; // rsi
  unsigned int v12; // esi
  bool v13; // zf

  if ( !a5 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v10 = (char *)KeAbPreAcquire(BugCheckParameter2, 0LL);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v10, BugCheckParameter2);
    if ( v11 )
      v11[10] = 1;
  }
  if ( *(_DWORD *)(BugCheckParameter2 + 48) != a2 )
  {
    v12 = -1073741735;
    goto LABEL_15;
  }
  v13 = a4 == 0;
  if ( !a4 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 8) & 0xC) == 8 )
    {
      v12 = -1073741431;
      goto LABEL_15;
    }
    v13 = 1;
  }
  if ( !v13 )
    a3 = 0LL;
  v12 = 0;
  *(_QWORD *)(BugCheckParameter2 + 40) = a3;
LABEL_15:
  if ( !a5 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegion();
  }
  return v12;
}
