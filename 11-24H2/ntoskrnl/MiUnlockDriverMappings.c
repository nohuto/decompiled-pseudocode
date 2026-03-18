/*
 * XREFs of MiUnlockDriverMappings @ 0x1404AAF3C
 * Callers:
 *     MiReleaseDriverPtes @ 0x140A67CE4 (MiReleaseDriverPtes.c)
 *     MiReserveDriverPtes @ 0x140AB636C (MiReserveDriverPtes.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 */

_QWORD *__fastcall MiUnlockDriverMappings(__int64 a1)
{
  _QWORD *result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx

  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2D858, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2D858);
  result = (_QWORD *)KeAbPostRelease((ULONG_PTR)&qword_140E2D858);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    result = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery(v4, v3);
  }
  return result;
}
