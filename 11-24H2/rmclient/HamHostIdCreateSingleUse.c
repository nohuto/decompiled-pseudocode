/*
 * XREFs of HamHostIdCreateSingleUse @ 0x18000F3C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18001C200 (__security_check_cookie.c)
 */

__int64 __fastcall HamHostIdCreateSingleUse(__int64 a1)
{
  RPC_STATUS v2; // eax
  signed int Pointer; // ebx
  bool v4; // cc
  CLIENT_CALL_RETURN v6; // rax
  RPC_BINDING_HANDLE Binding; // [rsp+30h] [rbp-D8h] BYREF
  RPC_BINDING_HANDLE v8; // [rsp+38h] [rbp-D0h] BYREF
  int v9; // [rsp+40h] [rbp-C8h]
  RPC_BINDING_HANDLE_SECURITY_V1_W Security; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v11[2]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v12; // [rsp+80h] [rbp-88h]
  __int128 v13; // [rsp+90h] [rbp-78h]
  __int64 v14; // [rsp+A0h] [rbp-68h]
  RPC_BINDING_HANDLE_OPTIONS_V1 v15; // [rsp+A8h] [rbp-60h] BYREF
  RPC_BINDING_HANDLE_TEMPLATE_V1_W v16; // [rsp+B8h] [rbp-50h] BYREF

  v8 = 0LL;
  Binding = 0LL;
  memset(&v16, 0, sizeof(v16));
  *(_QWORD *)&v15.ComTimeout = 5LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  *(_QWORD *)(&Security.Version + 1) = 0LL;
  HIDWORD(Security.ServerPrincName) = 0;
  Security.AuthIdentity = 0LL;
  v16.Version = 1;
  v16.ProtocolSequence = 3;
  *(_QWORD *)&v15.Version = 0x100000001LL;
  v11[0] = 5LL;
  v11[1] = 0x300000001LL;
  Security.Version = 1;
  Security.AuthnLevel = 6;
  Security.AuthnSvc = 10;
  Security.SecurityQos = (RPC_SECURITY_QOS *)v11;
  v2 = RpcBindingCreateW(&v16, &Security, &v15, &Binding);
  Pointer = v2;
  v4 = v2 <= 0;
  if ( v2 || (v2 = RpcBindingBind(0LL, Binding, &unk_18001EB90), Pointer = v2, v4 = v2 <= 0, v2) )
  {
    if ( !v4 )
      Pointer = (unsigned __int16)v2 | 0xC0070000;
  }
  else
  {
    v8 = Binding;
    Binding = 0LL;
    Pointer = 0;
  }
  if ( Binding )
    RpcBindingFree(&Binding);
  if ( Pointer >= 0 )
  {
    Binding = 0LL;
    v6.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18001EBF0, 2u, 0LL, v8, a1).Pointer;
    Pointer = (signed int)v6.Pointer;
    Binding = (RPC_BINDING_HANDLE)v6.Simple;
    v9 = (int)v6.Pointer;
    if ( SLODWORD(v6.Simple) >= 0 )
      Pointer = 0;
  }
  if ( v8 )
    RpcBindingFree(&v8);
  return (unsigned int)Pointer;
}
