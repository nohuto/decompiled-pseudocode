/*
 * XREFs of ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x1402AE6EC
 * Callers:
 *     MiReplenishSlabAllocator @ 0x14021E544 (MiReplenishSlabAllocator.c)
 *     MiDemoteSlabEntries @ 0x1402619FC (MiDemoteSlabEntries.c)
 *     PopFxActivateComponent @ 0x1402AE4EC (PopFxActivateComponent.c)
 *     KeConnectInterrupt @ 0x1402B31A0 (KeConnectInterrupt.c)
 *     KeDisconnectInterrupt @ 0x140373B88 (KeDisconnectInterrupt.c)
 *     PopFxIdleComponent @ 0x1403A8D58 (PopFxIdleComponent.c)
 *     PspUpdateContainerImpersonation @ 0x1403B4C5C (PspUpdateContainerImpersonation.c)
 *     PpmTryAcquireLock @ 0x14044BFCC (PpmTryAcquireLock.c)
 *     PpmCheckCustomRun @ 0x14044C05C (PpmCheckCustomRun.c)
 * Callees:
 *     KiComputeThreadPriority @ 0x140280090 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x1402801CC (KiSetPriorityThread.c)
 *     KiProcessDeferredReadyList @ 0x1402C5F60 (KiProcessDeferredReadyList.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x1402D1150 (KiAcquireThreadLockRaiseToDpc.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __fastcall KiClearSystemPriority(_KTHREAD *BugCheckParameter1, int *a2)
{
  int WobPriority; // ecx
  unsigned __int8 v5; // al
  unsigned __int8 v6; // al
  unsigned int v7; // eax
  unsigned int v8; // eax
  __int64 v9; // r9
  char v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0LL;
  v10 = 0;
  KiAcquireThreadLockRaiseToDpc(BugCheckParameter1, &v10);
  if ( a2 )
  {
    WobPriority = *a2;
  }
  else
  {
    WobPriority = BugCheckParameter1->WobPriority;
    BugCheckParameter1->WobPriority = 32;
  }
  v5 = BugCheckParameter1->PriorityFloorCounts[WobPriority];
  if ( !v5 )
    KeBugCheckEx(0x157u, (ULONG_PTR)BugCheckParameter1, WobPriority, 2uLL, 0LL);
  v6 = v5 - 1;
  BugCheckParameter1->PriorityFloorCounts[WobPriority] = v6;
  if ( !v6 )
  {
    v7 = BugCheckParameter1->PriorityFloorSummary ^ (1 << WobPriority);
    BugCheckParameter1->PriorityFloorSummary = v7;
    if ( v7 < 1 << WobPriority && BugCheckParameter1->Priority <= 31 )
    {
      v8 = KiComputeThreadPriority((__int64)BugCheckParameter1, 0, 0);
      if ( (int)v8 < BugCheckParameter1->Priority )
        KiSetPriorityThread(BugCheckParameter1, (__int64)&v11, v8, v9);
    }
  }
  BugCheckParameter1->ThreadLock = 0LL;
  KiProcessDeferredReadyList(KeGetCurrentPrcb());
}
