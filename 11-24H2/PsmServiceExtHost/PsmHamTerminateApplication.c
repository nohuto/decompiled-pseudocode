/*
 * XREFs of PsmHamTerminateApplication @ 0x180057670
 * Callers:
 *     <none>
 * Callees:
 *     ?HamSrvTerminateApplicationForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@Z @ 0x1800576A4 (-HamSrvTerminateApplicationForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASO.c)
 */

__int64 __fastcall PsmHamTerminateApplication(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  return HamSrvTerminateApplicationForBi((char *)RmSvcGlobals + 2248, a3, a1, a2, a4);
}
