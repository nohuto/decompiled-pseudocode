/*
 * XREFs of NvmeAdapterCreateNvmeController @ 0x14019DFDC
 * Callers:
 *     NvmeAdapterConnectControllerInternal @ 0x1400CD9D0 (NvmeAdapterConnectControllerInternal.c)
 *     NvmeAdapterCreateAddNvmeController @ 0x1400CDD60 (NvmeAdapterCreateAddNvmeController.c)
 *     NvmeAdapterStartMiniport @ 0x1400D8B80 (NvmeAdapterStartMiniport.c)
 *     NvmeAdapterStorMQAddController @ 0x1400D95B8 (NvmeAdapterStorMQAddController.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     StorCreateDictionary @ 0x14003C2F8 (StorCreateDictionary.c)
 *     StorDeleteDictionary @ 0x140055FA8 (StorDeleteDictionary.c)
 *     StorpInitializeNvmeControllerTelemetry @ 0x1400AFA40 (StorpInitializeNvmeControllerTelemetry.c)
 *     NvmeAdapterAllocateControllerAdminQueue @ 0x1400DE5B0 (NvmeAdapterAllocateControllerAdminQueue.c)
 *     NvmeAdapterFreeControllerAdminQueue @ 0x1400E2D7C (NvmeAdapterFreeControllerAdminQueue.c)
 *     NvmeControllerCreateCommandQueue @ 0x1400EBFF8 (NvmeControllerCreateCommandQueue.c)
 *     NvmeControllerCreateErrorRecoveryContext @ 0x1400EC3CC (NvmeControllerCreateErrorRecoveryContext.c)
 *     NvmeControllerDeleteCommandQueue @ 0x1400EC9A0 (NvmeControllerDeleteCommandQueue.c)
 *     NvmeControllerDeleteErrorRecoveryContext @ 0x1400ECAA0 (NvmeControllerDeleteErrorRecoveryContext.c)
 *     NvmeControllerInitializeInternalDbgLog @ 0x1400F09A4 (NvmeControllerInitializeInternalDbgLog.c)
 *     NvmeControllerReleaseInternalDbgLog @ 0x1400F3D30 (NvmeControllerReleaseInternalDbgLog.c)
 */

__int64 __fastcall NvmeAdapterCreateNvmeController(__int64 a1, __int64 a2, char a3, _OWORD *a4, _QWORD *a5)
{
  char v9; // r15
  char v10; // r12
  _DWORD *Pool; // rbx
  int ControllerAdminQueue; // edi
  PEX_RUNDOWN_REF_CACHE_AWARE CacheAwareRundownProtection; // rax
  struct _IO_WORKITEM *v14; // rcx
  void *v15; // rcx
  struct _IO_WORKITEM *v16; // rcx
  struct _IO_WORKITEM *v17; // rcx
  struct _IO_WORKITEM *v18; // rcx
  struct _IO_WORKITEM *v19; // rcx
  struct _IO_WORKITEM *v20; // rcx
  struct _IO_WORKITEM *v21; // rcx
  struct _IO_WORKITEM *v22; // rcx
  struct _IO_WORKITEM *v23; // rcx
  void *v24; // rcx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v25; // rcx
  PIO_WORKITEM WorkItem; // rax
  PIO_WORKITEM v28; // rax
  PIO_WORKITEM v29; // rax
  PIO_WORKITEM v30; // rax
  PIO_WORKITEM v31; // rax
  PIO_WORKITEM v32; // rax
  PIO_WORKITEM v33; // rax
  __int64 v34; // rax
  __int16 v35; // ax
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int128 v38; // xmm1
  int v39; // eax
  int v40; // eax
  __int64 v41; // r8
  PIO_WORKITEM v42; // rax
  PIO_WORKITEM v43; // rax
  __int64 v44; // rax

  v9 = 0;
  v10 = 0;
  Pool = (_DWORD *)RaidAllocatePool(72LL, 1792LL, 1380147538LL, *(_QWORD *)(a1 + 8));
  if ( !Pool )
    return (unsigned int)-1073741801;
  CacheAwareRundownProtection = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x52436152u);
  *((_QWORD *)Pool + 69) = CacheAwareRundownProtection;
  if ( !CacheAwareRundownProtection )
    goto LABEL_4;
  WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
  *((_QWORD *)Pool + 18) = WorkItem;
  if ( !WorkItem )
    goto LABEL_4;
  v28 = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
  *((_QWORD *)Pool + 19) = v28;
  if ( !v28 )
    goto LABEL_4;
  v29 = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
  *((_QWORD *)Pool + 20) = v29;
  if ( !v29 )
    goto LABEL_4;
  v30 = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
  *((_QWORD *)Pool + 21) = v30;
  if ( !v30 )
    goto LABEL_4;
  v31 = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
  *((_QWORD *)Pool + 166) = v31;
  if ( !v31 )
    goto LABEL_4;
  v32 = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
  *((_QWORD *)Pool + 22) = v32;
  if ( !v32 )
    goto LABEL_4;
  v33 = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
  *((_QWORD *)Pool + 178) = v33;
  if ( !v33 )
    goto LABEL_4;
  KeInitializeEvent((PRKEVENT)(Pool + 46), NotificationEvent, 1u);
  KeInitializeEvent((PRKEVENT)(Pool + 52), NotificationEvent, 1u);
  KeInitializeEvent((PRKEVENT)(Pool + 58), NotificationEvent, 1u);
  KeInitializeEvent((PRKEVENT)(Pool + 64), NotificationEvent, 0);
  KeInitializeTimer((PKTIMER)(Pool + 70));
  KeInitializeDpc((PRKDPC)(Pool + 86), (PKDEFERRED_ROUTINE)NvmeAdapterNvmeControllerTimerDpcRoutine, Pool);
  KeInitializeTimer((PKTIMER)(Pool + 102));
  KeInitializeDpc((PRKDPC)(Pool + 118), (PKDEFERRED_ROUTINE)NvmeAdapterNvmeControllerTimerDpcRoutine, Pool);
  *((_WORD *)Pool + 2) = -1;
  *((_QWORD *)Pool + 9) = Pool + 16;
  *((_QWORD *)Pool + 8) = Pool + 16;
  *((_QWORD *)Pool + 11) = Pool + 20;
  *((_QWORD *)Pool + 10) = Pool + 20;
  *((_QWORD *)Pool + 15) = Pool + 28;
  *((_QWORD *)Pool + 14) = Pool + 28;
  *((_WORD *)Pool + 3) = 4096;
  *((_QWORD *)Pool + 16) = a1;
  *Pool = 1314276178;
  Pool[142] = 0;
  if ( a3 )
  {
    Pool[186] = 255;
    goto LABEL_44;
  }
  if ( a2 )
  {
    v34 = RaidAllocatePool(64LL, 72LL, 1380147538LL, *(_QWORD *)(a1 + 8));
    *((_QWORD *)Pool + 13) = v34;
    if ( v34 )
    {
      v35 = *(_WORD *)(a2 + 6);
      if ( v35 )
        *((_WORD *)Pool + 3) = v35;
      v36 = *((_QWORD *)Pool + 17);
      *((_QWORD *)Pool + 12) = a2;
      v37 = v36 | 2;
      *((_QWORD *)Pool + 17) = v37;
      Pool[143] = 2 - ((*(_BYTE *)(a2 + 32) & 2) != 0);
      Pool[186] = *(_DWORD *)(*(_QWORD *)(a2 + 24) + 4LL);
      *((_QWORD *)Pool + 94) = *(_QWORD *)(a2 + 24) + 72LL;
      if ( a4 && *(_BYTE *)a4 )
      {
        *(_OWORD *)(Pool + 190) = *a4;
        v38 = a4[1];
      }
      else
      {
        *(_OWORD *)(Pool + 190) = *(_OWORD *)(a2 + 572);
        v38 = *(_OWORD *)(a2 + 588);
      }
      *(_OWORD *)(Pool + 194) = v38;
      *((_QWORD *)Pool + 99) = a2 + 60;
      Pool[9] = *(_DWORD *)(*(_QWORD *)(a2 + 24) + 16LL);
      if ( (*(_BYTE *)(a2 + 32) & 8) != 0 )
        *((_QWORD *)Pool + 17) = v37 | 4;
      ControllerAdminQueue = NvmeAdapterAllocateControllerAdminQueue((__int64)Pool);
      if ( ControllerAdminQueue < 0 )
        goto LABEL_5;
      goto LABEL_56;
    }
LABEL_4:
    ControllerAdminQueue = -1073741801;
    goto LABEL_5;
  }
  if ( (*(_BYTE *)(a1 + 416) & 0x40) == 0 )
    goto LABEL_56;
  Pool[186] = 0;
LABEL_44:
  Pool[143] = 1;
  Pool[226] = (*(_DWORD *)(a1 + 144) >> 10) & 2 | 1;
LABEL_56:
  *((_WORD *)Pool + 28) = -1;
  v39 = *(_DWORD *)(a1 + 976);
  if ( (v39 & 2) != 0 )
  {
    *((_QWORD *)Pool + 17) |= 0x10uLL;
  }
  else if ( (v39 & 4) != 0 )
  {
    *((_QWORD *)Pool + 17) |= 0x20uLL;
  }
  KeInitializeSpinLock((PKSPIN_LOCK)Pool + 90);
  v40 = Pool[143];
  if ( v40 == 1 )
  {
    Pool[2] = 0xFFFF;
    *((_QWORD *)Pool + 81) = Pool + 160;
    *((_QWORD *)Pool + 80) = Pool + 160;
    *((_WORD *)Pool + 10) = -1;
    *((_WORD *)Pool + 16) = 0;
    KeInitializeSpinLock((PKSPIN_LOCK)Pool + 79);
    ControllerAdminQueue = StorCreateDictionary(
                             (__int64)(Pool + 166),
                             0x20u,
                             v41,
                             (__int64)NvmeControllerGetNvmeNamespaceKey);
    if ( ControllerAdminQueue < 0 )
      goto LABEL_5;
    v9 = 1;
  }
  else if ( v40 == 2 )
  {
    ExInitializeResourceLite((PERESOURCE)Pool + 14);
    v10 = 1;
    *((_QWORD *)Pool + 198) = Pool + 394;
    *((_QWORD *)Pool + 197) = Pool + 394;
    *((_QWORD *)Pool + 202) = Pool + 402;
    *((_QWORD *)Pool + 201) = Pool + 402;
  }
  *((_WORD *)Pool + 308) = _InterlockedExchangeAdd16((volatile signed __int16 *)(a1 + 984), 1u);
  ControllerAdminQueue = NvmeControllerCreateErrorRecoveryContext(Pool);
  if ( ControllerAdminQueue < 0 )
    goto LABEL_5;
  ControllerAdminQueue = NvmeControllerCreateCommandQueue((__int64)Pool);
  if ( ControllerAdminQueue < 0 )
    goto LABEL_5;
  v42 = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(*((_QWORD *)Pool + 16) + 8LL));
  *((_QWORD *)Pool + 129) = v42;
  if ( v42 )
  {
    ControllerAdminQueue = NvmeControllerInitializeInternalDbgLog((__int64)Pool);
    if ( ControllerAdminQueue < 0 )
      goto LABEL_5;
    if ( (Pool[34] & 2) != 0
      || (v43 = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(*((_QWORD *)Pool + 16) + 8LL)),
          (*((_QWORD *)Pool + 130) = v43) != 0LL)
      && (v44 = RaidAllocatePool(72LL, 40LL, 1380147538LL, *(_QWORD *)(*((_QWORD *)Pool + 16) + 8LL)),
          (*((_QWORD *)Pool + 217) = v44) != 0LL) )
    {
      StorpInitializeNvmeControllerTelemetry((__int64)Pool);
      *((_BYTE *)Pool + 1729) = 1;
      *a5 = Pool;
      return (unsigned int)ControllerAdminQueue;
    }
  }
  ControllerAdminQueue = -1073741670;
LABEL_5:
  NvmeControllerReleaseInternalDbgLog((__int64)Pool);
  v14 = (struct _IO_WORKITEM *)*((_QWORD *)Pool + 129);
  if ( v14 )
  {
    IoFreeWorkItem(v14);
    *((_QWORD *)Pool + 129) = 0LL;
  }
  if ( v9 )
    StorDeleteDictionary((__int64)(Pool + 166));
  if ( v10 )
    ExDeleteResourceLite((PERESOURCE)Pool + 14);
  NvmeAdapterFreeControllerAdminQueue((__int64)Pool);
  v15 = (void *)*((_QWORD *)Pool + 13);
  if ( v15 )
    ExFreePoolWithTag(v15, 0x52436152u);
  v16 = (struct _IO_WORKITEM *)*((_QWORD *)Pool + 21);
  if ( v16 )
    IoFreeWorkItem(v16);
  v17 = (struct _IO_WORKITEM *)*((_QWORD *)Pool + 22);
  if ( v17 )
    IoFreeWorkItem(v17);
  v18 = (struct _IO_WORKITEM *)*((_QWORD *)Pool + 20);
  if ( v18 )
    IoFreeWorkItem(v18);
  v19 = (struct _IO_WORKITEM *)*((_QWORD *)Pool + 19);
  if ( v19 )
    IoFreeWorkItem(v19);
  v20 = (struct _IO_WORKITEM *)*((_QWORD *)Pool + 18);
  if ( v20 )
    IoFreeWorkItem(v20);
  v21 = (struct _IO_WORKITEM *)*((_QWORD *)Pool + 166);
  if ( v21 )
    IoFreeWorkItem(v21);
  v22 = (struct _IO_WORKITEM *)*((_QWORD *)Pool + 178);
  if ( v22 )
    IoFreeWorkItem(v22);
  NvmeControllerDeleteErrorRecoveryContext((__int64)Pool);
  NvmeControllerDeleteCommandQueue((__int64)Pool);
  v23 = (struct _IO_WORKITEM *)*((_QWORD *)Pool + 130);
  if ( v23 )
  {
    IoFreeWorkItem(v23);
    *((_QWORD *)Pool + 130) = 0LL;
  }
  v24 = (void *)*((_QWORD *)Pool + 217);
  if ( v24 )
  {
    ExFreePoolWithTag(v24, 0x52436152u);
    *((_QWORD *)Pool + 217) = 0LL;
  }
  v25 = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)*((_QWORD *)Pool + 69);
  if ( v25 )
    ExFreeCacheAwareRundownProtection(v25);
  ExFreePoolWithTag(Pool, 0x52436152u);
  return (unsigned int)ControllerAdminQueue;
}
