/*
 * XREFs of VfGetDmaAdapter @ 0x140B86940
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     IoGetDmaAdapter @ 0x14071FFD0 (IoGetDmaAdapter.c)
 *     IoGetDevicePropertyData @ 0x140A11F10 (IoGetDevicePropertyData.c)
 *     VF_ASSERT_IRQL @ 0x140B84F40 (VF_ASSERT_IRQL.c)
 *     VF_FIND_INACTIVE_ADAPTER_AND_REMOVE @ 0x140B850C0 (VF_FIND_INACTIVE_ADAPTER_AND_REMOVE.c)
 *     VfIsPCIBus @ 0x140B87284 (VfIsPCIBus.c)
 *     ViHookDmaAdapter @ 0x140B893E8 (ViHookDmaAdapter.c)
 *     ViReleaseDmaAdapter @ 0x140B89A1C (ViReleaseDmaAdapter.c)
 */

struct _DMA_ADAPTER *__fastcall VfGetDmaAdapter(
        PDEVICE_OBJECT PhysicalDeviceObject,
        struct _DEVICE_DESCRIPTION *DeviceDescription,
        PULONG NumberOfMapRegisters)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _LIST_ENTRY *v9; // rax
  int v10; // eax
  __int64 v11; // r9
  char v12; // bp
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // r8
  __int64 v18; // r9
  ULONG Type; // [rsp+40h] [rbp-28h] BYREF
  ULONG RequiredSize[3]; // [rsp+44h] [rbp-24h] BYREF
  __int64 retaddr; // [rsp+68h] [rbp+0h]
  int Data; // [rsp+88h] [rbp+20h] BYREF

  Data = 0;
  RequiredSize[0] = 0;
  Type = 0;
  if ( !ViVerifyDma || (unsigned int)VfIsPCIBus() )
    return IoGetDmaAdapter(PhysicalDeviceObject, DeviceDescription, NumberOfMapRegisters);
  if ( (MmVerifierData & 0x20000) == 0 )
    VF_ASSERT_IRQL(0);
  if ( PhysicalDeviceObject )
  {
    while ( 1 )
    {
      v9 = VF_FIND_INACTIVE_ADAPTER_AND_REMOVE((struct _LIST_ENTRY *)PhysicalDeviceObject);
      if ( !v9 )
        break;
      ViReleaseDmaAdapter((__int64)v9);
    }
  }
  if ( ViDoubleBufferDma && *NumberOfMapRegisters > 0x20 )
    *NumberOfMapRegisters = 32;
  v10 = guard_dispatch_icall_no_overrides(KeGetCurrentThread(), v6, v7, v8);
  if ( v10 < 0 )
  {
    if ( v10 != -1073741275 )
      return 0LL;
    v12 = 1;
  }
  else
  {
    v12 = 0;
  }
  v13 = guard_dispatch_icall_no_overrides(PhysicalDeviceObject, DeviceDescription, NumberOfMapRegisters, v11);
  v14 = v13;
  if ( !v13 )
    return 0LL;
  v16 = ViHookDmaAdapter(
          v13,
          (_DWORD)DeviceDescription,
          *NumberOfMapRegisters,
          (_DWORD)PhysicalDeviceObject,
          retaddr,
          v12);
  if ( !v16 )
  {
    guard_dispatch_icall_no_overrides(v14, v15, v17, v18);
    return 0LL;
  }
  if ( PhysicalDeviceObject
    && IoGetDevicePropertyData(PhysicalDeviceObject, &DEVPKEY_Device_Capabilities, 0, 0, 4u, &Data, RequiredSize, &Type) >= 0
    && (Data & 0x400) != 0 )
  {
    *(_BYTE *)(v16 + 75) = 1;
  }
  return (struct _DMA_ADAPTER *)(v16 + 16);
}
