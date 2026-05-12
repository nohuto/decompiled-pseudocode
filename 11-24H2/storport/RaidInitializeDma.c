/*
 * XREFs of RaidInitializeDma @ 0x140183F38
 * Callers:
 *     RaidAdapterCompleteInitialization @ 0x140037B0C (RaidAdapterCompleteInitialization.c)
 *     RaidInitializePerfOpts @ 0x140041BFC (RaidInitializePerfOpts.c)
 *     NVMeGetUncachedExtensionEx @ 0x140072684 (NVMeGetUncachedExtensionEx.c)
 *     NvmeControllerAllocateInternalBufferAllocation @ 0x1400728A8 (NvmeControllerAllocateInternalBufferAllocation.c)
 *     StorPortGetUncachedExtension @ 0x140073D40 (StorPortGetUncachedExtension.c)
 *     NvmeAdapterCompleteInitialization @ 0x1400CD5A8 (NvmeAdapterCompleteInitialization.c)
 * Callees:
 *     RaidAreDriversDmarCompatible @ 0x14006B06C (RaidAreDriversDmarCompatible.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall RaidInitializeDma(__int64 a1, struct _DEVICE_OBJECT *a2, __int64 a3, __int64 a4, char a5)
{
  bool v9; // si
  int v10; // edx
  unsigned int Version; // r8d
  int v12; // eax
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  unsigned int DmaAddressWidth; // ecx
  unsigned int v17; // edx
  struct _DMA_ADAPTER *DmaAdapter; // rax
  struct _DEVICE_DESCRIPTION DeviceDescription; // [rsp+20h] [rbp-50h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v9 = a5 || (*(_DWORD *)(a3 + 220) & 8) != 0;
  memset_0(&DeviceDescription, 0, sizeof(DeviceDescription));
  v10 = 2;
  if ( v9 )
  {
    DeviceDescription.DmaRequestLine = 0;
    Version = 3;
    DeviceDescription.DeviceAddress.QuadPart = 0LL;
    v12 = 3;
    DeviceDescription.Version = 3;
  }
  else
  {
    Version = DeviceDescription.Version;
    DeviceDescription.DemandMode = *(_BYTE *)(a3 + 88);
    DeviceDescription.Dma32BitAddresses = *(_BYTE *)(a3 + 87);
    DeviceDescription.DmaSpeed = *(_DWORD *)(a3 + 44);
    v12 = 2;
  }
  *(_DWORD *)(a1 + 28) = v12;
  v13 = *(unsigned __int8 *)(a3 + 144);
  DeviceDescription.DmaChannel = *(_DWORD *)(a3 + 32);
  DeviceDescription.InterfaceType = *(_DWORD *)(a3 + 8);
  DeviceDescription.BusNumber = *(_DWORD *)(a3 + 4);
  DeviceDescription.DmaWidth = *(_DWORD *)(a3 + 40);
  DeviceDescription.ScatterGather = *(_BYTE *)(a3 + 81);
  DeviceDescription.Master = *(_BYTE *)(a3 + 82);
  DeviceDescription.DmaPort = *(_DWORD *)(a3 + 36);
  DeviceDescription.MaximumLength = *(_DWORD *)(a3 + 24);
  DeviceDescription.AutoInitialize = 0;
  v14 = v13 - 1;
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( v15 && (unsigned int)(v15 - 1) >= 2 )
    {
      *(_DWORD *)(a1 + 24) = 1;
      if ( v9 )
      {
        DmaAddressWidth = 32;
LABEL_19:
        DeviceDescription.DmaAddressWidth = DmaAddressWidth;
        goto LABEL_22;
      }
      DeviceDescription.Dma64BitAddresses = 0;
      goto LABEL_21;
    }
    v10 = 3;
  }
  *(_DWORD *)(a1 + 24) = v10;
  if ( v9 )
  {
    DmaAddressWidth = 64;
    goto LABEL_19;
  }
  DeviceDescription.Dma64BitAddresses = 1;
LABEL_21:
  DmaAddressWidth = DeviceDescription.DmaAddressWidth;
LABEL_22:
  if ( Version == 3 && (*(_DWORD *)(a3 + 220) & 0x40) != 0 )
  {
    v17 = *(unsigned __int8 *)(a3 + 198);
    if ( (unsigned __int8)(v17 - 1) <= 0x3Fu )
    {
      if ( DmaAddressWidth > v17 )
        DmaAddressWidth = *(unsigned __int8 *)(a3 + 198);
      DeviceDescription.DmaAddressWidth = DmaAddressWidth;
    }
  }
  DmaAdapter = IoGetDmaAdapter(a2, &DeviceDescription, (PULONG)(a1 + 12));
  *(_QWORD *)a1 = DmaAdapter;
  if ( !DmaAdapter )
    return 3221225626LL;
  *(_BYTE *)(a1 + 8) = RaidAreDriversDmarCompatible(a2);
  return 0LL;
}
