/*
 * XREFs of _PnpObjectRaiseDevicesChangeEvent @ 0x140AAC718
 * Callers:
 *     _CmRemoveDeviceFromContainer @ 0x14081AD60 (_CmRemoveDeviceFromContainer.c)
 *     _CmAddPanelDevice @ 0x14081CC0C (_CmAddPanelDevice.c)
 *     _CmRemovePanelDevice @ 0x14081E14C (_CmRemovePanelDevice.c)
 *     _CmAddDeviceToContainer @ 0x140A4C5C4 (_CmAddDeviceToContainer.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpContainerRaiseDevicesChangeEvent @ 0x140A7C6B0 (_PnpContainerRaiseDevicesChangeEvent.c)
 */

void __fastcall PnpObjectRaiseDevicesChangeEvent(__int64 a1, __int64 a2, int a3)
{
  if ( *(_QWORD *)(a1 + 496) )
  {
    if ( a3 == 5 )
      PnpContainerRaiseDevicesChangeEvent(a1, a2);
    else
      guard_dispatch_icall_no_overrides(a1, a2);
  }
}
