/*
 * XREFs of InitializeNvmeAdapter @ 0x1401BEFA0
 * Callers:
 *     RaDriverAddDevice @ 0x140045960 (RaDriverAddDevice.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaidDriverGetName @ 0x14003E03C (RaidDriverGetName.c)
 *     RaidAllocateDeviceProperty @ 0x140041B28 (RaidAllocateDeviceProperty.c)
 *     RaGetBusInterface @ 0x1400428EC (RaGetBusInterface.c)
 *     NvmeAdapterInitializeD3Configuration @ 0x14012E8F0 (NvmeAdapterInitializeD3Configuration.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 *     RaFindDriverInitData @ 0x140181008 (RaFindDriverInitData.c)
 *     RiAllocateMiniportDeviceExtension @ 0x140181048 (RiAllocateMiniportDeviceExtension.c)
 *     NvmeAdapterRetrieveRegistrySettings @ 0x14019C070 (NvmeAdapterRetrieveRegistrySettings.c)
 *     PortGetDriverParameters @ 0x1401B972C (PortGetDriverParameters.c)
 *     PortGetIoTimeoutValue @ 0x1401BD230 (PortGetIoTimeoutValue.c)
 */

__int64 __fastcall InitializeNvmeAdapter(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        PDEVICE_OBJECT DeviceObject,
        __int128 *a6,
        unsigned int a7,
        int a8)
{
  __int64 v8; // rsi
  __int128 v11; // xmm0
  int BusInterface; // eax
  _QWORD *v13; // rdi
  int v14; // edx
  __int64 v15; // rbp
  _QWORD *DriverInitData; // rax
  __int64 result; // rax
  _BYTE *v18; // r14
  __int64 Pool; // rax
  __int64 v20; // rax
  int v21; // edx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int128 v24; // [rsp+20h] [rbp-38h] BYREF

  v8 = a1 + 168;
  v24 = 0LL;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a3;
  *(_QWORD *)(a1 + 32) = DeviceObject;
  *(_QWORD *)(a1 + 24) = a4;
  v11 = *a6;
  *(_DWORD *)(a1 + 80) = a7;
  *(_WORD *)(a1 + 984) = 0;
  *(_OWORD *)(a1 + 40) = v11;
  *(_QWORD *)(a1 + 168) = a1;
  BusInterface = RaGetBusInterface(DeviceObject);
  v13 = (_QWORD *)(a1 + 144);
  v14 = 0;
  if ( BusInterface != -1 )
    v14 = BusInterface;
  if ( v14 )
  {
    v15 = v8;
  }
  else
  {
    *v13 |= 0x10uLL;
    v15 = a1 + 168;
  }
  DriverInitData = RaFindDriverInitData(*(_QWORD *)(a1 + 16), v14);
  *(_QWORD *)(a1 + 400) = DriverInitData;
  if ( !DriverInitData )
    return 3221225486LL;
  v18 = (_BYTE *)(a1 + 144);
  if ( (DriverInitData[23] & 1) == 0 )
  {
    Pool = RaidAllocatePool(64LL, 144LL, 1447977298LL, *(_QWORD *)(a1 + 8));
    *(_QWORD *)(a1 + 584) = Pool;
    if ( !Pool )
      return 3221225495LL;
    *(_BYTE *)(Pool + 16) = 0;
    memset_0((void *)(Pool + 24), 0, 0x40uLL);
    v20 = *(_QWORD *)(a1 + 584);
    v18 = (_BYTE *)(a1 + 144);
    *(_QWORD *)(v20 + 88) = 0LL;
    *(_QWORD *)(v20 + 96) = 0LL;
    v8 = v15;
  }
  v21 = *(_DWORD *)(*(_QWORD *)(a1 + 400) + 4LL);
  *v13 |= 0x100uLL;
  *(_DWORD *)(a1 + 184) = v21;
  result = RiAllocateMiniportDeviceExtension(v8);
  if ( (int)result >= 0 )
  {
    PortGetDriverParameters(*(_QWORD *)(a1 + 16) + 40LL, a7, (PVOID *)(a1 + 896));
    RaidDriverGetName(a3, (__int64)&v24);
    *(_QWORD *)(a1 + 1016) = *((_QWORD *)&v24 + 1);
    RaidAllocateDeviceProperty(DeviceObject, v22, (_QWORD *)(a1 + 1024));
    NvmeAdapterRetrieveRegistrySettings(a1);
    if ( a8 == 20 )
      *v13 |= 1uLL;
    v23 = *(_QWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 1092) = 0;
    PortGetIoTimeoutValue((struct _UNICODE_STRING *)(v23 + 40), (_DWORD *)(a1 + 1092));
    if ( !*(_DWORD *)(a1 + 1092) )
      *(_DWORD *)(a1 + 1092) = (*v18 & 1) != 0 ? 300 : 10;
    KeInitializeDpc(
      (PRKDPC)(*(_QWORD *)(a1 + 8) + 200LL),
      (PKDEFERRED_ROUTINE)NvmeAdapterDpcRoutine,
      *(PVOID *)(a1 + 8));
    NvmeAdapterInitializeD3Configuration((_QWORD *)a1);
    return 0LL;
  }
  return result;
}
