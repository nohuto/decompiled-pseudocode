/*
 * XREFs of PfpScenCtxPrefetchAbortSet @ 0x140B5AF70
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x140951A08 (PfpPrefetchRequestPerform.c)
 *     PfpScenCtxScenarioSet @ 0x140B6D510 (PfpScenCtxScenarioSet.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 __fastcall PfpScenCtxPrefetchAbortSet(ULONG_PTR BugCheckParameter2, int a2, __int64 a3, int a4, int a5)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rsi
  unsigned int v12; // esi
  bool v13; // zf

  if ( !a5 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v10 = KeAbPreAcquire(BugCheckParameter2, 0LL);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, (__int64)v10, BugCheckParameter2);
    if ( v11 )
      *((_BYTE *)v11 + 10) = 1;
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
