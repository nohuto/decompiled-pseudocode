/*
 * XREFs of NvmeAdapterReleaseResources @ 0x14019B0CC
 * Callers:
 *     NvmeAdapterRemoveDeviceIrp @ 0x14019B714 (NvmeAdapterRemoveDeviceIrp.c)
 *     NvmeAdapterSurpriseRemovalIrp @ 0x14019DCB8 (NvmeAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     StorFreeEventNotificationResources @ 0x140066A8C (StorFreeEventNotificationResources.c)
 *     StorpShutdownRegistryWatch @ 0x140070418 (StorpShutdownRegistryWatch.c)
 *     NvmeAdapterDeleteAsyncCallbacks @ 0x1400CE3F0 (NvmeAdapterDeleteAsyncCallbacks.c)
 *     NvmeAdapterStop @ 0x1400D901C (NvmeAdapterStop.c)
 *     NvmePnPPassToMiniPort @ 0x1400DC2FC (NvmePnPPassToMiniPort.c)
 *     NvmePnPPassToStorMQMiniPort @ 0x1400DC604 (NvmePnPPassToStorMQMiniPort.c)
 *     NvmeAdapterDeregisterFromPoFx @ 0x14012DF44 (NvmeAdapterDeregisterFromPoFx.c)
 */

void __fastcall NvmeAdapterReleaseResources(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  int v5; // edx
  __int64 v6; // rcx
  void *v7; // rcx
  __int64 v8; // rcx
  union _LARGE_INTEGER Interval; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v5 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL);
  if ( *(_QWORD *)(a1 + 168)
    && (*(_BYTE *)(a1 + 144) & 0x40) != 0
    && (*(_DWORD *)(*(_QWORD *)(a1 + 400) + 184LL) & 0x40000000) == 0 )
  {
    v6 = *(_QWORD *)(a1 + 8);
    if ( (*(_BYTE *)(a1 + 416) & 0x40) != 0 )
      NvmePnPPassToStorMQMiniPort(v6, v5, a3);
    else
      NvmePnPPassToMiniPort(v6, v5, a3);
  }
  NvmeAdapterDeregisterFromPoFx(a1);
  v7 = *(void **)(*(_QWORD *)(a1 + 160) + 32LL);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0x57506152u);
    *(_QWORD *)(*(_QWORD *)(a1 + 160) + 32LL) = 0LL;
  }
  NvmeAdapterDeleteAsyncCallbacks(a1);
  Interval.QuadPart = -10000000LL;
  KeDelayExecutionThread(0, 0, &Interval);
  NvmeAdapterStop(a1, 3);
  do
  {
    if ( !*(_DWORD *)(a1 + 1080) && !*(_DWORD *)(a1 + 1084) )
      break;
    Interval.QuadPart = -1000000LL;
    KeDelayExecutionThread(0, 0, &Interval);
    ++v3;
  }
  while ( v3 < 0x258 );
  v8 = *(_QWORD *)(a1 + 992);
  if ( v8 )
  {
    StorpShutdownRegistryWatch(v8);
    ExFreePoolWithTag(**(PVOID **)(a1 + 992), 0x57526152u);
    ExFreePoolWithTag(*(PVOID *)(a1 + 992), 0x57526152u);
    *(_QWORD *)(a1 + 992) = 0LL;
  }
  StorFreeEventNotificationResources(*(char **)(a1 + 1416));
  *(_QWORD *)(a1 + 1416) = 0LL;
}
