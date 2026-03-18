/*
 * XREFs of PnpProcessRebalance @ 0x1405A5E38
 * Callers:
 *     PnpDeviceActionWorker @ 0x14046E540 (PnpDeviceActionWorker.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseSemaphore @ 0x14027FE40 (KeReleaseSemaphore.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     PiCollapseRebalanceRequests @ 0x1405A5C00 (PiCollapseRebalanceRequests.c)
 *     PnpRebalance @ 0x140729028 (PnpRebalance.c)
 *     PipProcessDevNodeTree @ 0x1408355F8 (PipProcessDevNodeTree.c)
 */

__int64 __fastcall PnpProcessRebalance(__int64 a1)
{
  _QWORD *v2; // rcx
  _DWORD *v3; // rdi
  unsigned int v4; // ebx
  struct _KTHREAD *CurrentThread; // rax
  int v6; // ebx
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  v8 = 0LL;
  v2 = *(_QWORD **)(a1 + 16);
  if ( v2 )
    v3 = *(_DWORD **)(v2[39] + 40LL);
  else
    v3 = IopRootDeviceNode;
  v4 = *(_DWORD *)(a1 + 40);
  if ( (unsigned int)(v3[75] - 789) <= 1 )
  {
    ObfDereferenceObjectWithTag(v2, 0x746C6644u);
    return 3221225558LL;
  }
  else
  {
    if ( !*(_BYTE *)(a1 + 28) && (v4 & 1) != 0 && PiCollapseRebalanceRequests(a1) )
      v3 = IopRootDeviceNode;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
    v6 = PnpRebalance(v3, 0LL, 0LL, v4);
    KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
    KeLeaveCriticalRegion();
    if ( v6 >= 0 )
    {
      LODWORD(v8) = 3;
      BYTE4(v8) = PnPBootDriversInitialized;
      ObfReferenceObjectWithTag(*((PVOID *)IopRootDeviceNode + 4), 0x746C6644u);
      return (unsigned int)PipProcessDevNodeTree((_DWORD)IopRootDeviceNode, a1, (unsigned int)&v8, 0, 0, 1, 0);
    }
    return (unsigned int)v6;
  }
}
