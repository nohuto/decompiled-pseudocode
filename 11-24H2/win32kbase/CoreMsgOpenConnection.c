/*
 * XREFs of CoreMsgOpenConnection @ 0x1400FCB98
 * Callers:
 *     UserCoreMsgOpenConnectionHandle @ 0x1400FC8A0 (UserCoreMsgOpenConnectionHandle.c)
 *     ?CoreMsgOpenDestinationHandle@InputExtensibilityCallout@@QEAAJW4_MIT_ENDPOINT@@AEBUtagMsgRoutingInfo@@@Z @ 0x140148F34 (-CoreMsgOpenDestinationHandle@InputExtensibilityCallout@@QEAAJW4_MIT_ENDPOINT@@AEBUtagMsgRouting.c)
 *     ?RegisterEndpoint@CoreMessagingKPort@@QEAAJW4COREMESSAGINGK_ENDPOINT_ID@@AEBUtagMsgRoutingInfo@@@Z @ 0x1401A8010 (-RegisterEndpoint@CoreMessagingKPort@@QEAAJW4COREMESSAGINGK_ENDPOINT_ID@@AEBUtagMsgRoutingInfo@@.c)
 * Callees:
 *     ?TraceOpenConnectionStart@Log@CoreMessagingK@@SAXDPEBUtagMsgRoutingInfo@@@Z @ 0x1400FCC4C (-TraceOpenConnectionStart@Log@CoreMessagingK@@SAXDPEBUtagMsgRoutingInfo@@@Z.c)
 *     ?TraceOpenConnectionStop@Log@CoreMessagingK@@SAXJPEAX@Z @ 0x1400FCCD8 (-TraceOpenConnectionStop@Log@CoreMessagingK@@SAXJPEAX@Z.c)
 *     ?Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z @ 0x1400FCDD4 (-Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z.c)
 *     ?OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z @ 0x1400FCEE8 (-OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z.c)
 */

__int64 __fastcall CoreMsgOpenConnection(char a1, const struct tagMsgRoutingInfo *a2, void **a3)
{
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  PRKMUTEX *UserCoreMessagingSessionState; // rax
  char v17; // [rsp+48h] [rbp+20h] BYREF

  v17 = 0;
  CoreMessagingK::Log::TraceOpenConnectionStart(a1, a2);
  CoreMessagingK::EntryLock::Acquire(&v17, 3LL, v6);
  if ( *(_QWORD *)(W32GetUserCoreMessagingSessionState(v8, v7, v9) + 24) )
  {
    v10 = CoreMessagingK::ServerPorts::OpenConnection(a1, a2, a3);
    v11 = v10;
    if ( !v10 )
    {
      if ( !*a3 )
        v10 = -1073741584;
      v11 = v10;
    }
  }
  else
  {
    v11 = -1073741584;
  }
  CoreMessagingK::Log::TraceOpenConnectionStop(v11, *a3);
  if ( v17 )
  {
    UserCoreMessagingSessionState = (PRKMUTEX *)W32GetUserCoreMessagingSessionState(v13, v12, v14);
    KeReleaseMutex(*UserCoreMessagingSessionState, 0);
  }
  return v11;
}
