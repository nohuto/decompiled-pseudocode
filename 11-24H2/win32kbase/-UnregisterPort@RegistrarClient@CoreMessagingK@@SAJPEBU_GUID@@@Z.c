/*
 * XREFs of ?UnregisterPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@@Z @ 0x1400FC8B8
 * Callers:
 *     ?UninitializeServerPort@ServerPorts@CoreMessagingK@@SAXPEAUServerPortInfo@2@@Z @ 0x1400FBF84 (-UninitializeServerPort@ServerPorts@CoreMessagingK@@SAXPEAUServerPortInfo@2@@Z.c)
 * Callees:
 *     ?TraceUnregisterPort@Log@CoreMessagingK@@SAXPEBU_GUID@@J@Z @ 0x1400FC97C (-TraceUnregisterPort@Log@CoreMessagingK@@SAXPEBU_GUID@@J@Z.c)
 *     CoreUICallSend @ 0x1400FD310 (CoreUICallSend.c)
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x14019C358 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 *     ?NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z @ 0x14019DECC (-NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z.c)
 */

__int64 __fastcall CoreMessagingK::RegistrarClient::UnregisterPort(const struct _GUID *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 UserCoreMessagingSessionState; // rdi
  int v6; // eax
  int v7; // edx
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF
  void *v10; // [rsp+68h] [rbp+10h] BYREF

  v10 = &CoreMessagingK::SendHost::s_Vtbl;
  v4 = 0;
  UserCoreMessagingSessionState = W32GetUserCoreMessagingSessionState(a1, a2, a3);
  v9 = 0LL;
  *(_DWORD *)(UserCoreMessagingSessionState + 32) = 27;
  v6 = CoreUICallSend((unsigned int)&v10, (unsigned int)&v9, 1, 1, 15);
  if ( v6 < 0 )
  {
    v4 = CoreMessagingK::HResultUtil::NtStatusFromHRESULT((CoreMessagingK::HResultUtil *)(unsigned int)v6, v7);
  }
  else if ( *(_DWORD *)(UserCoreMessagingSessionState + 32) )
  {
    CoreMessagingK::Runtime::BugCheck(1030LL, *(int *)(UserCoreMessagingSessionState + 32), 0LL);
  }
  CoreMessagingK::Log::TraceUnregisterPort(a1, v4);
  return v4;
}
