/*
 * XREFs of _CmRaiseCreateEvent @ 0x1409C423C
 * Callers:
 *     _CmCreateInstallerClassWorker @ 0x140818520 (_CmCreateInstallerClassWorker.c)
 *     _CmCreateDevicePanelWorker @ 0x14081D060 (_CmCreateDevicePanelWorker.c)
 *     _CmCreateDeviceInterfaceWorker @ 0x1409C3AD4 (_CmCreateDeviceInterfaceWorker.c)
 *     _CmCreateInterfaceClassWorker @ 0x1409C3DBC (_CmCreateInterfaceClassWorker.c)
 *     _CmCreateDeviceWorker @ 0x1409C4188 (_CmCreateDeviceWorker.c)
 *     _CmCreateDeviceContainerWorker @ 0x140A4CCCC (_CmCreateDeviceContainerWorker.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x1409C4C50 (_CmMapCmObjectTypeToPnpObjectType.c)
 *     _PnpObjectRaiseCreateEvent @ 0x1409C4D80 (_PnpObjectRaiseCreateEvent.c)
 */

__int64 __fastcall CmRaiseCreateEvent(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 result; // rax

  v5 = CmMapCmObjectTypeToPnpObjectType(a3);
  PnpObjectRaiseCreateEvent(a1, v6, v5, v7);
  result = *(_QWORD *)(a1 + 512);
  if ( result )
    return guard_dispatch_icall_no_overrides(a1, a2);
  return result;
}
