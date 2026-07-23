/*
 * XREFs of VfGetDmaAdapter @ 0x140B88940
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     IoGetDmaAdapter @ 0x14071DB60 (IoGetDmaAdapter.c)
 *     IoGetDevicePropertyData @ 0x1409C0320 (IoGetDevicePropertyData.c)
 *     VF_ASSERT_IRQL @ 0x140B86F40 (VF_ASSERT_IRQL.c)
 *     VF_FIND_INACTIVE_ADAPTER_AND_REMOVE @ 0x140B870C0 (VF_FIND_INACTIVE_ADAPTER_AND_REMOVE.c)
 *     VfIsPCIBus @ 0x140B89284 (VfIsPCIBus.c)
 *     ViHookDmaAdapter @ 0x140B8B3E8 (ViHookDmaAdapter.c)
 *     ViReleaseDmaAdapter @ 0x140B8BA1C (ViReleaseDmaAdapter.c)
 */

struct _DMA_ADAPTER *__fastcall VfGetDmaAdapter(
        PDEVICE_OBJECT PhysicalDeviceObject,
        struct _DEVICE_DESCRIPTION *DeviceDescription,
        PULONG NumberOfMapRegisters)
{
  __int64 v6; // rdx
  _LIST_ENTRY *v7; // rax
  int v8; // eax
  char v9; // bp
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rdi
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
      v7 = VF_FIND_INACTIVE_ADAPTER_AND_REMOVE((struct _LIST_ENTRY *)PhysicalDeviceObject);
      if ( !v7 )
        break;
      ViReleaseDmaAdapter((__int64)v7);
    }
  }
  if ( ViDoubleBufferDma && *NumberOfMapRegisters > 0x20 )
    *NumberOfMapRegisters = 32;
  v8 = guard_dispatch_icall_no_overrides(KeGetCurrentThread(), v6);
  if ( v8 < 0 )
  {
    if ( v8 != -1073741275 )
      return 0LL;
    v9 = 1;
  }
  else
  {
    v9 = 0;
  }
  v10 = guard_dispatch_icall_no_overrides(PhysicalDeviceObject, DeviceDescription);
  v11 = v10;
  if ( !v10 )
    return 0LL;
  v13 = ViHookDmaAdapter(
          v10,
          (_DWORD)DeviceDescription,
          *NumberOfMapRegisters,
          (_DWORD)PhysicalDeviceObject,
          retaddr,
          v9);
  if ( !v13 )
  {
    guard_dispatch_icall_no_overrides(v11, v12);
    return 0LL;
  }
  if ( PhysicalDeviceObject
    && IoGetDevicePropertyData(PhysicalDeviceObject, &DEVPKEY_Device_Capabilities, 0, 0, 4u, &Data, RequiredSize, &Type) >= 0
    && (Data & 0x400) != 0 )
  {
    *(_BYTE *)(v13 + 75) = 1;
  }
  return (struct _DMA_ADAPTER *)(v13 + 16);
}
