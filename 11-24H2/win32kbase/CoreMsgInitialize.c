/*
 * XREFs of CoreMsgInitialize @ 0x1400FBD48
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1402E25E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ?TraceInitializeStop@Log@CoreMessagingK@@SAXJ@Z @ 0x1400FBDD0 (-TraceInitializeStop@Log@CoreMessagingK@@SAXJ@Z.c)
 *     ?Initialize@EntryLock@CoreMessagingK@@SAJXZ @ 0x1400FBE0C (-Initialize@EntryLock@CoreMessagingK@@SAJXZ.c)
 *     ?Initialize@RegistrarClient@CoreMessagingK@@SAXXZ @ 0x1400FD838 (-Initialize@RegistrarClient@CoreMessagingK@@SAXXZ.c)
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x14019C358 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 *     ?TraceInitializeStart@Log@CoreMessagingK@@SAXXZ @ 0x14019F414 (-TraceInitializeStart@Log@CoreMessagingK@@SAXXZ.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1402C42B4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 __fastcall CoreMsgInitialize(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 CurrentProcess; // rax
  int v8; // ebx

  if ( *(_BYTE *)(W32GetUserCoreMessagingSessionState(a1, a2, a3) + 8) )
    CoreMessagingK::Runtime::BugCheck(1LL, 0LL, 0LL);
  CurrentProcess = PsGetCurrentProcess(v4, v3, v5, v6);
  if ( !(unsigned int)PsGetProcessSessionId(CurrentProcess) )
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_14029B140);
  CoreMessagingK::Log::TraceInitializeStart();
  v8 = CoreMessagingK::EntryLock::Initialize();
  if ( v8 >= 0 )
    CoreMessagingK::RegistrarClient::Initialize();
  CoreMessagingK::Log::TraceInitializeStop(v8);
  return (unsigned int)v8;
}
