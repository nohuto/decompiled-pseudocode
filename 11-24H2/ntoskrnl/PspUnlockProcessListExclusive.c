/*
 * XREFs of PspUnlockProcessListExclusive @ 0x1403494CC
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
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 */

_QWORD *__fastcall PspUnlockProcessListExclusive(__int64 a1)
{
  _QWORD *result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx

  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspActiveProcessLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspActiveProcessLock);
  result = (_QWORD *)KeAbPostRelease((ULONG_PTR)&PspActiveProcessLock);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    result = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery(v4, v3);
  }
  return result;
}
