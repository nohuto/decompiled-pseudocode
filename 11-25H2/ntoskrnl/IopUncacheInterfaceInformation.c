/*
 * XREFs of IopUncacheInterfaceInformation @ 0x1409A1274
 * Callers:
 *     IopDestroyDeviceNode @ 0x140832628 (IopDestroyDeviceNode.c)
 *     PipProcessStartPhase1 @ 0x1409A0E70 (PipProcessStartPhase1.c)
 *     IopRemoveDevice @ 0x1409A1004 (IopRemoveDevice.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeReleaseSemaphore @ 0x14027FE40 (KeReleaseSemaphore.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall IopUncacheInterfaceInformation(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v5; // rdi
  _QWORD *v6; // r14
  _QWORD *v7; // rbx
  _QWORD *v8; // rbx
  _QWORD *v9; // rsi
  _QWORD *v10; // rbp
  void *v11; // r12
  _QWORD *v12; // rsi
  void *v13; // rbp

  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
  }
  if ( a1 )
    v5 = *(_QWORD **)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v5 = 0LL;
  v6 = v5 + 61;
  v7 = (_QWORD *)v5[61];
  while ( v7 != v6 )
  {
    v12 = (_QWORD *)v7[3];
    v13 = v7;
    if ( v12 )
    {
      guard_dispatch_icall_no_overrides(v12[1]);
      ExFreePoolWithTag(v12, 0);
    }
    v7 = (_QWORD *)*v7;
    ExFreePoolWithTag(v13, 0);
  }
  v8 = v5 + 63;
  v9 = (_QWORD *)v5[63];
  while ( v9 != v8 )
  {
    v10 = (_QWORD *)v9[3];
    v11 = v9;
    if ( v10 )
    {
      guard_dispatch_icall_no_overrides(v10[1]);
      ExFreePoolWithTag(v10, 0);
    }
    v9 = (_QWORD *)*v9;
    ExFreePoolWithTag(v11, 0);
  }
  v5[62] = v5 + 61;
  *v6 = v6;
  v5[64] = v5 + 63;
  *v8 = v8;
  v5[65] = 0LL;
  if ( a2 )
  {
    KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
    KeLeaveCriticalRegion();
  }
}
