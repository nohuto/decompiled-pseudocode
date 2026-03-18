/*
 * XREFs of _CmRaiseDeleteEvent @ 0x14081C2C0
 * Callers:
 *     _CmDeleteDeviceInterfaceWorker @ 0x140818798 (_CmDeleteDeviceInterfaceWorker.c)
 *     _CmDeleteInstallerClassWorker @ 0x140818B70 (_CmDeleteInstallerClassWorker.c)
 *     _CmDeleteInterfaceClassWorker @ 0x140818F18 (_CmDeleteInterfaceClassWorker.c)
 *     _CmDeleteDeviceContainerWorker @ 0x140819A5C (_CmDeleteDeviceContainerWorker.c)
 *     _CmDeleteDevicePanelWorker @ 0x14081CECC (_CmDeleteDevicePanelWorker.c)
 *     _CmDeleteDeviceWorker @ 0x1409B2CB8 (_CmDeleteDeviceWorker.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpObjectRaiseDeleteEvent @ 0x14081C3DC (_PnpObjectRaiseDeleteEvent.c)
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x1409D4E20 (_CmMapCmObjectTypeToPnpObjectType.c)
 */

__int64 __fastcall CmRaiseDeleteEvent(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 result; // rax

  v6 = CmMapCmObjectTypeToPnpObjectType(a3);
  PnpObjectRaiseDeleteEvent(a1, v7, v6);
  result = *(_QWORD *)(a1 + 512);
  if ( result )
    return guard_dispatch_icall_no_overrides(a1, a2, a3, 3LL);
  return result;
}
