/*
 * XREFs of PfpScenCtxScenarioSet @ 0x140B6EDB0
 * Callers:
 *     PfpProcessScenarioPhase @ 0x1408F77E8 (PfpProcessScenarioPhase.c)
 *     PfPowerActionNotify @ 0x140B6CE28 (PfPowerActionNotify.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ObDereferenceObjectDeferDelete @ 0x1403B48A0 (ObDereferenceObjectDeferDelete.c)
 *     PfpScenCtxWaiterTimedOut @ 0x1405C9C70 (PfpScenCtxWaiterTimedOut.c)
 *     PfpServiceMainThreadBoost @ 0x1405C9CA0 (PfpServiceMainThreadBoost.c)
 *     PfpServiceMainThreadBoostPrep @ 0x140AADF1C (PfpServiceMainThreadBoostPrep.c)
 *     PfpScenCtxPrefetchAbortSet @ 0x140B5CFE0 (PfpScenCtxPrefetchAbortSet.c)
 *     PfpScenCtxPrefetchStateSet @ 0x140B5D0D8 (PfpScenCtxPrefetchStateSet.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PfpScenCtxScenarioSet(ULONG_PTR BugCheckParameter2, int a2, int a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  char *v9; // rax
  char *v10; // r14
  KPRIORITY v11; // ebp
  int v12; // edx
  PVOID Object[5]; // [rsp+30h] [rbp-28h] BYREF

  *(_OWORD *)Object = 0LL;
  if ( ((a3 - 1) & 0xFFFFFFFA) == 0 && a3 != 6 )
    PfpServiceMainThreadBoostPrep(BugCheckParameter2, (PETHREAD *)Object);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = (char *)KeAbPreAcquire(BugCheckParameter2, 0LL);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v9, BugCheckParameter2);
  v11 = 1;
  if ( v10 )
    v10[10] = 1;
  if ( a3 || *(_DWORD *)(BugCheckParameter2 + 48) == a2 )
  {
    v12 = *(_DWORD *)(BugCheckParameter2 + 48);
    if ( v12 )
    {
      PfpScenCtxPrefetchStateSet(BugCheckParameter2, v12, 0, 1);
      PfpScenCtxWaiterTimedOut(BugCheckParameter2);
      PfpScenCtxPrefetchAbortSet(BugCheckParameter2, *(_DWORD *)(BugCheckParameter2 + 48), 0LL, 1, 1);
      *(_DWORD *)(BugCheckParameter2 + 8) &= 0xFFFFFFF3;
    }
    if ( *(_DWORD *)(BugCheckParameter2 + 48) || a3 )
    {
      *(_DWORD *)(BugCheckParameter2 + 48) = a3;
      if ( a3 )
      {
        ++*(_DWORD *)(BugCheckParameter2 + 52);
        if ( a3 == 3 )
          *(_QWORD *)(BugCheckParameter2 + 56) = a4;
        if ( Object[0] )
        {
          PfpServiceMainThreadBoost(BugCheckParameter2, (ULONG_PTR *)Object);
          v11 = 0;
        }
        else
        {
          v11 = 4;
        }
      }
      KeSetEvent(*(PRKEVENT *)(BugCheckParameter2 + 64), v11, 0);
    }
    else
    {
      *(_DWORD *)(BugCheckParameter2 + 48) = 0;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  KeAbPostRelease(BugCheckParameter2);
  KeLeaveCriticalRegion();
  if ( Object[0] )
    ObDereferenceObjectDeferDelete(Object[0]);
  if ( Object[1] )
    ExFreePoolWithTag(Object[1], 0);
}
