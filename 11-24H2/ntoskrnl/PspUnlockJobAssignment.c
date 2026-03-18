/*
 * XREFs of PspUnlockJobAssignment @ 0x1408E77C0
 * Callers:
 *     PspGetJobLockHierarchyForDeletion @ 0x1408E7110 (PspGetJobLockHierarchyForDeletion.c)
 *     PspLockJobChain @ 0x1408E76DC (PspLockJobChain.c)
 *     PspAssignProcessToJob @ 0x140A173D0 (PspAssignProcessToJob.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 */

_QWORD *__fastcall PspUnlockJobAssignment(__int64 a1)
{
  _QWORD *result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx

  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspJobAssignmentLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspJobAssignmentLock);
  result = (_QWORD *)KeAbPostRelease((ULONG_PTR)&PspJobAssignmentLock);
  if ( a1 )
  {
    if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
    {
      result = (_QWORD *)(a1 + 152);
      if ( (_QWORD *)*result != result )
        return (_QWORD *)KiCheckForKernelApcDelivery(v4, v3);
    }
  }
  return result;
}
