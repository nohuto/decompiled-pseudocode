/*
 * XREFs of NvmeAdapterDeleteNvmeController @ 0x1400E141C
 * Callers:
 *     DeleteNvmeAdapter @ 0x1400CB320 (DeleteNvmeAdapter.c)
 *     NvmeAdapterCleanupSubsystemPort @ 0x1400CD2C0 (NvmeAdapterCleanupSubsystemPort.c)
 *     NvmeAdapterConnectControllerInternal @ 0x1400CD9D0 (NvmeAdapterConnectControllerInternal.c)
 *     NvmeAdapterCreateAddNvmeController @ 0x1400CDD60 (NvmeAdapterCreateAddNvmeController.c)
 *     NvmeAdapterDisconnectControllerInternal @ 0x1400CF800 (NvmeAdapterDisconnectControllerInternal.c)
 *     NvmeAdapterStorMQAddController @ 0x1400D95B8 (NvmeAdapterStorMQAddController.c)
 *     NvmeAdapterStorMQControllerRemoveWorker @ 0x1400D9840 (NvmeAdapterStorMQControllerRemoveWorker.c)
 *     NvmeAdapterDisconnectController @ 0x14019650C (NvmeAdapterDisconnectController.c)
 *     NvmeAdapterRemoveController @ 0x14019B238 (NvmeAdapterRemoveController.c)
 * Callees:
 *     StorDeleteDictionary @ 0x140055FA8 (StorDeleteDictionary.c)
 *     NvmeControllerDeleteReenumerationContext @ 0x1400BEB40 (NvmeControllerDeleteReenumerationContext.c)
 *     NvmeAdapterFreeControllerAdminQueue @ 0x1400E2D7C (NvmeAdapterFreeControllerAdminQueue.c)
 *     NvmeAdapterSendControlRemoveNvmeController @ 0x1400E7230 (NvmeAdapterSendControlRemoveNvmeController.c)
 *     NvmeControllerDeleteCommandQueue @ 0x1400EC9A0 (NvmeControllerDeleteCommandQueue.c)
 *     NvmeControllerDeleteErrorRecoveryContext @ 0x1400ECAA0 (NvmeControllerDeleteErrorRecoveryContext.c)
 *     NvmeControllerReleaseInternalDbgLog @ 0x1400F3D30 (NvmeControllerReleaseInternalDbgLog.c)
 *     DeleteNVMePrpListBufferPool @ 0x140119E18 (DeleteNVMePrpListBufferPool.c)
 *     DeleteNVMeScatterGatherListBufferPool @ 0x140119F40 (DeleteNVMeScatterGatherListBufferPool.c)
 *     DeleteNVMeSplitIoContextPool @ 0x14011A024 (DeleteNVMeSplitIoContextPool.c)
 *     NvmeControllerDeleteExtendedCommandsInZombieList @ 0x1401292B4 (NvmeControllerDeleteExtendedCommandsInZombieList.c)
 *     NvmeControllerFreeExtendedCommand @ 0x1401293D8 (NvmeControllerFreeExtendedCommand.c)
 *     NvmeControllerFreePendingZombieCommands @ 0x140129454 (NvmeControllerFreePendingZombieCommands.c)
 *     StorFreeContiguousMemory @ 0x140184F04 (StorFreeContiguousMemory.c)
 */

void __fastcall NvmeAdapterDeleteNvmeController(__int64 *a1)
{
  __int64 v2; // rbp
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v3; // rcx
  struct _ERESOURCE *v4; // rcx
  int v5; // eax
  union _SLIST_HEADER *v6; // rdi
  PSLIST_ENTRY v7; // rax
  void *Alignment; // rcx
  void *v9; // rcx
  struct _IO_WORKITEM *v10; // rcx
  struct _IO_WORKITEM *v11; // rcx
  struct _IO_WORKITEM *v12; // rcx
  struct _IO_WORKITEM *v13; // rcx
  struct _IO_WORKITEM *v14; // rcx
  struct _IO_WORKITEM *v15; // rcx
  struct _IO_WORKITEM *v16; // rcx
  struct _IO_WORKITEM *v17; // rcx
  struct _IO_WORKITEM *v18; // rcx
  void *v19; // rcx
  void *v20; // rcx
  void *v21; // rcx
  void *v22; // rcx
  void *v23; // rcx
  __int64 v24; // rdx
  void *v25; // rcx
  void *v26; // rcx
  void *v27; // rcx

  v2 = *(_QWORD *)(*a1 + 128);
  NvmeControllerDeleteErrorRecoveryContext();
  v3 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(*a1 + 552);
  if ( v3 )
    ExWaitForRundownProtectionReleaseCacheAware(v3);
  if ( *(_QWORD *)(*a1 + 560) )
    NvmeAdapterSendControlRemoveNvmeController();
  v4 = (struct _ERESOURCE *)*a1;
  v5 = *(_DWORD *)(*a1 + 572);
  if ( v5 == 1 )
  {
    StorDeleteDictionary((__int64)&v4[6].ExclusiveWaiters);
  }
  else if ( v5 == 2 )
  {
    ExDeleteResourceLite(v4 + 14);
  }
  v6 = (union _SLIST_HEADER *)*a1;
  if ( *a1 )
  {
    while ( 1 )
    {
      v7 = ExpInterlockedPopEntrySList(v6 + 71);
      if ( !v7 )
        break;
      NvmeControllerFreeExtendedCommand(v6, &v7[-1]);
    }
    NvmeControllerDeleteExtendedCommandsInZombieList(v6);
    Alignment = (void *)v6[74].Alignment;
    if ( Alignment )
    {
      ExFreePoolWithTag(Alignment, 0x52436152u);
      v6[74].Alignment = 0LL;
    }
    NvmeControllerFreePendingZombieCommands(v6);
  }
  NvmeAdapterFreeControllerAdminQueue(*a1);
  v9 = *(void **)(*a1 + 104);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0x52436152u);
    *(_QWORD *)(*a1 + 104) = 0LL;
  }
  v10 = *(struct _IO_WORKITEM **)(*a1 + 168);
  if ( v10 )
  {
    IoFreeWorkItem(v10);
    *(_QWORD *)(*a1 + 168) = 0LL;
  }
  v11 = *(struct _IO_WORKITEM **)(*a1 + 160);
  if ( v11 )
  {
    IoFreeWorkItem(v11);
    *(_QWORD *)(*a1 + 160) = 0LL;
  }
  v12 = *(struct _IO_WORKITEM **)(*a1 + 152);
  if ( v12 )
  {
    IoFreeWorkItem(v12);
    *(_QWORD *)(*a1 + 152) = 0LL;
  }
  v13 = *(struct _IO_WORKITEM **)(*a1 + 176);
  if ( v13 )
  {
    IoFreeWorkItem(v13);
    *(_QWORD *)(*a1 + 176) = 0LL;
  }
  v14 = *(struct _IO_WORKITEM **)(*a1 + 144);
  if ( v14 )
  {
    IoFreeWorkItem(v14);
    *(_QWORD *)(*a1 + 144) = 0LL;
  }
  v15 = *(struct _IO_WORKITEM **)(*a1 + 1032);
  if ( v15 )
  {
    IoFreeWorkItem(v15);
    *(_QWORD *)(*a1 + 1032) = 0LL;
  }
  v16 = *(struct _IO_WORKITEM **)(*a1 + 1328);
  if ( v16 )
  {
    IoFreeWorkItem(v16);
    *(_QWORD *)(*a1 + 1328) = 0LL;
  }
  v17 = *(struct _IO_WORKITEM **)(*a1 + 1424);
  if ( v17 )
  {
    IoFreeWorkItem(v17);
    *(_QWORD *)(*a1 + 1424) = 0LL;
  }
  v18 = *(struct _IO_WORKITEM **)(*a1 + 1040);
  if ( v18 )
  {
    IoFreeWorkItem(v18);
    *(_QWORD *)(*a1 + 1040) = 0LL;
  }
  v19 = *(void **)(*a1 + 1736);
  if ( v19 )
  {
    ExFreePoolWithTag(v19, 0x52436152u);
    *(_QWORD *)(*a1 + 1736) = 0LL;
  }
  NvmeControllerDeleteCommandQueue(*a1);
  DeleteNVMeSplitIoContextPool(*a1);
  DeleteNVMePrpListBufferPool(*a1);
  DeleteNVMeScatterGatherListBufferPool(*a1);
  NvmeControllerDeleteReenumerationContext(*a1);
  v20 = *(void **)(*a1 + 872);
  if ( v20 )
  {
    ExFreePoolWithTag(v20, 0x52436152u);
    *(_QWORD *)(*a1 + 872) = 0LL;
  }
  v21 = *(void **)(*a1 + 1048);
  if ( v21 )
  {
    ExFreePoolWithTag(v21, 0x52436152u);
    *(_QWORD *)(*a1 + 1048) = 0LL;
  }
  ExFreeCacheAwareRundownProtection(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*a1 + 552));
  NvmeControllerReleaseInternalDbgLog(*a1);
  if ( (*(_BYTE *)(*a1 + 136) & 2) == 0 )
  {
    v22 = *(void **)(*a1 + 792);
    if ( v22 )
    {
      ExFreePoolWithTag(v22, 0x52436152u);
      *(_QWORD *)(*a1 + 792) = 0LL;
    }
    v23 = *(void **)(*a1 + 752);
    if ( v23 )
    {
      ExFreePoolWithTag(v23, 0x52436152u);
      *(_QWORD *)(*a1 + 752) = 0LL;
    }
  }
  v24 = *a1;
  v25 = *(void **)(*a1 + 1648);
  if ( v25 )
  {
    ExFreePoolWithTag(v25, 0x52436152u);
    *(_QWORD *)(*a1 + 1648) = 0LL;
    v24 = *a1;
  }
  if ( v2 && *(_DWORD *)(v24 + 1640) )
  {
    StorFreeContiguousMemory(v2 + 1144, v24 + 1624);
    *(_QWORD *)(*a1 + 1112) = 0LL;
    *(_QWORD *)(*a1 + 1120) = 0LL;
  }
  v26 = *(void **)(*a1 + 1264);
  if ( v26 )
  {
    ExFreePoolWithTag(v26, 0x52436152u);
    *(_QWORD *)(*a1 + 1264) = 0LL;
  }
  v27 = *(void **)(*a1 + 1272);
  if ( v27 )
  {
    ExFreePoolWithTag(v27, 0x52436152u);
    *(_QWORD *)(*a1 + 1272) = 0LL;
  }
  ExFreePoolWithTag((PVOID)*a1, 0x52436152u);
  *a1 = 0LL;
}
