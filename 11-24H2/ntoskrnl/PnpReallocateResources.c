/*
 * XREFs of PnpReallocateResources @ 0x140732604
 * Callers:
 *     PiProcessResourceRequirementsChanged @ 0x140721BF4 (PiProcessResourceRequirementsChanged.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     KeReleaseSemaphore @ 0x1402F2490 (KeReleaseSemaphore.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PnpFindBestConfiguration @ 0x14071FD40 (PnpFindBestConfiguration.c)
 *     PnpUpdateRebootRequiredReason @ 0x140721558 (PnpUpdateRebootRequiredReason.c)
 *     PnpBuildCmResourceLists @ 0x140732364 (PnpBuildCmResourceLists.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x140732598 (PnpFreeResourceRequirementsForAssignTable.c)
 *     PnpRestoreResourcesInternal @ 0x1407327F0 (PnpRestoreResourcesInternal.c)
 *     PnpRebalance @ 0x1407331E8 (PnpRebalance.c)
 *     PipClearDevNodeFlags @ 0x1408B8F2C (PipClearDevNodeFlags.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x140978BD8 (PnpGetResourceRequirementsForAssignTable.c)
 *     PipSetDevNodeFlags @ 0x14097B5F8 (PipSetDevNodeFlags.c)
 *     PnpStartDeviceNode @ 0x1409BEB50 (PnpStartDeviceNode.c)
 *     PnpRequestDeviceRemoval @ 0x1409BF73C (PnpRequestDeviceRemoval.c)
 *     PnpReleaseResourcesInternal @ 0x140A89864 (PnpReleaseResourcesInternal.c)
 *     IopCommitConfiguration @ 0x140AA1FD4 (IopCommitConfiguration.c)
 */

void __fastcall PnpReallocateResources(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // r14d
  __int64 v4; // rax
  int ResourceRequirementsForAssignTable; // eax
  unsigned int v6; // esi
  int BestConfiguration; // edi
  __int64 v8; // r8
  __int64 v9; // rdx
  __int128 v10; // [rsp+30h] [rbp-50h] BYREF
  __int64 v11; // [rsp+40h] [rbp-40h] BYREF
  int v12; // [rsp+48h] [rbp-38h]
  int v13; // [rsp+4Ch] [rbp-34h]
  __int64 v14; // [rsp+58h] [rbp-28h]
  _BYTE vars0[24]; // [rsp+80h] [rbp+0h] BYREF
  unsigned int v16; // [rsp+A0h] [rbp+20h] BYREF

  memset_0(&v11, 0, 0x40uLL);
  v16 = 0;
  v10 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
  if ( (*(_DWORD *)(a1 + 396) & 0x400) == 0 )
    goto LABEL_17;
  v3 = *(_DWORD *)(a1 + 396) & 0x100;
  PipClearDevNodeFlags(a1, 256LL);
  if ( (*(_DWORD *)(a1 + 396) & 0x800) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 32);
    v14 = 0LL;
    v12 |= 0x280u;
    v11 = v4;
    v13 = 4;
    ResourceRequirementsForAssignTable = PnpGetResourceRequirementsForAssignTable(&v11, vars0, &v16);
    v6 = v16;
    BestConfiguration = ResourceRequirementsForAssignTable;
    if ( !v16 )
      goto LABEL_15;
    if ( *(_QWORD *)(a1 + 416) )
      PnpReleaseResourcesInternal(a1);
    BestConfiguration = PnpFindBestConfiguration((__int64)&v11, v6, (__int64)&v10);
    if ( BestConfiguration < 0 || (BestConfiguration = IopCommitConfiguration(&v10), BestConfiguration < 0) )
    {
      if ( (int)PnpRestoreResourcesInternal(a1) < 0 )
      {
        PnpUpdateRebootRequiredReason(*(_QWORD *)(a1 + 48), v9, 0x4000LL);
        v8 = 14LL;
        goto LABEL_12;
      }
    }
    else
    {
      PipClearDevNodeFlags(a1, 3072LL);
      PnpBuildCmResourceLists((unsigned __int64)&v11, (unsigned __int64)vars0, 1);
      BestConfiguration = PnpStartDeviceNode(a1, 1LL, 1LL);
      if ( BestConfiguration < 0 )
      {
        v8 = 12LL;
LABEL_12:
        PnpRequestDeviceRemoval(a1, 0LL, v8);
      }
    }
    PnpFreeResourceRequirementsForAssignTable((unsigned __int64)&v11, (unsigned __int64)vars0);
    goto LABEL_15;
  }
  BestConfiguration = PnpRebalance(a1, 0LL, 0LL, 0LL);
LABEL_15:
  if ( BestConfiguration < 0 )
  {
    PipClearDevNodeFlags(a1, 256LL);
    PipSetDevNodeFlags(a1, v3);
  }
LABEL_17:
  KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
  KeLeaveCriticalRegion();
}
