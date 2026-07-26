/*
 * XREFs of ?ndisQueryReferenceBusInterface@@YAJPEAU_DEVICE_OBJECT@@PEAPEAUBUS_INTERFACE_REFERENCE@@@Z @ 0x1400747E0
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1401771E0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     ?ndisQueryDriverInterface@@YAJPEAU_DEVICE_OBJECT@@PEBU_GUID@@GGPEAU_INTERFACE@@@Z @ 0x1401370CC (-ndisQueryDriverInterface@@YAJPEAU_DEVICE_OBJECT@@PEBU_GUID@@GGPEAU_INTERFACE@@@Z.c)
 */

__int64 __fastcall ndisQueryReferenceBusInterface(PDEVICE_OBJECT DeviceObject, PVOID *a2)
{
  struct BUS_INTERFACE_REFERENCE *Pool2; // rax
  int DriverInterface; // edi

  Pool2 = (struct BUS_INTERFACE_REFERENCE *)ExAllocatePool2(64LL, 56LL, 1768047694LL);
  *a2 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  DriverInterface = ndisQueryDriverInterface(
                      DeviceObject,
                      &GUID_4747b320_62ce_11cf_a5d6_28db04c10000,
                      0x100u,
                      0x38u,
                      &Pool2->Interface);
  if ( DriverInterface < 0 )
  {
    ExFreePoolWithTag(*a2, 0);
    *a2 = 0LL;
  }
  return (unsigned int)DriverInterface;
}
