/*
 * XREFs of IopLegacyResourceAllocation @ 0x1409BE034
 * Callers:
 *     IoAssignResources @ 0x14071A1E0 (IoAssignResources.c)
 *     IoReportResourceUsageInternal @ 0x14071EAA8 (IoReportResourceUsageInternal.c)
 *     IopDestroyDeviceNode @ 0x1409BD84C (IopDestroyDeviceNode.c)
 *     IopReleaseDeviceResources @ 0x1409BF108 (IopReleaseDeviceResources.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     KeReleaseSemaphore @ 0x1402F2490 (KeReleaseSemaphore.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     IopSetLegacyResourcesFlag @ 0x1405A377C (IopSetLegacyResourcesFlag.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     IopReleaseResources @ 0x140722054 (IopReleaseResources.c)
 *     IopCombineLegacyResources @ 0x140722B00 (IopCombineLegacyResources.c)
 *     IopRemoveLegacyDeviceNode @ 0x140722CC0 (IopRemoveLegacyDeviceNode.c)
 *     PnpAllocateResources @ 0x140978AE0 (PnpAllocateResources.c)
 *     PnpDetermineResourceListSize @ 0x140979290 (PnpDetermineResourceListSize.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140A89C08 (IopWriteAllocatedResourcesToRegistry.c)
 *     IopFindLegacyDeviceNode @ 0x140AAA1C8 (IopFindLegacyDeviceNode.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopLegacyResourceAllocation(int a1, __int64 a2, __int64 a3, __int64 a4, const void **a5)
{
  struct _KTHREAD *CurrentThread; // rax
  int v6; // r12d
  __int64 v9; // r13
  int LegacyDeviceNode; // r14d
  _QWORD *v11; // rbx
  _DWORD *v12; // rcx
  ULONG_PTR v13; // r13
  void *Pool2; // r12
  __int64 v15; // rsi
  _DWORD *v16; // rax
  void *v17; // rbx
  unsigned int v18; // eax
  _QWORD *v20; // [rsp+30h] [rbp-50h] BYREF
  __int64 v21; // [rsp+38h] [rbp-48h] BYREF
  __int64 v22; // [rsp+40h] [rbp-40h] BYREF
  int v23; // [rsp+48h] [rbp-38h]
  int v24; // [rsp+4Ch] [rbp-34h]
  __int64 v25; // [rsp+58h] [rbp-28h]
  PVOID P; // [rsp+68h] [rbp-18h]
  __int64 v27; // [rsp+70h] [rbp-10h]
  int v28; // [rsp+78h] [rbp-8h]

  CurrentThread = KeGetCurrentThread();
  v6 = a1;
  v21 = 0LL;
  v20 = 0LL;
  --CurrentThread->KernelApcDisable;
  v9 = a2;
  KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
  LegacyDeviceNode = IopFindLegacyDeviceNode(v9, a3, &v20, &v21);
  if ( LegacyDeviceNode < 0 )
    goto LABEL_29;
  v11 = v20;
  if ( v20[2] )
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
    memset_0(&v22, 0, 0x40uLL);
    v22 = v21;
    v25 = a4;
    v24 = v6;
    v23 = 128;
    PnpAllocateResources(1u, &v22, 1, 0LL);
    LegacyDeviceNode = v28;
    if ( v28 >= 0 )
    {
      v12 = P;
      if ( *a5 )
        v12 = *a5;
      v13 = (unsigned int)PnpDetermineResourceListSize(v12);
      Pool2 = (void *)ExAllocatePool2(0x100uLL, v13, 0x20207050u);
      if ( Pool2 )
      {
        if ( *a5 )
          ExFreePoolWithTag(P, 0);
        else
          *a5 = P;
        ExAcquireFastMutex(&PiResourceListLock);
        v11[52] = Pool2;
        memmove(Pool2, *a5, v13);
        v11[53] = v27;
        KeReleaseGuardedMutex(&PiResourceListLock);
        v15 = v11[66];
        v6 = a1;
        v9 = a2;
        goto LABEL_23;
      }
      ExAcquireFastMutex(&PiResourceListLock);
      v11[52] = P;
      v11[53] = v27;
      KeReleaseGuardedMutex(&PiResourceListLock);
      IopReleaseResources((__int64)v11);
      LegacyDeviceNode = -1073741670;
    }
    IopRemoveLegacyDeviceNode(a3, v11);
    goto LABEL_29;
  }
  v15 = v11[66];
  IopRemoveLegacyDeviceNode(a3, v11);
LABEL_23:
  if ( v15 )
  {
    v16 = IopCombineLegacyResources(v15);
    v17 = v16;
    if ( v16 )
    {
      v18 = PnpDetermineResourceListSize(v16);
      IopWriteAllocatedResourcesToRegistry(v15, v17, v18);
      ExFreePoolWithTag(v17, 0);
    }
  }
  if ( v6 != 3 && a4 )
    IopSetLegacyResourcesFlag(v9);
LABEL_29:
  KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
  KeLeaveCriticalRegion();
  return (unsigned int)LegacyDeviceNode;
}
