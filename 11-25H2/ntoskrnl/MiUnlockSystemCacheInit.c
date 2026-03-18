/*
 * XREFs of MiUnlockSystemCacheInit @ 0x1404BE348
 * Callers:
 *     MiLateInitializeSystemCache @ 0x1404BE284 (MiLateInitializeSystemCache.c)
 * Callees:
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

_QWORD *__fastcall MiUnlockSystemCacheInit(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rbx
  _QWORD *result; // rax

  v3 = a1 + 2400;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 2400), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 2400));
  result = (_QWORD *)KeAbPostRelease(v3);
  if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF )
  {
    result = (_QWORD *)(a2 + 152);
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery();
  }
  return result;
}
