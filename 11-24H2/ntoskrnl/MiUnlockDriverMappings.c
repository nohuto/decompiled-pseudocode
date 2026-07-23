/*
 * XREFs of MiUnlockDriverMappings @ 0x1404A51C8
 * Callers:
 *     MiReserveDriverPtes @ 0x140A555D0 (MiReserveDriverPtes.c)
 *     MiReleaseDriverPtes @ 0x140A611E4 (MiReleaseDriverPtes.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 */

_QWORD *__fastcall MiUnlockDriverMappings(__int64 a1)
{
  _QWORD *result; // rax

  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2D998, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2D998);
  result = (_QWORD *)KeAbPostRelease((ULONG_PTR)&qword_140E2D998);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    result = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery();
  }
  return result;
}
