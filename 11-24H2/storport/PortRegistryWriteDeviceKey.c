/*
 * XREFs of PortRegistryWriteDeviceKey @ 0x1401BB6D4
 * Callers:
 *     RaidUnitSavePowerCycleCount @ 0x140038334 (RaidUnitSavePowerCycleCount.c)
 *     RaidAdapterHack @ 0x140039D6C (RaidAdapterHack.c)
 *     RaidUnitGetInitialTimestamp @ 0x14003D4A8 (RaidUnitGetInitialTimestamp.c)
 *     StorAdapterDeviceRegistryKeyProxy @ 0x140042470 (StorAdapterDeviceRegistryKeyProxy.c)
 *     RaDriverAddDevice @ 0x140045960 (RaDriverAddDevice.c)
 *     ShimGetMsftId @ 0x1400BDE8C (ShimGetMsftId.c)
 *     NvmeAdapterRetrieveRegistrySettings @ 0x14019C070 (NvmeAdapterRetrieveRegistrySettings.c)
 *     RaidInitializeAdapter @ 0x1401BE038 (RaidInitializeAdapter.c)
 * Callees:
 *     PortRegistryWriteWithHandle @ 0x1401BBECC (PortRegistryWriteWithHandle.c)
 */

__int64 __fastcall PortRegistryWriteDeviceKey(
        struct _DEVICE_OBJECT *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6)
{
  NTSTATUS v9; // ebx
  HANDLE Handle; // [rsp+30h] [rbp-18h] BYREF

  Handle = 0LL;
  v9 = IoOpenDeviceRegistryKey(a1, 1u, 0x20006u, &Handle);
  if ( v9 >= 0 )
  {
    v9 = PortRegistryWriteWithHandle(Handle, a2, a3, a4, a5, a6);
    ZwClose(Handle);
  }
  return (unsigned int)v9;
}
