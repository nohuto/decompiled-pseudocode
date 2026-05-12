/*
 * XREFs of RaidAdapterReleaseResources @ 0x1401BD580
 * Callers:
 *     RaidAdapterSurpriseRemovalIrp @ 0x1401BB518 (RaidAdapterSurpriseRemovalIrp.c)
 *     RaidAdapterRemoveDeviceIrp @ 0x1401BB770 (RaidAdapterRemoveDeviceIrp.c)
 * Callees:
 *     StorFreeContiguousIoResources @ 0x140010B84 (StorFreeContiguousIoResources.c)
 *     RaFreeRaidResources @ 0x140010D60 (RaFreeRaidResources.c)
 *     RaidPnPPassToMiniPort @ 0x140010ED8 (RaidPnPPassToMiniPort.c)
 *     RaidUnlockContiguousPhysicalPagesList @ 0x140038CEC (RaidUnlockContiguousPhysicalPagesList.c)
 *     RaidFreeMappingList @ 0x14003C124 (RaidFreeMappingList.c)
 *     StorDeleteIoGateway @ 0x14003D820 (StorDeleteIoGateway.c)
 *     RaidAdapterStop @ 0x1400403C8 (RaidAdapterStop.c)
 *     RaidAdapterDeleteAsyncCallbacks @ 0x140042E9C (RaidAdapterDeleteAsyncCallbacks.c)
 *     WPP_SF_ @ 0x14005585C (WPP_SF_.c)
 *     RaAdapterDeregisterFromIdleDetection @ 0x140055D1C (RaAdapterDeregisterFromIdleDetection.c)
 *     StorFreeGatewayLockHandleArray @ 0x140055EDC (StorFreeGatewayLockHandleArray.c)
 *     StorpShutdownRegistryWatch @ 0x140070418 (StorpShutdownRegistryWatch.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

void __fastcall RaidAdapterReleaseResources(__int64 a1, __int64 a2)
{
  unsigned int v3; // edx
  struct _IO_WORKITEM *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  __int64 v8; // rcx
  unsigned int v9; // edi
  unsigned int i; // edi
  __int64 v11; // rcx
  __int64 v12; // rdx
  union _LARGE_INTEGER Interval; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL);
  if ( *(_QWORD *)(a1 + 376) && (*(_BYTE *)(a1 + 108) & 0x40) != 0 )
    RaidPnPPassToMiniPort(*(_QWORD *)(a1 + 8), v3, 0LL, 0LL, 0);
  v4 = *(struct _IO_WORKITEM **)(a1 + 5680);
  if ( v4 )
  {
    IoFreeWorkItem(v4);
    *(_QWORD *)(a1 + 5680) = 0LL;
  }
  RaAdapterDeregisterFromIdleDetection(a1);
  v5 = *(void **)(a1 + 5368);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0x57506152u);
    *(_QWORD *)(a1 + 5368) = 0LL;
  }
  v6 = *(void **)(a1 + 5376);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0x504F6152u);
    *(_QWORD *)(a1 + 5376) = 0LL;
  }
  v7 = *(void **)(a1 + 5704);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0x504E6152u);
    *(_QWORD *)(a1 + 5704) = 0LL;
  }
  v8 = *(_QWORD *)(a1 + 6216);
  if ( v8 )
  {
    (*(void (__fastcall **)(_QWORD))(v8 + 24))(*(_QWORD *)(v8 + 8));
    ExFreePoolWithTag(*(PVOID *)(a1 + 6216), 0x4D4C6152u);
    *(_QWORD *)(a1 + 6216) = 0LL;
  }
  RaidAdapterDeleteAsyncCallbacks(a1);
  Interval.QuadPart = -10000000LL;
  KeDelayExecutionThread(0, 0, &Interval);
  RaidAdapterStop(a1);
  v9 = 0;
  while ( *(_DWORD *)(a1 + 4888) || *(_DWORD *)(a1 + 4128) )
  {
    if ( v9 < 0x32
      && WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x1Au,
        (__int64)&WPP_f9c5a744b2853f8434526ecbb453d058_Traceguids);
    }
    Interval.QuadPart = -1000000LL;
    KeDelayExecutionThread(0, 0, &Interval);
    if ( ++v9 >= 0x258 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x1Bu,
          (__int64)&WPP_f9c5a744b2853f8434526ecbb453d058_Traceguids);
      }
      break;
    }
  }
  for ( i = 0; i < *(_DWORD *)(a1 + 968); ++i )
    RaFreeRaidResources(*(_QWORD *)(a1 + 960) + 320LL * i, *(_QWORD *)(a1 + 8), *(_BYTE *)(a1 + 4370));
  *(_DWORD *)(a1 + 968) = 0;
  StorFreeGatewayLockHandleArray(a1);
  StorDeleteIoGateway(a1);
  RaidFreeMappingList((void **)(a1 + 952));
  RaidUnlockContiguousPhysicalPagesList(a1, 0LL);
  v11 = *(_QWORD *)(a1 + 6048);
  if ( v11 )
  {
    StorpShutdownRegistryWatch(v11);
    ExFreePoolWithTag(**(PVOID **)(a1 + 6048), 0x57526152u);
    ExFreePoolWithTag(*(PVOID *)(a1 + 6048), 0x57526152u);
    *(_QWORD *)(a1 + 6048) = 0LL;
  }
  v12 = *(_QWORD *)(a1 + 120);
  if ( v12 )
  {
    StorFreeContiguousIoResources(a1, v12);
    *(_DWORD *)(a1 + 128) &= ~2u;
    *(_QWORD *)(a1 + 120) = 0LL;
  }
}
