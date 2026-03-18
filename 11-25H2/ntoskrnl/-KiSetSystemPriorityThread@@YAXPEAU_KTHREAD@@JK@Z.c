/*
 * XREFs of ?KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z @ 0x140204644
 * Callers:
 *     KeConnectInterrupt @ 0x14020274C (KeConnectInterrupt.c)
 *     PpmTryAcquireLock @ 0x140202E54 (PpmTryAcquireLock.c)
 *     PopFxActivateComponent @ 0x140203D5C (PopFxActivateComponent.c)
 *     PpmAcquireLock @ 0x1402045E4 (PpmAcquireLock.c)
 *     PopFxIdleComponent @ 0x14034C3F8 (PopFxIdleComponent.c)
 *     MiReplenishSlabAllocator @ 0x1403769E8 (MiReplenishSlabAllocator.c)
 *     MiDemoteSlabEntries @ 0x1403BE9C4 (MiDemoteSlabEntries.c)
 *     KeDisconnectInterrupt @ 0x1404448BC (KeDisconnectInterrupt.c)
 * Callees:
 *     KiAcquireThreadLockRaiseToDpc @ 0x140204DB0 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiProcessDeferredReadyList @ 0x140285EA0 (KiProcessDeferredReadyList.c)
 *     KiSetPriorityThread @ 0x1402E7840 (KiSetPriorityThread.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

void __fastcall KiSetSystemPriorityThread(ULONG_PTR BugCheckParameter1, int a2, int a3)
{
  int v3; // edi
  __int64 v5; // r8
  char v6; // al
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  int v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = a3;
  v3 = 31;
  LOBYTE(v8) = 0;
  if ( a2 <= 31 )
    v3 = a2;
  v7 = 0LL;
  KiAcquireThreadLockRaiseToDpc(BugCheckParameter1, &v8);
  v6 = *(_BYTE *)(v3 + BugCheckParameter1 + 824);
  if ( v6 == -1 )
    KeBugCheckEx(0x157u, BugCheckParameter1, v3, 1uLL, 0LL);
  *(_BYTE *)(v3 + BugCheckParameter1 + 824) = v6 + 1;
  *(_DWORD *)(BugCheckParameter1 + 856) |= 1 << v3;
  if ( *(char *)(BugCheckParameter1 + 195) < v3 )
    KiSetPriorityThread(BugCheckParameter1, &v7, (unsigned int)v3);
  *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  LOBYTE(v5) = v8;
  KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v7, v5);
}
