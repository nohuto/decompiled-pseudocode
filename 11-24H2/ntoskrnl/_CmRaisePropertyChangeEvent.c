/*
 * XREFs of _CmRaisePropertyChangeEvent @ 0x1409C42C4
 * Callers:
 *     _CmSetInstallerClassRegPropWorker @ 0x140819A14 (_CmSetInstallerClassRegPropWorker.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1408B6E6C (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     _CmSetDeviceRegPropWorker @ 0x14097BFD0 (_CmSetDeviceRegPropWorker.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1408B6F54 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x1409C4C50 (_CmMapCmObjectTypeToPnpObjectType.c)
 *     _CmMapRegPropToPropertyKey @ 0x1409C4D28 (_CmMapRegPropToPropertyKey.c)
 */

__int64 __fastcall CmRaisePropertyChangeEvent(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  int v9; // eax
  __int64 v10; // r11
  __int64 result; // rax

  if ( CmMapRegPropToPropertyKey(a3, a5) )
  {
    v9 = CmMapCmObjectTypeToPnpObjectType(a3);
    PnpObjectRaisePropertyChangeEvent(a1, a2, v9, a4, 0LL, v10);
  }
  result = *(_QWORD *)(a1 + 512);
  if ( result )
    return guard_dispatch_icall_no_overrides(a1, a2);
  return result;
}
