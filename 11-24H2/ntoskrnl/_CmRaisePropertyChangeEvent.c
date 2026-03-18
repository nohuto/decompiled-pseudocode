/*
 * XREFs of _CmRaisePropertyChangeEvent @ 0x1409D4494
 * Callers:
 *     _CmSetInstallerClassRegPropWorker @ 0x1408192D4 (_CmSetInstallerClassRegPropWorker.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1408B94C4 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     _CmSetDeviceRegPropWorker @ 0x140990F90 (_CmSetDeviceRegPropWorker.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1408B95AC (_PnpObjectRaisePropertyChangeEvent.c)
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x1409D4E20 (_CmMapCmObjectTypeToPnpObjectType.c)
 *     _CmMapRegPropToPropertyKey @ 0x1409D4EF8 (_CmMapRegPropToPropertyKey.c)
 */

__int64 __fastcall CmRaisePropertyChangeEvent(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  unsigned int v9; // eax
  __int64 v10; // r11
  __int64 result; // rax

  if ( CmMapRegPropToPropertyKey(a3, a5) )
  {
    v9 = CmMapCmObjectTypeToPnpObjectType(a3);
    PnpObjectRaisePropertyChangeEvent(a1, a2, v9, a4, 0LL, v10);
  }
  result = *(_QWORD *)(a1 + 512);
  if ( result )
    return guard_dispatch_icall_no_overrides(a1, a2, a3, 4LL);
  return result;
}
