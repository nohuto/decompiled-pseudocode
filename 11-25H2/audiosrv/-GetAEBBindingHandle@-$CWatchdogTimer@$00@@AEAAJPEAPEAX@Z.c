/*
 * XREFs of ?GetAEBBindingHandle@?$CWatchdogTimer@$00@@AEAAJPEAPEAX@Z @ 0x1800B11B4
 * Callers:
 *     ?OnTimer@?$CWatchdogTimer@$00@@AEAAXXZ @ 0x1800B1DB0 (-OnTimer@-$CWatchdogTimer@$00@@AEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800A5C5C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall CWatchdogTimer<1>::GetAEBBindingHandle(unsigned __int16 *a1, RPC_BINDING_HANDLE *a2)
{
  unsigned int v3; // ebx
  unsigned int v5; // eax
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RPC_WSTR String; // [rsp+40h] [rbp+8h] BYREF

  String = a1;
  if ( !a2 )
  {
    v3 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x115,
      (int)"avcore\\audiocore\\server\\inc\\WatchdogTimer.h",
      (const char *)0x80070057LL);
    return v3;
  }
  *a2 = 0LL;
  String = 0LL;
  v5 = RpcStringBindingComposeW(
         0LL,
         (RPC_WSTR)L"ncalrpc",
         0LL,
         (RPC_WSTR)L"AudioEndpointBuilderClientRpc",
         0LL,
         &String);
  if ( v5 )
  {
    v6 = 289LL;
    goto LABEL_6;
  }
  v5 = RpcBindingFromStringBindingW(String, a2);
  if ( v5 )
  {
    v6 = 290LL;
LABEL_6:
    v3 = wil::details::in1diag3::Return_Win32(
           retaddr,
           (void *)v6,
           (__int64)"avcore\\audiocore\\server\\inc\\WatchdogTimer.h",
           (const char *)v5);
    if ( String )
      RpcStringFreeW(&String);
    return v3;
  }
  if ( String )
    RpcStringFreeW(&String);
  return 0LL;
}
