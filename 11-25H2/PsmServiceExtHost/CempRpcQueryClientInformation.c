/*
 * XREFs of CempRpcQueryClientInformation @ 0x18003E1C8
 * Callers:
 *     HamRpcSrvConnectDebugging @ 0x18003CDC0 (HamRpcSrvConnectDebugging.c)
 *     HamRpcSrvConnectStateChangeNotifications @ 0x18003CF40 (HamRpcSrvConnectStateChangeNotifications.c)
 *     HamRpcSrvConnectSessionState @ 0x18003D680 (HamRpcSrvConnectSessionState.c)
 *     HamRpcSrvConnectServicing @ 0x18003D7E0 (HamRpcSrvConnectServicing.c)
 *     HamRpcSrvConnectExtendedExecution @ 0x18003D900 (HamRpcSrvConnectExtendedExecution.c)
 *     HamRpcSrvConnect @ 0x18003DA80 (HamRpcSrvConnect.c)
 *     RmgrSrv_RegisterWithServer @ 0x18003DD30 (RmgrSrv_RegisterWithServer.c)
 *     CrmRpcSrvRegister @ 0x18003DF90 (CrmRpcSrvRegister.c)
 *     HamRpcSrvPlmNotifyNewSession @ 0x18006D950 (HamRpcSrvPlmNotifyNewSession.c)
 *     RmgrSrv_RmSetMemoryUsageLimit @ 0x180077DF0 (RmgrSrv_RmSetMemoryUsageLimit.c)
 *     HamRpcSrvConnectFullTrust @ 0x180081540 (HamRpcSrvConnectFullTrust.c)
 * Callees:
 *     CempGetUserSidFromToken @ 0x18003E3B8 (CempGetUserSidFromToken.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall CempRpcQueryClientInformation(
        RPC_BINDING_HANDLE ClientBinding,
        PSID DestinationSid,
        PVOID TokenInformation,
        _DWORD *a4,
        __int64 a5,
        _QWORD *a6)
{
  HANDLE CurrentThread; // rax
  NTSTATUS UserSidFromToken; // ebx
  void *v12; // rax
  void *TokenHandle; // [rsp+30h] [rbp-89h] BYREF
  ULONG ReturnLength; // [rsp+38h] [rbp-81h] BYREF
  _DWORD RpcCallAttributes[28]; // [rsp+40h] [rbp-79h] BYREF

  ReturnLength = 0;
  memset_0(RpcCallAttributes, 0, sizeof(RpcCallAttributes));
  TokenHandle = 0LL;
  if ( RpcImpersonateClient(ClientBinding) )
    goto LABEL_20;
  CurrentThread = GetCurrentThread();
  UserSidFromToken = NtOpenThreadToken(CurrentThread, 8u, 1u, &TokenHandle);
  if ( UserSidFromToken < 0
    || DestinationSid && (UserSidFromToken = CempGetUserSidFromToken(TokenHandle, DestinationSid), UserSidFromToken < 0)
    || TokenInformation
    && (UserSidFromToken = NtQueryInformationToken(TokenHandle, TokenSessionId, TokenInformation, 4u, &ReturnLength),
        UserSidFromToken < 0)
    || a5 && (UserSidFromToken = RtlQueryTokenHostIdAsUlong64(TokenHandle, a5), UserSidFromToken < 0) )
  {
    RpcRevertToSelf();
    goto LABEL_13;
  }
  if ( RpcRevertToSelf() )
    goto LABEL_20;
  if ( a4 )
  {
    RpcCallAttributes[0] = 2;
    RpcCallAttributes[1] = 16;
    if ( !RpcServerInqCallAttributesW(ClientBinding, RpcCallAttributes) )
    {
      *a4 = RpcCallAttributes[16];
      goto LABEL_10;
    }
LABEL_20:
    UserSidFromToken = -1073741823;
    goto LABEL_13;
  }
LABEL_10:
  if ( a6 )
  {
    v12 = TokenHandle;
    TokenHandle = 0LL;
    *a6 = v12;
  }
  UserSidFromToken = 0;
LABEL_13:
  if ( TokenHandle )
    CloseHandle(TokenHandle);
  return (unsigned int)UserSidFromToken;
}
