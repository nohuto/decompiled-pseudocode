/*
 * XREFs of ?KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z @ 0x1403B6558
 * Callers:
 *     MiDemoteSlabEntries @ 0x1402CF530 (MiDemoteSlabEntries.c)
 *     PopFxIdleComponent @ 0x1403B4888 (PopFxIdleComponent.c)
 *     PopFxActivateComponent @ 0x1403B61EC (PopFxActivateComponent.c)
 *     PpmAcquireLock @ 0x1403B64F8 (PpmAcquireLock.c)
 *     PpmTryAcquireLock @ 0x1403B6E5C (PpmTryAcquireLock.c)
 *     KeConnectInterrupt @ 0x1403B6EEC (KeConnectInterrupt.c)
 *     KeDisconnectInterrupt @ 0x1403B8A3C (KeDisconnectInterrupt.c)
 *     MiReplenishSlabAllocator @ 0x140413B18 (MiReplenishSlabAllocator.c)
 * Callees:
 *     KiSetPriorityThread @ 0x14024FBBC (KiSetPriorityThread.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x1402A1A20 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiProcessDeferredReadyList @ 0x14031D3D0 (KiProcessDeferredReadyList.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

void __fastcall KiSetSystemPriorityThread(_KTHREAD *BugCheckParameter1, int a2, int a3)
{
  int v3; // edi
  __int64 v5; // r9
  unsigned __int8 v6; // al
  _QWORD *v7; // [rsp+40h] [rbp+8h] BYREF
  int v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = a3;
  v3 = 31;
  LOBYTE(v8) = 0;
  if ( a2 <= 31 )
    v3 = a2;
  v7 = 0LL;
  KiAcquireThreadLockRaiseToDpc((__int64)BugCheckParameter1, (unsigned __int8 *)&v8);
  v6 = BugCheckParameter1->PriorityFloorCounts[v3];
  if ( v6 == 0xFF )
    KeBugCheckEx(0x157u, (ULONG_PTR)BugCheckParameter1, v3, 1uLL, 0LL);
  BugCheckParameter1->PriorityFloorCounts[v3] = v6 + 1;
  BugCheckParameter1->PriorityFloorSummary |= 1 << v3;
  if ( BugCheckParameter1->Priority < v3 )
    KiSetPriorityThread(BugCheckParameter1, (__int64)&v7, (unsigned int)v3, v5);
  BugCheckParameter1->ThreadLock = 0LL;
  KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v7, v8);
}
