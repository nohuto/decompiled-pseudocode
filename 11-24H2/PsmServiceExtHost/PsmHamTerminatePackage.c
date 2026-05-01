/*
 * XREFs of PsmHamTerminatePackage @ 0x180043AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?HamSrvTerminatePackageForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@Z @ 0x18004354C (-HamSrvTerminatePackageForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@.c)
 */

__int64 __fastcall PsmHamTerminatePackage(void *a1, unsigned int a2, const unsigned __int16 *a3, unsigned int a4)
{
  return HamSrvTerminatePackageForBi((struct _RM_SERVICE_GLOBALS *)((char *)RmSvcGlobals + 2248), a3, a1, a2, a4);
}
