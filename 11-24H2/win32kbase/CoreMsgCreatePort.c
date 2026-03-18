/*
 * XREFs of CoreMsgCreatePort @ 0x1400FC1D4
 * Callers:
 *     ?CreateCoreMsgPort@CoreMessagingKPort@@QEAAJXZ @ 0x1401A7CA0 (-CreateCoreMsgPort@CoreMessagingKPort@@QEAAJXZ.c)
 *     ?CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ @ 0x14020B1FC (-CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ.c)
 * Callees:
 *     ?CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z @ 0x1400FBB5C (-CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z.c)
 *     ?Connect@RegistrarClient@CoreMessagingK@@CAJXZ @ 0x1400FC354 (-Connect@RegistrarClient@CoreMessagingK@@CAJXZ.c)
 *     ?TraceCreatePortStop@Log@CoreMessagingK@@SAXJ@Z @ 0x1400FC5DC (-TraceCreatePortStop@Log@CoreMessagingK@@SAXJ@Z.c)
 *     ?Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z @ 0x1400FCDD4 (-Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z.c)
 *     ?TraceCreatePortStart@Log@CoreMessagingK@@SAXDPEBG@Z @ 0x14019EAA8 (-TraceCreatePortStart@Log@CoreMessagingK@@SAXDPEBG@Z.c)
 */

__int64 __fastcall CoreMsgCreatePort(char a1, void *a2, const unsigned __int16 *a3, void **a4)
{
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  int Port; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  PRKMUTEX *UserCoreMessagingSessionState; // rax
  char v18; // [rsp+40h] [rbp+8h] BYREF

  v18 = 0;
  CoreMessagingK::Log::TraceCreatePortStart(a1, a3);
  *a4 = 0LL;
  CoreMessagingK::EntryLock::Acquire(&v18, 2LL, v7);
  if ( *(_QWORD *)(W32GetUserCoreMessagingSessionState(v9, v8, v10) + 24)
    || (Port = CoreMessagingK::RegistrarClient::Connect(), Port >= 0) )
  {
    Port = CoreMessagingK::ServerPorts::CreatePort(v11, a2, a3, a4);
    if ( Port >= 0 )
      Port = 0;
  }
  CoreMessagingK::Log::TraceCreatePortStop(Port);
  if ( v18 )
  {
    UserCoreMessagingSessionState = (PRKMUTEX *)W32GetUserCoreMessagingSessionState(v14, v13, v15);
    KeReleaseMutex(*UserCoreMessagingSessionState, 0);
  }
  return (unsigned int)Port;
}
