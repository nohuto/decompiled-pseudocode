/*
 * XREFs of HamRpcSrvConnectStateChangeNotifications @ 0x18003CF40
 * Callers:
 *     <none>
 * Callees:
 *     ?HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001D9AC (-HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18003C100 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     CempRpcQueryClientInformation @ 0x18003E1C8 (CempRpcQueryClientInformation.c)
 *     ?HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18003E590 (-HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_.c)
 *     _tlgKeywordOn @ 0x180057540 (_tlgKeywordOn.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall HamRpcSrvConnectStateChangeNotifications(
        RPC_BINDING_HANDLE ClientBinding,
        void *a2,
        struct _HAM_CLIENT_CONTEXT **a3,
        _QWORD *a4)
{
  int v8; // eax
  HANDLE v9; // rdi
  int v10; // ebx
  struct _HAM_CLIENT_CONTEXT *v11; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // [rsp+28h] [rbp-A1h]
  unsigned int v17; // [rsp+60h] [rbp-69h] BYREF
  int TokenInformation; // [rsp+64h] [rbp-65h] BYREF
  struct _HAM_CLIENT_CONTEXT *v19; // [rsp+68h] [rbp-61h]
  HANDLE Handle[2]; // [rsp+70h] [rbp-59h] BYREF
  __int128 v21; // [rsp+80h] [rbp-49h]
  __int64 v22; // [rsp+90h] [rbp-39h]
  _BYTE DestinationSid[80]; // [rsp+A0h] [rbp-29h] BYREF

  v17 = 0;
  memset_0(DestinationSid, 0, 0x44uLL);
  TokenInformation = 0;
  v19 = 0LL;
  Handle[0] = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  Handle[1] = a2;
  v8 = CempRpcQueryClientInformation(ClientBinding, DestinationSid, &TokenInformation, 0LL, (__int64)Handle);
  v9 = Handle[0];
  v10 = v8;
  if ( v8 < 0 )
  {
    if ( (unsigned int)dword_1800E72B0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E72B0, 8LL) )
    {
      v17 = v10;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        v13,
        byte_1800D5163,
        v14,
        v15,
        (__int64)&v17);
    }
  }
  else
  {
    LOBYTE(v16) = 6;
    v10 = HamSrvConnect((char *)RmSvcGlobals + 2248, v17, DestinationSid, Handle[0], TokenInformation, v16, 0);
    if ( v10 >= 0 )
    {
      v11 = 0LL;
      *a3 = v19;
      v10 = 0;
      *a4 = v22;
    }
    else
    {
      v11 = v19;
    }
    if ( v11 )
      HamSrvDisconnect(v11);
  }
  if ( v9 )
    NtClose(v9);
  return (unsigned int)v10;
}
