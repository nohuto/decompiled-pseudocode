/*
 * XREFs of PspUnlockJobListExclusive @ 0x1408D9C40
 * Callers:
 *     PspJobDelete @ 0x1404EB860 (PspJobDelete.c)
 *     NtCreateJobObject @ 0x1408DB4B0 (NtCreateJobObject.c)
 * Callees:
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

_QWORD *__fastcall PspUnlockJobListExclusive(__int64 a1)
{
  _QWORD *result; // rax

  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspJobListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspJobListLock);
  result = (_QWORD *)KeAbPostRelease((ULONG_PTR)&PspJobListLock);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    result = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery();
  }
  return result;
}
