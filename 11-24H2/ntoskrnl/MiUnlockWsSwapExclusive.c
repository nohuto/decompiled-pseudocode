/*
 * XREFs of MiUnlockWsSwapExclusive @ 0x140404DE4
 * Callers:
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140403D20 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MmOutSwapVirtualAddresses @ 0x140404108 (MmOutSwapVirtualAddresses.c)
 *     MmOutSwapWorkingSet @ 0x140404630 (MmOutSwapWorkingSet.c)
 *     MiContractWsSwapPageFileWorker @ 0x140684FE0 (MiContractWsSwapPageFileWorker.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 */

_QWORD *__fastcall MiUnlockWsSwapExclusive(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rbx
  _QWORD *result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  v3 = a2 + 1176;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 1176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 1176));
  result = (_QWORD *)KeAbPostRelease(v3);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    result = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery(v6, v5);
  }
  return result;
}
