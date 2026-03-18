/*
 * XREFs of PspLockProcessListExclusive @ 0x140349ACC
 * Callers:
 *     PspDetachSession @ 0x140348AEC (PspDetachSession.c)
 *     PsGetSessionObjectById @ 0x1403493A0 (PsGetSessionObjectById.c)
 *     PsGetSessionById @ 0x140349430 (PsGetSessionById.c)
 *     PsAttachSession @ 0x1405E6D20 (PsAttachSession.c)
 *     PsIsSessionInCurrentServerSilo @ 0x1405E6DC8 (PsIsSessionInCurrentServerSilo.c)
 *     PspInitializeSessionGlobals @ 0x1406F7578 (PspInitializeSessionGlobals.c)
 *     PspDereferenceSessionFinal @ 0x14077BA80 (PspDereferenceSessionFinal.c)
 *     PspFreeSessionId @ 0x14077BBDC (PspFreeSessionId.c)
 *     PspGetNewSessionId @ 0x14077BC2C (PspGetNewSessionId.c)
 *     PspMarkSessionReferenceProcess @ 0x14077BD44 (PspMarkSessionReferenceProcess.c)
 *     PspUnlinkSessionId @ 0x14077C0FC (PspUnlinkSessionId.c)
 *     PspInsertProcess @ 0x1408A7074 (PspInsertProcess.c)
 *     PspProcessDelete @ 0x1408A99B0 (PspProcessDelete.c)
 *     PsJoinSession @ 0x140A4D9A4 (PsJoinSession.c)
 *     PsUnlinkProcessFromSession @ 0x140A7533C (PsUnlinkProcessFromSession.c)
 *     ExpInitializeSessionDriver @ 0x140A8E460 (ExpInitializeSessionDriver.c)
 *     PsGetNextSession @ 0x140AA4550 (PsGetNextSession.c)
 *     PspMakeSessionVisible @ 0x140AB1FD8 (PspMakeSessionVisible.c)
 *     PspAttachSession @ 0x140AD25B8 (PspAttachSession.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 __fastcall PspLockProcessListExclusive(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx

  --*(_WORD *)(a1 + 486);
  result = (__int64)KeAbPreAcquire((__int64)&PspActiveProcessLock, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&PspActiveProcessLock, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&PspActiveProcessLock, result, (__int64)&PspActiveProcessLock);
  if ( v2 )
    *(_BYTE *)(v2 + 10) = 1;
  return result;
}
