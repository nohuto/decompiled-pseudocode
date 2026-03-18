/*
 * XREFs of _PnpObjectRaisePropertyChangeEvent @ 0x1408B95AC
 * Callers:
 *     _CmRemoveDeviceFromContainerWorker @ 0x14081A760 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmAddPanelDeviceWorker @ 0x14081C610 (_CmAddPanelDeviceWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x14081DB50 (_CmRemovePanelDeviceWorker.c)
 *     _CmSetInstallerClassMappedProperty @ 0x14081F7C4 (_CmSetInstallerClassMappedProperty.c)
 *     _CmSetInterfaceClassMappedProperty @ 0x14081FBDC (_CmSetInterfaceClassMappedProperty.c)
 *     _PnpSetObjectPropertyWorker @ 0x1408B8BB0 (_PnpSetObjectPropertyWorker.c)
 *     _CmSetDeviceMappedProperty @ 0x140995AA0 (_CmSetDeviceMappedProperty.c)
 *     _CmRaisePropertyChangeEvent @ 0x1409D4494 (_CmRaisePropertyChangeEvent.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpInterfaceClassRaisePropertyChangeEventWorker @ 0x14081C338 (_PnpInterfaceClassRaisePropertyChangeEventWorker.c)
 *     _PnpInterfaceRaisePropertyChangeEventWorker @ 0x1408B32A8 (_PnpInterfaceRaisePropertyChangeEventWorker.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1408B97F8 (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     _PnpInstallerClassRaisePropertyChangeEventWorker @ 0x140AB2EBC (_PnpInstallerClassRaisePropertyChangeEventWorker.c)
 */

__int64 __fastcall PnpObjectRaisePropertyChangeEvent(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 496) )
  {
    switch ( (_DWORD)a3 )
    {
      case 1:
        return PnpDeviceRaisePropertyChangeEventWorker(a1, a2, a4, a5, a6, *(_QWORD *)(a1 + 496));
      case 2:
        return PnpInstallerClassRaisePropertyChangeEventWorker(a1, a2, a4, a5, a6, *(_QWORD *)(a1 + 496));
      case 3:
        return PnpInterfaceRaisePropertyChangeEventWorker(a1, a2, a4, a5, a6);
      case 4:
        return PnpInterfaceClassRaisePropertyChangeEventWorker(a1, a2, a4, a5, a6, *(_QWORD *)(a1 + 496));
      default:
        return guard_dispatch_icall_no_overrides(a1, a2, a3, 4LL);
    }
  }
  return result;
}
