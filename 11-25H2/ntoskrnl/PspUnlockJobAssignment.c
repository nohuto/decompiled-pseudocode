/*
 * XREFs of PspUnlockJobAssignment @ 0x1408D84CC
 * Callers:
 *     PspGetJobLockHierarchyForDeletion @ 0x1408D7ED8 (PspGetJobLockHierarchyForDeletion.c)
 *     PspLockJobChain @ 0x1408D83E8 (PspLockJobChain.c)
 *     PspAssignProcessToJob @ 0x140A0E960 (PspAssignProcessToJob.c)
 * Callees:
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

_QWORD *__fastcall PspUnlockJobAssignment(__int64 a1)
{
  _QWORD *result; // rax

  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspJobAssignmentLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspJobAssignmentLock);
  result = (_QWORD *)KeAbPostRelease((ULONG_PTR)&PspJobAssignmentLock);
  if ( a1 )
  {
    if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
    {
      result = (_QWORD *)(a1 + 152);
      if ( (_QWORD *)*result != result )
        return (_QWORD *)KiCheckForKernelApcDelivery();
    }
  }
  return result;
}
