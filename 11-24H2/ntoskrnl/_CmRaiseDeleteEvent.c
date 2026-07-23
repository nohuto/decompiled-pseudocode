/*
 * XREFs of _CmRaiseDeleteEvent @ 0x14081CA00
 * Callers:
 *     _CmDeleteDeviceInterfaceWorker @ 0x140818ED8 (_CmDeleteDeviceInterfaceWorker.c)
 *     _CmDeleteInstallerClassWorker @ 0x1408192B0 (_CmDeleteInstallerClassWorker.c)
 *     _CmDeleteInterfaceClassWorker @ 0x140819658 (_CmDeleteInterfaceClassWorker.c)
 *     _CmDeleteDeviceContainerWorker @ 0x14081A19C (_CmDeleteDeviceContainerWorker.c)
 *     _CmDeleteDevicePanelWorker @ 0x14081D60C (_CmDeleteDevicePanelWorker.c)
 *     _CmDeleteDeviceWorker @ 0x1409AA048 (_CmDeleteDeviceWorker.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpObjectRaiseDeleteEvent @ 0x14081CB1C (_PnpObjectRaiseDeleteEvent.c)
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x1409C4C50 (_CmMapCmObjectTypeToPnpObjectType.c)
 */

__int64 __fastcall CmRaiseDeleteEvent(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // eax
  __int64 v6; // rdx
  __int64 result; // rax

  v5 = CmMapCmObjectTypeToPnpObjectType(a3);
  PnpObjectRaiseDeleteEvent(a1, v6, v5);
  result = *(_QWORD *)(a1 + 512);
  if ( result )
    return guard_dispatch_icall_no_overrides(a1, a2);
  return result;
}
