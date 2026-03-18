/*
 * XREFs of PspLockProcessListExclusive @ 0x1403D744C
 * Callers:
 *     PspDetachSession @ 0x1403D6470 (PspDetachSession.c)
 *     PsGetSessionObjectById @ 0x1403D6D20 (PsGetSessionObjectById.c)
 *     PsGetSessionById @ 0x1403D6DB0 (PsGetSessionById.c)
 *     PsAttachSession @ 0x1405DABA0 (PsAttachSession.c)
 *     PsIsSessionInCurrentServerSilo @ 0x1405DAC78 (PsIsSessionInCurrentServerSilo.c)
 *     PspInitializeSessionGlobals @ 0x1406EBD14 (PspInitializeSessionGlobals.c)
 *     PspDereferenceSessionFinal @ 0x14076BEE0 (PspDereferenceSessionFinal.c)
 *     PspFreeSessionId @ 0x14076C03C (PspFreeSessionId.c)
 *     PspGetNewSessionId @ 0x14076C08C (PspGetNewSessionId.c)
 *     PspMarkSessionReferenceProcess @ 0x14076C1A4 (PspMarkSessionReferenceProcess.c)
 *     PspUnlinkSessionId @ 0x14076C55C (PspUnlinkSessionId.c)
 *     PspProcessDelete @ 0x1408E1310 (PspProcessDelete.c)
 *     PspInsertProcess @ 0x1408F3D10 (PspInsertProcess.c)
 *     PsGetNextSession @ 0x140A2CC00 (PsGetNextSession.c)
 *     PsJoinSession @ 0x140A48054 (PsJoinSession.c)
 *     PsUnlinkProcessFromSession @ 0x140A79F74 (PsUnlinkProcessFromSession.c)
 *     ExpInitializeSessionDriver @ 0x140A89438 (ExpInitializeSessionDriver.c)
 *     PspMakeSessionVisible @ 0x140AACD68 (PspMakeSessionVisible.c)
 *     PspAttachSession @ 0x140AC8888 (PspAttachSession.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 */

__int64 *__fastcall PspLockProcessListExclusive(__int64 a1)
{
  __int64 *result; // rax
  __int64 *v2; // rbx

  --*(_WORD *)(a1 + 486);
  result = KeAbPreAcquire((__int64)&PspActiveProcessLock, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&PspActiveProcessLock, 0LL) )
    result = (__int64 *)ExfAcquirePushLockExclusiveEx(&PspActiveProcessLock, result, (__int64)&PspActiveProcessLock);
  if ( v2 )
    *((_BYTE *)v2 + 10) = 1;
  return result;
}
