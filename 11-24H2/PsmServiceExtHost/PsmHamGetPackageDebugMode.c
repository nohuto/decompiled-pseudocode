/*
 * XREFs of PsmHamGetPackageDebugMode @ 0x18005D3B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PsmHamGetPackageDebugMode(unsigned __int8 *a1, unsigned int a2, char *a3)
{
  return HamSrvPackageGetDebugMode((struct _RM_SERVICE_GLOBALS *)((char *)RmSvcGlobals + 2248), a3, a1, a2);
}
