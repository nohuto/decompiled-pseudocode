/*
 * XREFs of PspLockProcessListExclusive @ 0x1403C350C
 * Callers:
 *     PspDetachSession @ 0x1403C252C (PspDetachSession.c)
 *     PsGetSessionObjectById @ 0x1403C2DE0 (PsGetSessionObjectById.c)
 *     PsGetSessionById @ 0x1403C2E70 (PsGetSessionById.c)
 *     PsAttachSession @ 0x1405E4320 (PsAttachSession.c)
 *     PsIsSessionInCurrentServerSilo @ 0x1405E43C8 (PsIsSessionInCurrentServerSilo.c)
 *     PspInitializeSessionGlobals @ 0x1406F5578 (PspInitializeSessionGlobals.c)
 *     PspDereferenceSessionFinal @ 0x14077B930 (PspDereferenceSessionFinal.c)
 *     PspFreeSessionId @ 0x14077BA8C (PspFreeSessionId.c)
 *     PspGetNewSessionId @ 0x14077BADC (PspGetNewSessionId.c)
 *     PspMarkSessionReferenceProcess @ 0x14077BBF4 (PspMarkSessionReferenceProcess.c)
 *     PspUnlinkSessionId @ 0x14077BFAC (PspUnlinkSessionId.c)
 *     PspInsertProcess @ 0x1408FD2CC (PspInsertProcess.c)
 *     PspProcessDelete @ 0x1408FFC10 (PspProcessDelete.c)
 *     PsJoinSession @ 0x140A44534 (PsJoinSession.c)
 *     PsUnlinkProcessFromSession @ 0x140A6F65C (PsUnlinkProcessFromSession.c)
 *     ExpInitializeSessionDriver @ 0x140A8AA30 (ExpInitializeSessionDriver.c)
 *     PsGetNextSession @ 0x140A9F8E0 (PsGetNextSession.c)
 *     PspMakeSessionVisible @ 0x140AACF48 (PspMakeSessionVisible.c)
 *     PspAttachSession @ 0x140AD0928 (PspAttachSession.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 */

char *__fastcall PspLockProcessListExclusive(__int64 a1)
{
  char *result; // rax
  char *v2; // rbx

  --*(_WORD *)(a1 + 486);
  result = (char *)KeAbPreAcquire((__int64)&PspActiveProcessLock, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&PspActiveProcessLock, 0LL) )
    result = (char *)ExfAcquirePushLockExclusiveEx(&PspActiveProcessLock, result, (__int64)&PspActiveProcessLock);
  if ( v2 )
    v2[10] = 1;
  return result;
}
