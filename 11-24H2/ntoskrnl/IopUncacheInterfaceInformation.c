/*
 * XREFs of IopUncacheInterfaceInformation @ 0x140A104B4
 * Callers:
 *     IopDestroyDeviceNode @ 0x140A0F43C (IopDestroyDeviceNode.c)
 *     PipProcessStartPhase1 @ 0x140A0FEF0 (PipProcessStartPhase1.c)
 *     IopRemoveDevice @ 0x140A10084 (IopRemoveDevice.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     KeReleaseSemaphore @ 0x1403D91C0 (KeReleaseSemaphore.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall IopUncacheInterfaceInformation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r15d
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v7; // rdi
  _QWORD *v8; // r14
  _QWORD *v9; // rbx
  _QWORD *v10; // rbx
  _QWORD *v11; // rsi
  _QWORD *v12; // rbp
  void *v13; // r12
  _QWORD *v14; // rsi
  void *v15; // rbp

  v4 = a2;
  if ( (_DWORD)a2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
  }
  if ( a1 )
    v7 = *(_QWORD **)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v7 = 0LL;
  v8 = v7 + 61;
  v9 = (_QWORD *)v7[61];
  while ( v9 != v8 )
  {
    v14 = (_QWORD *)v9[3];
    v15 = v9;
    if ( v14 )
    {
      guard_dispatch_icall_no_overrides(v14[1], a2, a3, a4);
      ExFreePoolWithTag(v14, 0);
    }
    v9 = (_QWORD *)*v9;
    ExFreePoolWithTag(v15, 0);
  }
  v10 = v7 + 63;
  v11 = (_QWORD *)v7[63];
  while ( v11 != v10 )
  {
    v12 = (_QWORD *)v11[3];
    v13 = v11;
    if ( v12 )
    {
      guard_dispatch_icall_no_overrides(v12[1], a2, a3, a4);
      ExFreePoolWithTag(v12, 0);
    }
    v11 = (_QWORD *)*v11;
    ExFreePoolWithTag(v13, 0);
  }
  v7[62] = v7 + 61;
  *v8 = v8;
  v7[64] = v7 + 63;
  *v10 = v10;
  v7[65] = 0LL;
  if ( v4 )
  {
    KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
    KeLeaveCriticalRegion();
  }
}
