/*
 * XREFs of MiUnlockDriverMappings @ 0x1404A9DD4
 * Callers:
 *     MiReserveDriverPtes @ 0x140A5B530 (MiReserveDriverPtes.c)
 *     MiReleaseDriverPtes @ 0x140A651C4 (MiReleaseDriverPtes.c)
 * Callees:
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

_QWORD *__fastcall MiUnlockDriverMappings(__int64 a1)
{
  _QWORD *result; // rax

  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2D618, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2D618);
  result = (_QWORD *)KeAbPostRelease((ULONG_PTR)&qword_140E2D618);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    result = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery();
  }
  return result;
}
