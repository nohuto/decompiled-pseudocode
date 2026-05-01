/*
 * XREFs of HamRpcSrvConnectSessionState @ 0x18003D600
 * Callers:
 *     <none>
 * Callees:
 *     ?HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001D92C (-HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18003C080 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     CempRpcQueryClientInformation @ 0x18003E148 (CempRpcQueryClientInformation.c)
 *     ?HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18003E510 (-HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_.c)
 *     _tlgKeywordOn @ 0x1800574C0 (_tlgKeywordOn.c)
 */

__int64 __fastcall HamRpcSrvConnectSessionState(void *a1, struct _HAM_CLIENT_CONTEXT **a2)
{
  int v3; // ebx
  struct _HAM_CLIENT_CONTEXT *v4; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // [rsp+28h] [rbp-48h]
  HANDLE Handle; // [rsp+60h] [rbp-10h] BYREF
  struct _HAM_CLIENT_CONTEXT *v11; // [rsp+68h] [rbp-8h]
  int TokenInformation; // [rsp+90h] [rbp+20h] BYREF
  unsigned int v13; // [rsp+98h] [rbp+28h] BYREF

  v13 = 0;
  TokenInformation = 0;
  v11 = 0LL;
  Handle = 0LL;
  v3 = CempRpcQueryClientInformation(a1, 0LL, &TokenInformation, 0LL, (__int64)&Handle);
  if ( v3 < 0 )
  {
    if ( (unsigned int)dword_1800E82B0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E82B0, 8LL) )
    {
      v13 = v3;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        v6,
        byte_1800D612D,
        v7,
        v8,
        (__int64)&v13);
    }
  }
  else
  {
    LOBYTE(v9) = 5;
    v3 = HamSrvConnect((char *)RmSvcGlobals + 2248, v13, 0LL, Handle, TokenInformation, v9, 0);
    if ( v3 >= 0 )
    {
      v4 = 0LL;
      *a2 = v11;
      v3 = 0;
    }
    else
    {
      v4 = v11;
    }
    if ( v4 )
      HamSrvDisconnect(v4);
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v3;
}
