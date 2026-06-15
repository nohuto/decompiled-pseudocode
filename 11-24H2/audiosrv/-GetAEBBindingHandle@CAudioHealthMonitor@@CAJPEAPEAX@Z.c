/*
 * XREFs of ?GetAEBBindingHandle@CAudioHealthMonitor@@CAJPEAPEAX@Z @ 0x1800B44B0
 * Callers:
 *     ?CollectLiveKernelDump@CAudioHealthMonitor@@AEAAJKPEBG@Z @ 0x1800B430C (-CollectLiveKernelDump@CAudioHealthMonitor@@AEAAJKPEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800A206C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall CAudioHealthMonitor::GetAEBBindingHandle(RPC_BINDING_HANDLE *Binding)
{
  unsigned int v2; // ebx
  unsigned int v4; // eax
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RPC_WSTR String; // [rsp+40h] [rbp+8h] BYREF

  if ( !Binding )
  {
    v2 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AA,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiohealthmonitor.cpp",
      (const char *)0x80070057LL);
    return v2;
  }
  *Binding = 0LL;
  String = 0LL;
  v4 = RpcStringBindingComposeW(
         0LL,
         (RPC_WSTR)L"ncalrpc",
         0LL,
         (RPC_WSTR)L"AudioEndpointBuilderClientRpc",
         0LL,
         &String);
  if ( v4 )
  {
    v5 = 438LL;
    goto LABEL_6;
  }
  v4 = RpcBindingFromStringBindingW(String, Binding);
  if ( v4 )
  {
    v5 = 439LL;
LABEL_6:
    v2 = wil::details::in1diag3::Return_Win32(
           retaddr,
           (void *)v5,
           (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiohealthmonitor.cpp",
           (const char *)v4);
    if ( String )
      RpcStringFreeW(&String);
    return v2;
  }
  if ( String )
    RpcStringFreeW(&String);
  return 0LL;
}
