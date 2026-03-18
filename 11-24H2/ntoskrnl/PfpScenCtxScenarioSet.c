/*
 * XREFs of PfpScenCtxScenarioSet @ 0x140B6D510
 * Callers:
 *     PfpProcessScenarioPhase @ 0x14093289C (PfpProcessScenarioPhase.c)
 *     PfPowerActionNotify @ 0x140B6B9F8 (PfPowerActionNotify.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ObDereferenceObjectDeferDelete @ 0x1403C5CE0 (ObDereferenceObjectDeferDelete.c)
 *     PfpScenCtxWaiterTimedOut @ 0x1405CC500 (PfpScenCtxWaiterTimedOut.c)
 *     PfpServiceMainThreadBoost @ 0x1405CC530 (PfpServiceMainThreadBoost.c)
 *     PfpServiceMainThreadBoostPrep @ 0x140AB2FAC (PfpServiceMainThreadBoostPrep.c)
 *     PfpScenCtxPrefetchAbortSet @ 0x140B5AF70 (PfpScenCtxPrefetchAbortSet.c)
 *     PfpScenCtxPrefetchStateSet @ 0x140B5B068 (PfpScenCtxPrefetchStateSet.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PfpScenCtxScenarioSet(ULONG_PTR BugCheckParameter2, int a2, int a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // r14
  KPRIORITY v11; // ebp
  int v12; // edx
  PVOID Object[5]; // [rsp+30h] [rbp-28h] BYREF

  *(_OWORD *)Object = 0LL;
  if ( ((a3 - 1) & 0xFFFFFFFA) == 0 && a3 != 6 )
    PfpServiceMainThreadBoostPrep(BugCheckParameter2, (PETHREAD *)Object);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = KeAbPreAcquire(BugCheckParameter2, 0LL);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, (__int64)v9, BugCheckParameter2);
  v11 = 1;
  if ( v10 )
    *((_BYTE *)v10 + 10) = 1;
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
