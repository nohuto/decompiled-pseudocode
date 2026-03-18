/*
 * XREFs of ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x140204704
 * Callers:
 *     KeConnectInterrupt @ 0x14020274C (KeConnectInterrupt.c)
 *     PpmCheckCustomRun @ 0x140202CF8 (PpmCheckCustomRun.c)
 *     PpmTryAcquireLock @ 0x140202E54 (PpmTryAcquireLock.c)
 *     PopFxActivateComponent @ 0x140203D5C (PopFxActivateComponent.c)
 *     PspUpdateContainerImpersonation @ 0x1403061BC (PspUpdateContainerImpersonation.c)
 *     PopFxIdleComponent @ 0x14034C3F8 (PopFxIdleComponent.c)
 *     MiReplenishSlabAllocator @ 0x1403769E8 (MiReplenishSlabAllocator.c)
 *     MiDemoteSlabEntries @ 0x1403BE9C4 (MiDemoteSlabEntries.c)
 *     KeDisconnectInterrupt @ 0x1404448BC (KeDisconnectInterrupt.c)
 * Callees:
 *     KiAcquireThreadLockRaiseToDpc @ 0x140204DB0 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiProcessDeferredReadyList @ 0x140285EA0 (KiProcessDeferredReadyList.c)
 *     KiComputeThreadPriority @ 0x1402E7250 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x1402E7840 (KiSetPriorityThread.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

void __fastcall KiClearSystemPriority(ULONG_PTR BugCheckParameter1, int *a2)
{
  int v4; // ecx
  __int64 v5; // r8
  char v6; // al
  char v7; // al
  unsigned int v8; // eax
  unsigned int v9; // eax
  char v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0LL;
  v10 = 0;
  KiAcquireThreadLockRaiseToDpc(BugCheckParameter1, &v10);
  if ( a2 )
  {
    v4 = *a2;
  }
  else
  {
    v4 = *(char *)(BugCheckParameter1 + 795);
    *(_BYTE *)(BugCheckParameter1 + 795) = 32;
  }
  v5 = v4;
  v6 = *(_BYTE *)(v4 + BugCheckParameter1 + 824);
  if ( !v6 )
    KeBugCheckEx(0x157u, BugCheckParameter1, v4, 2uLL, 0LL);
  v7 = v6 - 1;
  *(_BYTE *)(v4 + BugCheckParameter1 + 824) = v7;
  if ( !v7 )
  {
    v8 = *(_DWORD *)(BugCheckParameter1 + 856) ^ (1 << v4);
    *(_DWORD *)(BugCheckParameter1 + 856) = v8;
    if ( v8 < 1 << v4 && *(char *)(BugCheckParameter1 + 195) <= 31 )
    {
      v9 = KiComputeThreadPriority(BugCheckParameter1, 0LL);
      if ( (int)v9 < *(char *)(BugCheckParameter1 + 195) )
        KiSetPriorityThread(BugCheckParameter1, &v11, v9);
    }
  }
  *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  LOBYTE(v5) = v10;
  KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v11, v5);
}
