/*
 * XREFs of PnpProcessRebalance @ 0x1405A6738
 * Callers:
 *     PnpDeviceActionWorker @ 0x140467910 (PnpDeviceActionWorker.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseSemaphore @ 0x1402F2490 (KeReleaseSemaphore.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     PiCollapseRebalanceRequests @ 0x1405A6500 (PiCollapseRebalanceRequests.c)
 *     PnpRebalance @ 0x1407331E8 (PnpRebalance.c)
 *     PipProcessDevNodeTree @ 0x1408B7FE0 (PipProcessDevNodeTree.c)
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
