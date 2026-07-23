/*
 * XREFs of MiUnlockWsSwapExclusive @ 0x1403C6778
 * Callers:
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1403C5F70 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MmOutSwapVirtualAddresses @ 0x1403C64C8 (MmOutSwapVirtualAddresses.c)
 *     MmOutSwapWorkingSet @ 0x1403C6F10 (MmOutSwapWorkingSet.c)
 *     MiContractWsSwapPageFileWorker @ 0x140686110 (MiContractWsSwapPageFileWorker.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 */

_QWORD *__fastcall MiUnlockWsSwapExclusive(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rbx
  _QWORD *result; // rax

  v3 = a2 + 1176;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 1176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 1176));
  result = (_QWORD *)KeAbPostRelease(v3);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    result = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery();
  }
  return result;
}
