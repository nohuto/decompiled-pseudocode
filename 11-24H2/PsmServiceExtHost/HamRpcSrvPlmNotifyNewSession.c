/*
 * XREFs of HamRpcSrvPlmNotifyNewSession @ 0x18006D720
 * Callers:
 *     <none>
 * Callees:
 *     CempRpcQueryClientInformation @ 0x18003E148 (CempRpcQueryClientInformation.c)
 *     ?HamSrvPlmNotifyNewSession@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAEK@Z @ 0x18006D784 (-HamSrvPlmNotifyNewSession@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAEK@Z.c)
 */

__int64 __fastcall HamRpcSrvPlmNotifyNewSession(void *a1, unsigned __int8 *a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned int v6; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0;
  result = CempRpcQueryClientInformation(a1, 0LL, &v6, 0LL, 0LL, 0LL);
  if ( (int)result >= 0 )
    return HamSrvPlmNotifyNewSession((struct _RM_SERVICE_GLOBALS *)((char *)RmSvcGlobals + 2248), v6, a2, a3);
  return result;
}
