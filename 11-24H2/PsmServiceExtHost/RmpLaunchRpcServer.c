/*
 * XREFs of RmpLaunchRpcServer @ 0x18006C200
 * Callers:
 *     RmpLaunchAllRpcServers @ 0x180073BFC (RmpLaunchAllRpcServers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpLaunchRpcServer(RPC_IF_HANDLE IfSpec, __int64 a2, void *a3, RPC_BINDING_VECTOR **a4)
{
  unsigned int v7; // ebx
  RPC_STATUS v8; // eax

  *a4 = 0LL;
  if ( (unsigned int)RpcServerRegisterIf3(IfSpec, 0LL, 0LL, 41LL, 1234, 0, 0LL, a2) )
  {
    v7 = -1073741823;
  }
  else
  {
    if ( a3 )
      v8 = RpcServerInqBindingsEx(a3, a4);
    else
      v8 = RpcServerInqBindings(a4);
    if ( !v8 && !RpcEpRegisterW(IfSpec, *a4, 0LL, 0LL) )
      return 0;
    v7 = -1073741823;
    RpcServerUnregisterIf(IfSpec, 0LL, 0);
  }
  if ( *a4 )
  {
    RpcBindingVectorFree(a4);
    *a4 = 0LL;
  }
  return v7;
}
