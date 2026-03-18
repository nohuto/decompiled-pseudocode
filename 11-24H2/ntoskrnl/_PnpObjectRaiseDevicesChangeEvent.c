/*
 * XREFs of _PnpObjectRaiseDevicesChangeEvent @ 0x140AB17A8
 * Callers:
 *     _CmRemoveDeviceFromContainer @ 0x14081A620 (_CmRemoveDeviceFromContainer.c)
 *     _CmAddPanelDevice @ 0x14081C4CC (_CmAddPanelDevice.c)
 *     _CmRemovePanelDevice @ 0x14081DA0C (_CmRemovePanelDevice.c)
 *     _CmAddDeviceToContainer @ 0x140A54674 (_CmAddDeviceToContainer.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpContainerRaiseDevicesChangeEvent @ 0x140A81DB8 (_PnpContainerRaiseDevicesChangeEvent.c)
 */

void __fastcall PnpObjectRaiseDevicesChangeEvent(__int64 a1, __int64 a2, __int64 a3)
{
  if ( *(_QWORD *)(a1 + 496) )
  {
    if ( (_DWORD)a3 == 5 )
    {
      PnpContainerRaiseDevicesChangeEvent(a1, a2);
    }
    else
    {
      if ( (_DWORD)a3 == 6 )
        a3 = 6LL;
      guard_dispatch_icall_no_overrides(a1, a2, a3, 5LL);
    }
  }
}
