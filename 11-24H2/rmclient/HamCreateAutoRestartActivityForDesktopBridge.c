/*
 * XREFs of HamCreateAutoRestartActivityForDesktopBridge @ 0x18000DFD4
 * Callers:
 *     HamRegisterDesktopProcessWithAppContainerToken @ 0x18000D8B0 (HamRegisterDesktopProcessWithAppContainerToken.c)
 * Callees:
 *     __security_check_cookie @ 0x18001C200 (__security_check_cookie.c)
 */

__int64 __fastcall HamCreateAutoRestartActivityForDesktopBridge(__int64 a1, __int64 a2)
{
  RPC_STATUS v4; // eax
  signed int Pointer; // ebx
  bool v6; // cc
  CLIENT_CALL_RETURN v7; // rax
  RPC_BINDING_HANDLE Binding; // [rsp+30h] [rbp-E8h] BYREF
  RPC_BINDING_HANDLE v10; // [rsp+38h] [rbp-E0h] BYREF
  int v11; // [rsp+40h] [rbp-D8h]
  RPC_BINDING_HANDLE_SECURITY_V1_W Security; // [rsp+48h] [rbp-D0h] BYREF
  _QWORD v13[2]; // [rsp+70h] [rbp-A8h] BYREF
  __int128 v14; // [rsp+80h] [rbp-98h]
  __int128 v15; // [rsp+90h] [rbp-88h]
  __int64 v16; // [rsp+A0h] [rbp-78h]
  RPC_BINDING_HANDLE_OPTIONS_V1 v17; // [rsp+A8h] [rbp-70h] BYREF
  RPC_BINDING_HANDLE_TEMPLATE_V1_W v18; // [rsp+B8h] [rbp-60h] BYREF

  v10 = 0LL;
  Binding = 0LL;
  memset(&v18, 0, sizeof(v18));
  *(_QWORD *)&v17.ComTimeout = 5LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  *(_QWORD *)(&Security.Version + 1) = 0LL;
  HIDWORD(Security.ServerPrincName) = 0;
  Security.AuthIdentity = 0LL;
  v18.Version = 1;
  v18.ProtocolSequence = 3;
  *(_QWORD *)&v17.Version = 0x100000001LL;
  v13[0] = 5LL;
  v13[1] = 0x300000001LL;
  Security.Version = 1;
  Security.AuthnLevel = 6;
  Security.AuthnSvc = 10;
  Security.SecurityQos = (RPC_SECURITY_QOS *)v13;
  v4 = RpcBindingCreateW(&v18, &Security, &v17, &Binding);
  Pointer = v4;
  v6 = v4 <= 0;
  if ( v4 || (v4 = RpcBindingBind(0LL, Binding, &unk_18001EC50), Pointer = v4, v6 = v4 <= 0, v4) )
  {
    if ( !v6 )
      Pointer = (unsigned __int16)v4 | 0xC0070000;
  }
  else
  {
    v10 = Binding;
    Binding = 0LL;
    Pointer = 0;
  }
  if ( Binding )
    RpcBindingFree(&Binding);
  if ( Pointer >= 0 )
  {
    v7.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 6u, 0LL, v10, a1, a2, 0LL).Pointer;
    Pointer = (signed int)v7.Pointer;
    Binding = (RPC_BINDING_HANDLE)v7.Simple;
    v11 = (int)v7.Pointer;
    if ( SLODWORD(v7.Simple) >= 0 )
      Pointer = 0;
  }
  if ( v10 )
    RpcBindingFree(&v10);
  return (unsigned int)Pointer;
}
