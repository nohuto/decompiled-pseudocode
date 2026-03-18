/*
 * XREFs of CoreMsgObjectCallout @ 0x1400FCD24
 * Callers:
 *     W32CalloutDispatchWorker @ 0x1400DAD6C (W32CalloutDispatchWorker.c)
 * Callees:
 *     ?TraceObjectCalloutStop@Log@CoreMessagingK@@SAXJ@Z @ 0x1400FCD98 (-TraceObjectCalloutStop@Log@CoreMessagingK@@SAXJ@Z.c)
 *     ?Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z @ 0x1400FCDD4 (-Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z.c)
 *     ?OnCallback@CoreMsgObject@CoreMessagingK@@SAJW4_WIN32_CALLOUTS_OPERATION@@PEAX@Z @ 0x1400FCE34 (-OnCallback@CoreMsgObject@CoreMessagingK@@SAJW4_WIN32_CALLOUTS_OPERATION@@PEAX@Z.c)
 *     ?TraceObjectCalloutStart@Log@CoreMessagingK@@SAXW4_WIN32_CALLOUTS_OPERATION@@@Z @ 0x1400FCEAC (-TraceObjectCalloutStart@Log@CoreMessagingK@@SAXW4_WIN32_CALLOUTS_OPERATION@@@Z.c)
 */

__int64 __fastcall CoreMsgObjectCallout(unsigned int a1, __int64 a2)
{
  __int64 v4; // r8
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  PRKMUTEX *UserCoreMessagingSessionState; // rax
  char v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = 0;
  CoreMessagingK::Log::TraceObjectCalloutStart();
  CoreMessagingK::EntryLock::Acquire(&v11, 5LL, v4);
  v5 = CoreMessagingK::CoreMsgObject::OnCallback(a1, a2);
  CoreMessagingK::Log::TraceObjectCalloutStop(v5);
  if ( v11 )
  {
    UserCoreMessagingSessionState = (PRKMUTEX *)W32GetUserCoreMessagingSessionState(v7, v6, v8);
    KeReleaseMutex(*UserCoreMessagingSessionState, 0);
  }
  return v5;
}
