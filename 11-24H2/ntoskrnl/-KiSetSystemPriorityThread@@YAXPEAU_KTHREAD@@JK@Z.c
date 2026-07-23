/*
 * XREFs of ?KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z @ 0x1402AE83C
 * Callers:
 *     MiReplenishSlabAllocator @ 0x14021E544 (MiReplenishSlabAllocator.c)
 *     MiDemoteSlabEntries @ 0x1402619FC (MiDemoteSlabEntries.c)
 *     PopFxActivateComponent @ 0x1402AE4EC (PopFxActivateComponent.c)
 *     PpmAcquireLock @ 0x1402AE7DC (PpmAcquireLock.c)
 *     KeConnectInterrupt @ 0x1402B31A0 (KeConnectInterrupt.c)
 *     KeDisconnectInterrupt @ 0x140373B88 (KeDisconnectInterrupt.c)
 *     PopFxIdleComponent @ 0x1403A8D58 (PopFxIdleComponent.c)
 *     PpmTryAcquireLock @ 0x14044BFCC (PpmTryAcquireLock.c)
 * Callees:
 *     KiSetPriorityThread @ 0x1402801CC (KiSetPriorityThread.c)
 *     KiProcessDeferredReadyList @ 0x1402C5F60 (KiProcessDeferredReadyList.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x1402D1150 (KiAcquireThreadLockRaiseToDpc.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __fastcall KiSetSystemPriorityThread(_KTHREAD *BugCheckParameter1, int a2, int a3)
{
  int v3; // edi
  __int64 v5; // r9
  unsigned __int8 v6; // al
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  int v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = a3;
  v3 = 31;
  LOBYTE(v8) = 0;
  if ( a2 <= 31 )
    v3 = a2;
  v7 = 0LL;
  KiAcquireThreadLockRaiseToDpc(BugCheckParameter1, &v8);
  v6 = BugCheckParameter1->PriorityFloorCounts[v3];
  if ( v6 == 0xFF )
    KeBugCheckEx(0x157u, (ULONG_PTR)BugCheckParameter1, v3, 1uLL, 0LL);
  BugCheckParameter1->PriorityFloorCounts[v3] = v6 + 1;
  BugCheckParameter1->PriorityFloorSummary |= 1 << v3;
  if ( BugCheckParameter1->Priority < v3 )
    KiSetPriorityThread(BugCheckParameter1, (__int64)&v7, (unsigned int)v3, v5);
  BugCheckParameter1->ThreadLock = 0LL;
  KiProcessDeferredReadyList(KeGetCurrentPrcb());
}
