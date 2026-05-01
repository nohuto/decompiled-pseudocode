/*
 * XREFs of HamRpcSrvRegisterDesktopBridgeProcess @ 0x1800385E0
 * Callers:
 *     <none>
 * Callees:
 *     ?HamSrvRegisterDesktopBridgeProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXK1@Z @ 0x180038F00 (-HamSrvRegisterDesktopBridgeProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXK1@Z.c)
 */

__int64 __fastcall HamRpcSrvRegisterDesktopBridgeProcess(__int64 a1, void *a2, unsigned int a3, void *a4)
{
  int v4; // ecx
  __int64 result; // rax

  v4 = HamSrvRegisterDesktopBridgeProcess((struct _RM_SERVICE_GLOBALS *)((char *)RmSvcGlobals + 2248), a2, a3, a4);
  result = 0LL;
  if ( v4 < 0 )
    return (unsigned int)v4;
  return result;
}
