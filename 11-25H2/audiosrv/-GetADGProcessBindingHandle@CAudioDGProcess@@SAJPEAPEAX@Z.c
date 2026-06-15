/*
 * XREFs of ?GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z @ 0x1800569FC
 * Callers:
 *     ?CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ @ 0x180056638 (-CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ.c)
 *     ?s_adPublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x1800567C8 (-s_adPublishApoTelemetry@@YAJPEBGU_GUID@@@Z.c)
 *     s_adGetDeviceGraphWnfStateName @ 0x1800AEF50 (s_adGetDeviceGraphWnfStateName.c)
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800A5C5C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

int __fastcall CAudioDGProcess::GetADGProcessBindingHandle(RPC_BINDING_HANDLE *Binding)
{
  unsigned int v2; // eax
  unsigned int v4; // eax
  int v5; // ebx
  unsigned int v6; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RPC_WSTR StringBinding; // [rsp+40h] [rbp+8h] BYREF

  *Binding = 0LL;
  StringBinding = 0LL;
  v2 = RpcStringBindingComposeW(0LL, (RPC_WSTR)L"ncalrpc", 0LL, (RPC_WSTR)L"AudioDeviceGraph", 0LL, &StringBinding);
  if ( v2 )
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x28,
             (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
             (const char *)v2,
             v6);
  v4 = RpcBindingFromStringBindingW(StringBinding, Binding);
  if ( v4 )
    v5 = wil::details::in1diag3::Return_Win32(
           retaddr,
           (void *)0x2B,
           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
           (const char *)v4,
           v6);
  else
    v5 = 0;
  RpcStringFreeW(&StringBinding);
  return v5;
}
