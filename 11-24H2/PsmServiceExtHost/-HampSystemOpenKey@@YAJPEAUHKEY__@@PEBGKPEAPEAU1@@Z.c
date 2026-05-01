/*
 * XREFs of ?HampSystemOpenKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180060B14
 * Callers:
 *     ?HampUtilQueryQuiesceTimeouts@@YAXPEAK0@Z @ 0x180037AA4 (-HampUtilQueryQuiesceTimeouts@@YAXPEAK0@Z.c)
 *     ?HampUtilQueryDesktopWindowCloseTimeout@@YAXPEAK@Z @ 0x18006F848 (-HampUtilQueryDesktopWindowCloseTimeout@@YAXPEAK@Z.c)
 *     ?HampUtilQueryTerminateTimeouts@@YAXPEAK00@Z @ 0x18007F4D0 (-HampUtilQueryTerminateTimeouts@@YAXPEAK00@Z.c)
 *     ?RmpGetResourceManagerRegistryOverrides@@YAJPEAU_RM_RUNTIME_CONFIGURATION@@0@Z @ 0x180086178 (-RmpGetResourceManagerRegistryOverrides@@YAJPEAU_RM_RUNTIME_CONFIGURATION@@0@Z.c)
 *     ?InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x180086AC8 (-InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall HampSystemOpenKey(HKEY a1, const unsigned __int16 *a2, REGSAM a3, HKEY *phkResult)
{
  LSTATUS result; // eax

  result = RegOpenKeyExW(a1, a2, 0, a3, phkResult);
  if ( result > 0 )
    return (unsigned __int16)result | 0xC0070000;
  return result;
}
