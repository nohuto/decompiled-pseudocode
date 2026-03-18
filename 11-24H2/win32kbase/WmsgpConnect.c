/*
 * XREFs of WmsgpConnect @ 0x1402C4794
 * Callers:
 *     _RegisterLogonProcess @ 0x140167C90 (_RegisterLogonProcess.c)
 * Callees:
 *     StringCchPrintfW @ 0x14014B074 (StringCchPrintfW.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     RtlReadULongFromUser @ 0x1402C306C (RtlReadULongFromUser.c)
 */

__int64 __fastcall WmsgpConnect(unsigned int *a1, int a2, RPC_BINDING_HANDLE *a3)
{
  unsigned int v6; // ebx
  int ULongFromUser; // ebx
  unsigned int v8; // eax
  RPC_BINDING_HANDLE_SECURITY_V1_W Security; // [rsp+40h] [rbp-1F8h] BYREF
  __int128 v12; // [rsp+68h] [rbp-1D0h] BYREF
  __int128 v13; // [rsp+78h] [rbp-1C0h]
  __int128 v14; // [rsp+88h] [rbp-1B0h]
  RPC_BINDING_HANDLE_TEMPLATE_V1_W Template; // [rsp+98h] [rbp-1A0h] BYREF
  RPC_BINDING_HANDLE_OPTIONS_V1 Options; // [rsp+D0h] [rbp-168h] BYREF
  wchar_t pszDest[152]; // [rsp+E0h] [rbp-158h] BYREF

  *(_OWORD *)&Template.Version = xmmword_140270E78;
  memset(&Template.NetworkAddress, 0, 40);
  Options = (RPC_BINDING_HANDLE_OPTIONS_V1)xmmword_140270E68;
  v12 = xmmword_140259128;
  v13 = xmmword_140259138;
  v14 = *(_OWORD *)&off_140259148;
  *(_QWORD *)&Security.Version = 1LL;
  Security.ServerPrincName = 0LL;
  Security.AuthnLevel = 6;
  Security.AuthnSvc = 10;
  Security.AuthIdentity = 0LL;
  Security.SecurityQos = (RPC_SECURITY_QOS *)&v12;
  if ( a2 == -1 )
  {
    v6 = -1073741822;
  }
  else
  {
    ULongFromUser = RtlReadULongFromUser(a1);
    v8 = RtlReadULongFromUser(a1 + 1);
    StringCchPrintfW(
      pszDest,
      0x91uLL,
      L"WMsgKRpc%X%X%X",
      v8,
      ULongFromUser,
      a2,
      0,
      a3,
      *(_QWORD *)&Security.Version,
      Security.ServerPrincName,
      *(_QWORD *)&Security.AuthnLevel,
      Security.AuthIdentity,
      Security.SecurityQos,
      v12,
      v13,
      v14,
      *(_QWORD *)&Template.Version,
      *(_QWORD *)&Template.ProtocolSequence,
      Template.NetworkAddress,
      Template.StringEndpoint,
      Template.u1.Reserved,
      *(_QWORD *)&Template.ObjectUuid.Data1,
      *(_QWORD *)Template.ObjectUuid.Data4,
      *(_QWORD *)&Options.Version,
      *(_QWORD *)&Options.ComTimeout);
    Template.StringEndpoint = pszDest;
    v6 = RpcBindingCreateW(&Template, &Security, &Options, a3);
    if ( !v6 )
      v6 = RpcBindingBind(0LL, *a3, &unk_1402592B0);
  }
  if ( v6 && *a3 )
  {
    RpcBindingFree(a3);
    *a3 = 0LL;
  }
  return v6;
}
