/*
 * XREFs of PspLockJobAssignment @ 0x1408D8530
 * Callers:
 *     PspGetJobLockHierarchyForDeletion @ 0x1408D7ED8 (PspGetJobLockHierarchyForDeletion.c)
 *     PspLockJobChain @ 0x1408D83E8 (PspLockJobChain.c)
 *     PspAssignProcessToJob @ 0x140A0E960 (PspAssignProcessToJob.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 */

__int64 *__fastcall PspLockJobAssignment(__int64 a1)
{
  __int64 *result; // rax
  __int64 *v2; // rbx

  if ( a1 )
    --*(_WORD *)(a1 + 486);
  result = KeAbPreAcquire((__int64)&PspJobAssignmentLock, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&PspJobAssignmentLock, 0LL) )
    result = (__int64 *)ExfAcquirePushLockExclusiveEx(&PspJobAssignmentLock, result, (__int64)&PspJobAssignmentLock);
  if ( v2 )
    *((_BYTE *)v2 + 10) = 1;
  return result;
}
