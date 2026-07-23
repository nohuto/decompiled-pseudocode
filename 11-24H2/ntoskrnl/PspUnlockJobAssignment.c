/*
 * XREFs of PspUnlockJobAssignment @ 0x1408D801C
 * Callers:
 *     PspGetJobLockHierarchyForDeletion @ 0x1408D7978 (PspGetJobLockHierarchyForDeletion.c)
 *     PspLockJobChain @ 0x1408D7F38 (PspLockJobChain.c)
 *     PspAssignProcessToJob @ 0x140A105B0 (PspAssignProcessToJob.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
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
