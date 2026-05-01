/*
 * XREFs of HamRpcSrvConnectFullTrust @ 0x180081A00
 * Callers:
 *     <none>
 * Callees:
 *     ?HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001D92C (-HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18003C080 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     CempRpcQueryClientInformation @ 0x18003E148 (CempRpcQueryClientInformation.c)
 *     ?HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18003E510 (-HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_.c)
 *     _tlgKeywordOn @ 0x1800574C0 (_tlgKeywordOn.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall HamRpcSrvConnectFullTrust(
        RPC_BINDING_HANDLE ClientBinding,
        struct _HAM_CLIENT_CONTEXT **a2,
        _QWORD *a3)
{
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _HAM_CLIENT_CONTEXT *v10; // rcx
  __int64 v12; // [rsp+38h] [rbp-81h]
  __int64 v13; // [rsp+40h] [rbp-79h]
  unsigned int v14; // [rsp+60h] [rbp-59h] BYREF
  int TokenInformation; // [rsp+64h] [rbp-55h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-51h] BYREF
  struct _HAM_CLIENT_CONTEXT *v17; // [rsp+70h] [rbp-49h] BYREF
  __int128 v18; // [rsp+78h] [rbp-41h] BYREF
  __int128 v19; // [rsp+88h] [rbp-31h]
  _BYTE DestinationSid[80]; // [rsp+A0h] [rbp-19h] BYREF

  memset_0(DestinationSid, 0, 0x44uLL);
  v14 = 0;
  TokenInformation = 0;
  v17 = 0LL;
  Handle = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v6 = CempRpcQueryClientInformation(ClientBinding, DestinationSid, &TokenInformation, &v14, 0LL, &Handle);
  if ( v6 >= 0 )
  {
    v6 = HamSrvConnect(
           (const wchar_t *)RmSvcGlobals + 1124,
           v14,
           (__int64)DestinationSid,
           (__int64)Handle,
           TokenInformation,
           3,
           0,
           v12,
           v13,
           (const unsigned __int16 **)&v18,
           (__int64)&v17);
    if ( v6 < 0 )
    {
      v10 = v17;
    }
    else
    {
      v10 = 0LL;
      *a2 = v17;
      v6 = 0;
      *a3 = *((_QWORD *)&v19 + 1);
    }
    if ( v10 )
      HamSrvDisconnect(v10);
  }
  else if ( (unsigned int)dword_1800E82B0 > 4 && tlgKeywordOn((__int64)&dword_1800E82B0, 8LL) )
  {
    v14 = v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      v7,
      byte_1800D612D,
      v8,
      v9,
      (__int64)&v14);
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v6;
}
