/*
 * XREFs of ?PortSignaledCallback@ServerPorts@CoreMessagingK@@CAXPEAX00@Z @ 0x1400FC160
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z @ 0x1400FCDD4 (-Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z.c)
 *     ?DrainPort@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@@Z @ 0x1400FD160 (-DrainPort@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@@Z.c)
 */

void __fastcall CoreMessagingK::ServerPorts::PortSignaledCallback(
        PVOID CallbackContext,
        PVOID Argument1,
        PVOID Argument2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 i; // rcx
  __int64 v9; // r8
  PRKMUTEX *UserCoreMessagingSessionState; // rax
  char v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = 0;
  CoreMessagingK::EntryLock::Acquire(&v11, 1539LL, Argument2);
  for ( i = *(_QWORD *)(W32GetUserCoreMessagingSessionState(v5, v4, v6) + 56); i; i = *(_QWORD *)(i + 48) )
  {
    if ( Argument1 == *(PVOID *)(i + 8) )
    {
      CoreMessagingK::ServerPorts::DrainPort((struct CoreMessagingK::ServerPortInfo *)i);
      break;
    }
  }
  if ( v11 )
  {
    UserCoreMessagingSessionState = (PRKMUTEX *)W32GetUserCoreMessagingSessionState(i, v7, v9);
    KeReleaseMutex(*UserCoreMessagingSessionState, 0);
  }
}
