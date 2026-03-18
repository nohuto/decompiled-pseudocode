/*
 * XREFs of IopLegacyResourceAllocation @ 0x140830B88
 * Callers:
 *     IoAssignResources @ 0x140710550 (IoAssignResources.c)
 *     IoReportResourceUsageInternal @ 0x140714E18 (IoReportResourceUsageInternal.c)
 *     IopDestroyDeviceNode @ 0x140832628 (IopDestroyDeviceNode.c)
 *     IopReleaseDeviceResources @ 0x1409A0C90 (IopReleaseDeviceResources.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeReleaseSemaphore @ 0x14027FE40 (KeReleaseSemaphore.c)
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     IopSetLegacyResourcesFlag @ 0x1405A302C (IopSetLegacyResourcesFlag.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     IopReleaseResources @ 0x1407183C4 (IopReleaseResources.c)
 *     IopCombineLegacyResources @ 0x140718FF4 (IopCombineLegacyResources.c)
 *     IopRemoveLegacyDeviceNode @ 0x1407191B4 (IopRemoveLegacyDeviceNode.c)
 *     PnpAllocateResources @ 0x1408310F4 (PnpAllocateResources.c)
 *     PnpDetermineResourceListSize @ 0x140832EFC (PnpDetermineResourceListSize.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140A886D8 (IopWriteAllocatedResourcesToRegistry.c)
 *     IopFindLegacyDeviceNode @ 0x140AA9F88 (IopFindLegacyDeviceNode.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopLegacyResourceAllocation(int a1, __int64 a2, __int64 a3, __int64 a4, const void **a5)
{
  struct _KTHREAD *CurrentThread; // rax
  int v6; // r12d
  __int64 v9; // r13
  int LegacyDeviceNode; // r14d
  _QWORD *v11; // rbx
  __int64 v12; // r8
  PVOID v13; // rcx
  size_t v14; // r13
  void *Pool2; // r12
  __int64 v16; // rsi
  _DWORD *v17; // rax
  void *v18; // rbx
  unsigned int v19; // eax
  _QWORD *v21; // [rsp+30h] [rbp-50h] BYREF
  __int64 v22; // [rsp+38h] [rbp-48h] BYREF
  __int64 v23; // [rsp+40h] [rbp-40h] BYREF
  int v24; // [rsp+48h] [rbp-38h]
  int v25; // [rsp+4Ch] [rbp-34h]
  __int64 v26; // [rsp+58h] [rbp-28h]
  PVOID P; // [rsp+68h] [rbp-18h]
  __int64 v28; // [rsp+70h] [rbp-10h]
  int v29; // [rsp+78h] [rbp-8h]

  CurrentThread = KeGetCurrentThread();
  v6 = a1;
  v22 = 0LL;
  v21 = 0LL;
  --CurrentThread->KernelApcDisable;
  v9 = a2;
  KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
  LegacyDeviceNode = IopFindLegacyDeviceNode(v9, a3, &v21, &v22);
  if ( LegacyDeviceNode < 0 )
    goto LABEL_29;
  v11 = v21;
  if ( v21[2] )
  {
    if ( !a4 )
    {
LABEL_10:
      IopReleaseResources((__int64)v11);
      goto LABEL_11;
    }
  }
  else if ( a4 )
  {
    if ( *(_DWORD *)(a4 + 4) == -1 )
      *(_DWORD *)(a4 + 4) = 1;
    v11[2] = IopRootDeviceNode;
  }
  if ( v11[52] || v11[68] )
    goto LABEL_10;
LABEL_11:
  if ( a4 )
  {
    memset_0(&v23, 0, 0x40uLL);
    v23 = v22;
    LOBYTE(v12) = 1;
    v26 = a4;
    v25 = v6;
    v24 = 128;
    PnpAllocateResources(1LL, &v23, v12, 0LL);
    LegacyDeviceNode = v29;
    if ( v29 >= 0 )
    {
      v13 = P;
      if ( *a5 )
        v13 = (PVOID)*a5;
      v14 = (unsigned int)PnpDetermineResourceListSize(v13);
      Pool2 = (void *)ExAllocatePool2(0x100uLL);
      if ( Pool2 )
      {
        if ( *a5 )
          ExFreePoolWithTag(P, 0);
        else
          *a5 = P;
        ExAcquireFastMutex(&PiResourceListLock);
        v11[52] = Pool2;
        memmove(Pool2, *a5, v14);
        v11[53] = v28;
        KeReleaseGuardedMutex(&PiResourceListLock);
        v16 = v11[66];
        v6 = a1;
        v9 = a2;
        goto LABEL_23;
      }
      ExAcquireFastMutex(&PiResourceListLock);
      v11[52] = P;
      v11[53] = v28;
      KeReleaseGuardedMutex(&PiResourceListLock);
      IopReleaseResources((__int64)v11);
      LegacyDeviceNode = -1073741670;
    }
    IopRemoveLegacyDeviceNode(a3, v11);
    goto LABEL_29;
  }
  v16 = v11[66];
  IopRemoveLegacyDeviceNode(a3, v11);
LABEL_23:
  if ( v16 )
  {
    v17 = IopCombineLegacyResources(v16);
    v18 = v17;
    if ( v17 )
    {
      v19 = PnpDetermineResourceListSize(v17);
      IopWriteAllocatedResourcesToRegistry(v16, v18, v19);
      ExFreePoolWithTag(v18, 0);
    }
  }
  if ( v6 != 3 && a4 )
    IopSetLegacyResourcesFlag(v9);
LABEL_29:
  KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
  KeLeaveCriticalRegion();
  return (unsigned int)LegacyDeviceNode;
}
