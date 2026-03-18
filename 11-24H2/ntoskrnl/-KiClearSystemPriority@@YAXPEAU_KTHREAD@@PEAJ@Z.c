/*
 * XREFs of ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x1403B6408
 * Callers:
 *     PspUpdateContainerImpersonation @ 0x1402A11C4 (PspUpdateContainerImpersonation.c)
 *     MiDemoteSlabEntries @ 0x1402CF530 (MiDemoteSlabEntries.c)
 *     PpmCheckCustomRun @ 0x1403B45DC (PpmCheckCustomRun.c)
 *     PopFxIdleComponent @ 0x1403B4888 (PopFxIdleComponent.c)
 *     PopFxActivateComponent @ 0x1403B61EC (PopFxActivateComponent.c)
 *     PpmTryAcquireLock @ 0x1403B6E5C (PpmTryAcquireLock.c)
 *     KeConnectInterrupt @ 0x1403B6EEC (KeConnectInterrupt.c)
 *     KeDisconnectInterrupt @ 0x1403B8A3C (KeDisconnectInterrupt.c)
 *     MiReplenishSlabAllocator @ 0x140413B18 (MiReplenishSlabAllocator.c)
 * Callees:
 *     KiComputeThreadPriority @ 0x14024FA80 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x14024FBBC (KiSetPriorityThread.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x1402A1A20 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiProcessDeferredReadyList @ 0x14031D3D0 (KiProcessDeferredReadyList.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

void __fastcall KiClearSystemPriority(_KTHREAD *BugCheckParameter1, int *a2)
{
  int WobPriority; // ecx
  unsigned __int8 v5; // al
  unsigned __int8 v6; // al
  unsigned int v7; // eax
  unsigned int v8; // eax
  __int64 v9; // r9
  unsigned __int8 v10; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0LL;
  v10 = 0;
  KiAcquireThreadLockRaiseToDpc((__int64)BugCheckParameter1, &v10);
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
  KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v11, v10);
}
