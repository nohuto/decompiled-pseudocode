/*
 * XREFs of ImpRpcConnect @ 0x14013469C
 * Callers:
 *     ImSessionStart @ 0x140133EB4 (ImSessionStart.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 ImpRpcConnect()
{
  __int64 InputMonitorSessionState; // r14
  _QWORD *v1; // rsi
  RPC_BINDING_HANDLE *v2; // r14
  RPC_STATUS v3; // eax
  CLIENT_CALL_RETURN v4; // rbx
  bool v5; // cc
  RPC_BINDING_HANDLE Binding; // [rsp+38h] [rbp-E0h] BYREF
  __int64 v8; // [rsp+40h] [rbp-D8h] BYREF
  CLIENT_CALL_RETURN v9; // [rsp+48h] [rbp-D0h]
  RPC_BINDING_HANDLE *v10; // [rsp+50h] [rbp-C8h]
  __int64 v11; // [rsp+58h] [rbp-C0h]
  RPC_BINDING_HANDLE_SECURITY_V1_W Security; // [rsp+60h] [rbp-B8h] BYREF
  _DWORD v13[4]; // [rsp+88h] [rbp-90h] BYREF
  __int128 v14; // [rsp+98h] [rbp-80h]
  PSID SeLocalSystemSid; // [rsp+A8h] [rbp-70h]
  __int128 v16; // [rsp+B0h] [rbp-68h]
  RPC_BINDING_HANDLE_TEMPLATE_V1_W Template; // [rsp+C0h] [rbp-58h] BYREF
  RPC_BINDING_HANDLE_OPTIONS_V1 Options; // [rsp+F8h] [rbp-20h] BYREF

  *(&Security.Version + 1) = 0;
  InputMonitorSessionState = W32GetInputMonitorSessionState();
  if ( !InputMonitorSessionState )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v1 = (_QWORD *)(InputMonitorSessionState + 8);
  v11 = InputMonitorSessionState + 8;
  if ( *(_QWORD *)(InputMonitorSessionState + 8) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v2 = (RPC_BINDING_HANDLE *)(InputMonitorSessionState + 16);
  v10 = v2;
  if ( *v2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v8 = 0LL;
  Binding = 0LL;
  *(_QWORD *)(&Template.ProtocolSequence + 1) = 0LL;
  HIDWORD(Template.NetworkAddress) = 0;
  Template.u1.Reserved = 0LL;
  *(_QWORD *)(&Security.Version + 1) = 0LL;
  HIDWORD(Security.ServerPrincName) = 0;
  Security.AuthIdentity = 0LL;
  v14 = 0LL;
  v16 = 0LL;
  Options.CallTimeout = 0;
  Template.Version = 1;
  Template.Flags = 1;
  Template.ProtocolSequence = 3;
  Template.StringEndpoint = L"imsfk";
  Template.ObjectUuid = (UUID)xmmword_14024E3E4;
  v13[0] = 5;
  v13[2] = 0;
  v13[3] = 3;
  SeLocalSystemSid = SeExports->SeLocalSystemSid;
  v13[1] = 17;
  Security.Version = 1;
  Security.AuthnLevel = 6;
  Security.AuthnSvc = 20;
  Security.SecurityQos = (RPC_SECURITY_QOS *)v13;
  Options.Version = 1;
  Options.Flags = 2;
  Options.ComTimeout = 5;
  v3 = RpcBindingCreateW(&Template, &Security, &Options, &Binding);
  LODWORD(v4.Pointer) = v3;
  v5 = v3 <= 0;
  if ( v3 || (v3 = RpcBindingBind(0LL, Binding, &unk_14024E3E0), LODWORD(v4.Pointer) = v3, v5 = v3 <= 0, v3) )
  {
    if ( !v5 )
      LODWORD(v4.Pointer) = (unsigned __int16)v3 | 0xC0070000;
  }
  else
  {
    v9.Simple = 0LL;
    v4.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 2u, 0LL, Binding, &v8).Pointer;
    v9.Pointer = v4.Pointer;
    if ( SLODWORD(v4.Simple) >= 0 )
    {
      *v1 = v8;
      *v2 = Binding;
      Binding = 0LL;
      v8 = 0LL;
    }
  }
  if ( v8 )
    NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 1u, 0LL, &v8);
  if ( Binding )
    RpcBindingFree(&Binding);
  return LODWORD(v4.Pointer);
}
