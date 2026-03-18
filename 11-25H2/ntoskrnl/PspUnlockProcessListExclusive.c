/*
 * XREFs of PspUnlockProcessListExclusive @ 0x1403D6E4C
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
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

_QWORD *__fastcall PspUnlockProcessListExclusive(__int64 a1)
{
  _QWORD *result; // rax

  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspActiveProcessLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspActiveProcessLock);
  result = (_QWORD *)KeAbPostRelease((ULONG_PTR)&PspActiveProcessLock);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    result = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery();
  }
  return result;
}
