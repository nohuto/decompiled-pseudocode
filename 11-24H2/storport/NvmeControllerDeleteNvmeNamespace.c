/*
 * XREFs of NvmeControllerDeleteNvmeNamespace @ 0x1400FB03C
 * Callers:
 *     NvmeAdapterDeleteChildren @ 0x1400CE554 (NvmeAdapterDeleteChildren.c)
 *     NvmeAdapterFabricControllerUpdateNamespace @ 0x1400E2530 (NvmeAdapterFabricControllerUpdateNamespace.c)
 *     NvmeAdapterStartFabricControllerNamespaces @ 0x1400E7E14 (NvmeAdapterStartFabricControllerNamespaces.c)
 *     NvmeNamespaceDeleteDeviceIrp @ 0x1400FD7E8 (NvmeNamespaceDeleteDeviceIrp.c)
 * Callees:
 *     NvmeNamespaceDeleteErrorRecoveryContext @ 0x1400FDBB8 (NvmeNamespaceDeleteErrorRecoveryContext.c)
 *     NvmeNamespaceDeleteIoQueue @ 0x1400FDC1C (NvmeNamespaceDeleteIoQueue.c)
 *     NvmeNamespaceDeleteIoQueue2 @ 0x1400FDD1C (NvmeNamespaceDeleteIoQueue2.c)
 *     NvmeNamespaceTelemetryDelete @ 0x140113F2C (NvmeNamespaceTelemetryDelete.c)
 *     NvmeNamespaceTerminateSystemThread @ 0x140114E48 (NvmeNamespaceTerminateSystemThread.c)
 *     NvmeNamespaceUninitializeIoTracking @ 0x140114E90 (NvmeNamespaceUninitializeIoTracking.c)
 *     NvmeControllerFreeExtendedCommand @ 0x1401293D8 (NvmeControllerFreeExtendedCommand.c)
 *     NvmeNamespacePowerUninitialize @ 0x140134500 (NvmeNamespacePowerUninitialize.c)
 */

void __fastcall NvmeControllerDeleteNvmeNamespace(_QWORD *a1)
{
  __int64 v2; // rcx
  void *v3; // rcx
  __int64 v4; // rdx
  struct _IO_WORKITEM *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v8; // rcx

  NvmeNamespaceTerminateSystemThread(*a1);
  v2 = *a1;
  if ( FeatureFixFUAForReadIoPerf )
    NvmeNamespaceDeleteIoQueue2(v2);
  else
    NvmeNamespaceDeleteIoQueue(v2);
  NvmeNamespaceDeleteErrorRecoveryContext(*a1);
  NvmeNamespaceTelemetryDelete(*a1);
  v3 = *(void **)(*(_QWORD *)(*a1 + 128LL) + 16LL);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x57506152u);
    *(_QWORD *)(*(_QWORD *)(*a1 + 128LL) + 16LL) = 0LL;
  }
  if ( FeatureFixFUAForReadIoPerf )
    NvmeNamespaceUninitializeIoTracking(*a1);
  NvmeNamespacePowerUninitialize(*a1);
  v4 = *(_QWORD *)(*a1 + 528LL);
  if ( v4 )
  {
    NvmeControllerFreeExtendedCommand(*(_QWORD *)(*a1 + 16LL), v4);
    *(_QWORD *)(*a1 + 528LL) = 0LL;
  }
  v5 = *(struct _IO_WORKITEM **)(*a1 + 536LL);
  if ( v5 )
  {
    IoFreeWorkItem(v5);
    *(_QWORD *)(*a1 + 536LL) = 0LL;
  }
  v6 = *(void **)(*a1 + 184LL);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0x52436152u);
    *(_QWORD *)(*a1 + 184LL) = 0LL;
  }
  v7 = *(void **)(*a1 + 176LL);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0x52436152u);
    *(_QWORD *)(*a1 + 176LL) = 0LL;
  }
  v8 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(*a1 + 120LL);
  if ( v8 )
  {
    ExFreeCacheAwareRundownProtection(v8);
    *(_QWORD *)(*a1 + 120LL) = 0LL;
  }
  IoDeleteDevice(*(PDEVICE_OBJECT *)(*a1 + 8LL));
  *a1 = 0LL;
}
