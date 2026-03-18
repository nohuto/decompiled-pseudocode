/*
 * XREFs of _CmRaiseCreateEvent @ 0x1409D440C
 * Callers:
 *     _CmCreateInstallerClassWorker @ 0x140817DE0 (_CmCreateInstallerClassWorker.c)
 *     _CmCreateDevicePanelWorker @ 0x14081C920 (_CmCreateDevicePanelWorker.c)
 *     _CmCreateDeviceInterfaceWorker @ 0x1409D3CA4 (_CmCreateDeviceInterfaceWorker.c)
 *     _CmCreateInterfaceClassWorker @ 0x1409D3F8C (_CmCreateInterfaceClassWorker.c)
 *     _CmCreateDeviceWorker @ 0x1409D4358 (_CmCreateDeviceWorker.c)
 *     _CmCreateDeviceContainerWorker @ 0x140A54D7C (_CmCreateDeviceContainerWorker.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x1409D4E20 (_CmMapCmObjectTypeToPnpObjectType.c)
 *     _PnpObjectRaiseCreateEvent @ 0x1409D4F50 (_PnpObjectRaiseCreateEvent.c)
 */

__int64 __fastcall CmRaiseCreateEvent(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 result; // rax

  v6 = CmMapCmObjectTypeToPnpObjectType(a3);
  PnpObjectRaiseCreateEvent(a1, v7, v6, v8);
  result = *(_QWORD *)(a1 + 512);
  if ( result )
    return guard_dispatch_icall_no_overrides(a1, a2, a3, 2LL);
  return result;
}
