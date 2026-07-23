/*
 * XREFs of PspLockJobAssignment @ 0x1408D8080
 * Callers:
 *     PspGetJobLockHierarchyForDeletion @ 0x1408D7978 (PspGetJobLockHierarchyForDeletion.c)
 *     PspLockJobChain @ 0x1408D7F38 (PspLockJobChain.c)
 *     PspAssignProcessToJob @ 0x140A105B0 (PspAssignProcessToJob.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 */

char *__fastcall PspLockJobAssignment(__int64 a1)
{
  char *result; // rax
  char *v2; // rbx

  if ( a1 )
    --*(_WORD *)(a1 + 486);
  result = (char *)KeAbPreAcquire((__int64)&PspJobAssignmentLock, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&PspJobAssignmentLock, 0LL) )
    result = (char *)ExfAcquirePushLockExclusiveEx(&PspJobAssignmentLock, result, (__int64)&PspJobAssignmentLock);
  if ( v2 )
    v2[10] = 1;
  return result;
}
