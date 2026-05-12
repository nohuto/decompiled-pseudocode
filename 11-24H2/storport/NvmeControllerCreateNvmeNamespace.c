/*
 * XREFs of NvmeControllerCreateNvmeNamespace @ 0x1400FAA24
 * Callers:
 *     NvmeControllerIdentifyChangedNamespaces @ 0x1400BEE0C (NvmeControllerIdentifyChangedNamespaces.c)
 *     NvmeNamespaceIdentify @ 0x1400BF954 (NvmeNamespaceIdentify.c)
 *     NvmeAdapterFabricControllerUpdateNamespace @ 0x1400E2530 (NvmeAdapterFabricControllerUpdateNamespace.c)
 *     NvmeAdapterStartFabricControllerNamespaces @ 0x1400E7E14 (NvmeAdapterStartFabricControllerNamespaces.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     StorEtwNvmeNamespaceEvent @ 0x1400A9A30 (StorEtwNvmeNamespaceEvent.c)
 *     NvmeAdapterGetControllerIdentifyData @ 0x1400E2FFC (NvmeAdapterGetControllerIdentifyData.c)
 *     NvmeNamespaceIsInactive @ 0x1400F9ED8 (NvmeNamespaceIsInactive.c)
 *     NvmeNamespaceComputeBlockInfo @ 0x1400FCDF8 (NvmeNamespaceComputeBlockInfo.c)
 *     NvmeNamespaceCreateErrorRecoveryContext @ 0x1400FCF9C (NvmeNamespaceCreateErrorRecoveryContext.c)
 *     NvmeNamespaceCreateIoQueue @ 0x1400FD040 (NvmeNamespaceCreateIoQueue.c)
 *     NvmeNamespaceCreateIoQueue2 @ 0x1400FD3FC (NvmeNamespaceCreateIoQueue2.c)
 *     NvmeNamespaceDeleteErrorRecoveryContext @ 0x1400FDBB8 (NvmeNamespaceDeleteErrorRecoveryContext.c)
 *     NvmeNamespaceDeleteIoQueue @ 0x1400FDC1C (NvmeNamespaceDeleteIoQueue.c)
 *     NvmeNamespaceDeleteIoQueue2 @ 0x1400FDD1C (NvmeNamespaceDeleteIoQueue2.c)
 *     NvmeNamespaceInitializeIoTracking @ 0x140104B48 (NvmeNamespaceInitializeIoTracking.c)
 *     NvmeNamespaceLockIoQueue @ 0x140105324 (NvmeNamespaceLockIoQueue.c)
 *     NvmeNamespaceTelemetryDelete @ 0x140113F2C (NvmeNamespaceTelemetryDelete.c)
 *     NvmeNamespaceTerminateSystemThread @ 0x140114E48 (NvmeNamespaceTerminateSystemThread.c)
 *     NvmeNamespaceUninitializeIoTracking @ 0x140114E90 (NvmeNamespaceUninitializeIoTracking.c)
 *     NvmeControllerAllocateExtendedCommand @ 0x1401290D8 (NvmeControllerAllocateExtendedCommand.c)
 *     NvmeControllerFreeExtendedCommand @ 0x1401293D8 (NvmeControllerFreeExtendedCommand.c)
 *     NvmeNamespacePowerInitialize @ 0x140133D74 (NvmeNamespacePowerInitialize.c)
 *     NvmeNamespacePowerUninitialize @ 0x140134500 (NvmeNamespacePowerUninitialize.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall NvmeControllerCreateNvmeNamespace(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rax
  int IoQueue; // edi
  _DWORD *DeviceExtension; // rbx
  PEX_RUNDOWN_REF_CACHE_AWARE CacheAwareRundownProtection; // rax
  struct _IO_WORKITEM *v11; // rcx
  __int64 v12; // rdx
  void *v13; // rcx
  void *v14; // rcx
  PDEVICE_OBJECT v15; // rax
  __int64 IoQueue2; // rax
  __int64 v17; // rax
  unsigned __int8 v18; // al
  int v19; // edx
  __int64 v20; // r10
  unsigned __int16 v21; // ax
  __int64 Pool; // rax
  __int64 ExtendedCommand; // rax
  __int64 v24; // rdx
  __int16 v25; // ax
  PIO_WORKITEM WorkItem; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v27; // rcx
  PDEVICE_OBJECT DeviceObject; // [rsp+D0h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 128);
  DeviceObject = 0LL;
  IoQueue = IoCreateDevice(*(PDRIVER_OBJECT *)(*(_QWORD *)(v4 + 8) + 8LL), 0x2C0u, 0LL, 0x2Du, 0x180u, 0, &DeviceObject);
  if ( IoQueue >= 0 )
  {
    DeviceExtension = DeviceObject->DeviceExtension;
    memset_0(DeviceExtension, 0, 0x2C0uLL);
    CacheAwareRundownProtection = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x6D526152u);
    *((_QWORD *)DeviceExtension + 15) = CacheAwareRundownProtection;
    if ( !CacheAwareRundownProtection )
    {
      IoQueue = -1073741801;
      goto LABEL_4;
    }
    *DeviceExtension = 1314278989;
    *((_QWORD *)DeviceExtension + 4) = DeviceExtension + 6;
    *((_QWORD *)DeviceExtension + 3) = DeviceExtension + 6;
    v15 = DeviceObject;
    *((_QWORD *)DeviceExtension + 14) |= 2uLL;
    *((_QWORD *)DeviceExtension + 1) = v15;
    *((_QWORD *)DeviceExtension + 2) = a1;
    DeviceExtension[14] = a2;
    *((_BYTE *)DeviceExtension + 60) = 0;
    DeviceExtension[24] = 2;
    *((_BYTE *)DeviceExtension + 100) = *(_BYTE *)(a1 + 616);
    *((_BYTE *)DeviceExtension + 101) = *(_BYTE *)(a1 + 617);
    *((_BYTE *)DeviceExtension + 102) = a2;
    *((_WORD *)DeviceExtension + 212) = *(_WORD *)(*(_QWORD *)(a1 + 128) + 1092LL);
    KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 13);
    if ( FeatureFixFUAForReadIoPerf )
    {
      IoQueue2 = NvmeNamespaceCreateIoQueue2(DeviceExtension);
      *((_QWORD *)DeviceExtension + 32) = IoQueue2;
      if ( !IoQueue2 )
        goto LABEL_19;
      v17 = NvmeNamespaceCreateIoQueue2(DeviceExtension);
      *((_QWORD *)DeviceExtension + 33) = v17;
      if ( !v17 )
        goto LABEL_19;
    }
    else
    {
      IoQueue = NvmeNamespaceCreateIoQueue(DeviceExtension);
      if ( IoQueue < 0 )
        goto LABEL_4;
    }
    NvmeNamespaceLockIoQueue(DeviceExtension);
    KeInitializeEvent((PRKEVENT)DeviceExtension + 20, SynchronizationEvent, 0);
    if ( (*(_BYTE *)(*((_QWORD *)DeviceExtension + 2) + 136LL) & 2) != 0 )
    {
      v18 = *((_BYTE *)DeviceExtension + 60);
      v19 = DeviceExtension[14];
      *((_QWORD *)DeviceExtension + 14) |= 4uLL;
      IoQueue = NvmeAdapterGetControllerIdentifyData(a1, v19, 0, 0, v18, (_QWORD *)DeviceExtension + 22);
      if ( IoQueue < 0 )
      {
        StorEtwNvmeNamespaceEvent(
          (__int64)DeviceExtension,
          1,
          2,
          (__int64)L"Identify namespace failed",
          L"NtStatus",
          IoQueue,
          (void *)&word_140150F48,
          0,
          (void *)&word_140150F48,
          0,
          (void *)&word_140150F48,
          0,
          (void *)&word_140150F48,
          0,
          (void *)&word_140150F48,
          0,
          (void *)&word_140150F48,
          0,
          (void *)&word_140150F48,
          0);
        goto LABEL_4;
      }
      IoQueue = NvmeAdapterGetControllerIdentifyData(a1, DeviceExtension[14], 3, 0, 0, (_QWORD *)DeviceExtension + 23);
      if ( IoQueue < 0 )
      {
        StorEtwNvmeNamespaceEvent(
          (__int64)DeviceExtension,
          1,
          2,
          (__int64)L"Identify namespace descriptor failed",
          L"NtStatus",
          IoQueue,
          (void *)&word_140150F48,
          0,
          (void *)&word_140150F48,
          0,
          (void *)&word_140150F48,
          0,
          (void *)&word_140150F48,
          0,
          (void *)&word_140150F48,
          0,
          (void *)&word_140150F48,
          0,
          (void *)&word_140150F48,
          0);
        goto LABEL_4;
      }
      if ( NvmeNamespaceIsInactive(*((_QWORD *)DeviceExtension + 22)) )
      {
        StorEtwNvmeNamespaceEvent(
          (__int64)DeviceExtension,
          1,
          3,
          (__int64)L"Inactive namespace",
          L"NSZE",
          *(_QWORD *)v20,
          L"LBADS",
          *(_BYTE *)(v20 + 4LL * (*(_BYTE *)(v20 + 26) & 0xF) + 130),
          (void *)&word_140150F48,
          0,
          (void *)&word_140150F48,
          0,
          (void *)&word_140150F48,
          0,
          (void *)&word_140150F48,
          0,
          (void *)&word_140150F48,
          0,
          (void *)&word_140150F48,
          0);
        IoQueue = -1073741637;
        goto LABEL_4;
      }
      if ( *(_QWORD *)(a1 + 624) )
      {
        v21 = *(_WORD *)(v20 + 100);
        if ( v21 <= *(_WORD *)(a1 + 618) )
          *((_WORD *)DeviceExtension + 31) = v21;
      }
      if ( !*((_BYTE *)DeviceExtension + 60) )
        NvmeNamespaceComputeBlockInfo(DeviceExtension);
    }
    if ( !FeatureFixFUAForReadIoPerf || (IoQueue = NvmeNamespaceInitializeIoTracking(DeviceExtension), IoQueue >= 0) )
    {
      Pool = RaidAllocatePool(72LL, 2328LL, 1700028754LL, *((_QWORD *)DeviceExtension + 1));
      *((_QWORD *)DeviceExtension + 76) = Pool;
      if ( !Pool )
      {
LABEL_19:
        IoQueue = -1073741670;
        goto LABEL_4;
      }
      IoQueue = NvmeNamespacePowerInitialize(DeviceExtension);
      if ( IoQueue >= 0 )
      {
        IoQueue = NvmeNamespaceCreateErrorRecoveryContext(DeviceExtension);
        if ( IoQueue >= 0 )
        {
          if ( (*(_BYTE *)(*((_QWORD *)DeviceExtension + 2) + 136LL) & 2) != 0 )
            goto LABEL_45;
          KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 68);
          *((_QWORD *)DeviceExtension + 71) = DeviceExtension + 140;
          *((_QWORD *)DeviceExtension + 70) = DeviceExtension + 140;
          *((_QWORD *)DeviceExtension + 74) = DeviceExtension + 146;
          *((_QWORD *)DeviceExtension + 73) = DeviceExtension + 146;
          ExtendedCommand = NvmeControllerAllocateExtendedCommand(*((_QWORD *)DeviceExtension + 2));
          *((_QWORD *)DeviceExtension + 66) = ExtendedCommand;
          v24 = ExtendedCommand;
          if ( ExtendedCommand )
          {
            v25 = 10;
            if ( (unsigned int)(3 * *(_DWORD *)(*(_QWORD *)(*((_QWORD *)DeviceExtension + 2) + 128LL) + 1092LL)) > 0xA )
              v25 = 3 * *(_WORD *)(*(_QWORD *)(*((_QWORD *)DeviceExtension + 2) + 128LL) + 1092LL);
            *(_WORD *)(v24 + 52) = v25;
            WorkItem = IoAllocateWorkItem(*((PDEVICE_OBJECT *)DeviceExtension + 1));
            *((_QWORD *)DeviceExtension + 67) = WorkItem;
            if ( WorkItem )
            {
LABEL_45:
              *a4 = DeviceExtension;
              return (unsigned int)IoQueue;
            }
          }
          goto LABEL_19;
        }
      }
    }
LABEL_4:
    if ( DeviceExtension )
    {
      v11 = (struct _IO_WORKITEM *)*((_QWORD *)DeviceExtension + 67);
      if ( v11 )
      {
        IoFreeWorkItem(v11);
        *((_QWORD *)DeviceExtension + 67) = 0LL;
      }
      v12 = *((_QWORD *)DeviceExtension + 66);
      if ( v12 )
      {
        NvmeControllerFreeExtendedCommand(*((_QWORD *)DeviceExtension + 2), v12);
        *((_QWORD *)DeviceExtension + 66) = 0LL;
      }
      NvmeNamespaceDeleteErrorRecoveryContext(DeviceExtension);
      if ( FeatureFixFUAForReadIoPerf )
        NvmeNamespaceUninitializeIoTracking(DeviceExtension);
      NvmeNamespacePowerUninitialize(DeviceExtension);
      NvmeNamespaceTelemetryDelete(DeviceExtension);
      v13 = (void *)*((_QWORD *)DeviceExtension + 23);
      if ( v13 )
      {
        ExFreePoolWithTag(v13, 0x52436152u);
        *((_QWORD *)DeviceExtension + 23) = 0LL;
      }
      v14 = (void *)*((_QWORD *)DeviceExtension + 22);
      if ( v14 )
      {
        ExFreePoolWithTag(v14, 0x52436152u);
        *((_QWORD *)DeviceExtension + 22) = 0LL;
      }
      NvmeNamespaceTerminateSystemThread(DeviceExtension);
      if ( FeatureFixFUAForReadIoPerf )
        NvmeNamespaceDeleteIoQueue2(DeviceExtension);
      else
        NvmeNamespaceDeleteIoQueue(DeviceExtension);
      v27 = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)*((_QWORD *)DeviceExtension + 15);
      if ( v27 )
      {
        ExFreeCacheAwareRundownProtection(v27);
        *((_QWORD *)DeviceExtension + 15) = 0LL;
      }
    }
  }
  if ( DeviceObject )
    IoDeleteDevice(DeviceObject);
  return (unsigned int)IoQueue;
}
