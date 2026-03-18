/*
 * XREFs of PfpScenCtxQueryScenarioInformation @ 0x140B6D840
 * Callers:
 *     PfpQueryScenarioInformation @ 0x140ABC5D8 (PfpQueryScenarioInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

void __fastcall PfpScenCtxQueryScenarioInformation(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rsi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire(BugCheckParameter2, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, (__int64)v5, BugCheckParameter2);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(BugCheckParameter2 + 48);
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(BugCheckParameter2 + 52);
  if ( *(_DWORD *)(BugCheckParameter2 + 48) == 3 )
    *(_QWORD *)(a2 + 24) = *(_QWORD *)(BugCheckParameter2 + 56);
  KeResetEvent(*(PRKEVENT *)(BugCheckParameter2 + 64));
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  KeAbPostRelease(BugCheckParameter2);
  KeLeaveCriticalRegion();
}
