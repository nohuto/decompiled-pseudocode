/*
 * XREFs of HamGetStateSnapshotForAumid @ 0x18000D5F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18001C200 (__security_check_cookie.c)
 */

__int64 __fastcall HamGetStateSnapshotForAumid(__int64 a1, void *a2, int a3, _BYTE *a4)
{
  RPC_STATUS v8; // eax
  signed int Pointer; // ebx
  RPC_STATUS v10; // eax
  ULONG v11; // eax
  CLIENT_CALL_RETURN v12; // rax
  _BYTE v14[8]; // [rsp+50h] [rbp-118h] BYREF
  RPC_BINDING_HANDLE Binding; // [rsp+58h] [rbp-110h] BYREF
  RPC_BINDING_HANDLE v16; // [rsp+60h] [rbp-108h] BYREF
  int v17; // [rsp+68h] [rbp-100h]
  _BYTE *v18; // [rsp+70h] [rbp-F8h]
  RPC_BINDING_HANDLE_SECURITY_V1_W Security; // [rsp+78h] [rbp-F0h] BYREF
  __int64 v20; // [rsp+A0h] [rbp-C8h] BYREF
  int v21; // [rsp+A8h] [rbp-C0h]
  int v22; // [rsp+ACh] [rbp-BCh]
  __int128 v23; // [rsp+B0h] [rbp-B8h]
  __int128 v24; // [rsp+C0h] [rbp-A8h]
  __int64 v25; // [rsp+D0h] [rbp-98h]
  RPC_BINDING_HANDLE_OPTIONS_V1 Options; // [rsp+D8h] [rbp-90h] BYREF
  RPC_BINDING_HANDLE_TEMPLATE_V1_W Template; // [rsp+E8h] [rbp-80h] BYREF

  v18 = a4;
  v14[0] = 0;
  v16 = 0LL;
  if ( RtlValidSid(a2) )
  {
    Binding = 0LL;
    memset(&Template, 0, sizeof(Template));
    *(_QWORD *)&Options.ComTimeout = 5LL;
    v23 = 0LL;
    v24 = 0LL;
    v25 = 0LL;
    *(_QWORD *)(&Security.Version + 1) = 0LL;
    HIDWORD(Security.ServerPrincName) = 0;
    Security.AuthIdentity = 0LL;
    Template.Version = 1;
    Template.ProtocolSequence = 3;
    Options.Version = 1;
    Options.Flags = 1;
    v20 = 5LL;
    v21 = 1;
    v22 = 3;
    Security.Version = 1;
    Security.AuthnLevel = 6;
    Security.AuthnSvc = 10;
    Security.SecurityQos = (RPC_SECURITY_QOS *)&v20;
    v8 = RpcBindingCreateW(&Template, &Security, &Options, &Binding);
    Pointer = v8;
    if ( v8 )
    {
      if ( v8 > 0 )
        Pointer = (unsigned __int16)v8 | 0xC0070000;
    }
    else
    {
      v10 = RpcBindingBind(0LL, Binding, &unk_18001EC50);
      Pointer = v10;
      if ( v10 )
      {
        if ( v10 > 0 )
          Pointer = (unsigned __int16)v10 | 0xC0070000;
      }
      else
      {
        v16 = Binding;
        Binding = 0LL;
        Pointer = 0;
      }
    }
    if ( Binding )
      RpcBindingFree(&Binding);
    if ( Pointer >= 0 )
    {
      v11 = RtlLengthSid(a2);
      Binding = 0LL;
      v12.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 0x16u, 0LL, v16, a1, a2, v11, a3, v14).Pointer;
      Pointer = (signed int)v12.Pointer;
      Binding = (RPC_BINDING_HANDLE)v12.Simple;
      v17 = (int)v12.Pointer;
      if ( SLODWORD(v12.Simple) >= 0 )
      {
        *a4 = v14[0];
        Pointer = 0;
      }
    }
  }
  else
  {
    Pointer = -1073741584;
  }
  if ( v16 )
    RpcBindingFree(&v16);
  return (unsigned int)Pointer;
}
