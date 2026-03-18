/*
 * XREFs of PspLockJobAssignment @ 0x1408E7824
 * Callers:
 *     PspGetJobLockHierarchyForDeletion @ 0x1408E7110 (PspGetJobLockHierarchyForDeletion.c)
 *     PspLockJobChain @ 0x1408E76DC (PspLockJobChain.c)
 *     PspAssignProcessToJob @ 0x140A173D0 (PspAssignProcessToJob.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 __fastcall PspLockJobAssignment(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx

  if ( a1 )
    --*(_WORD *)(a1 + 486);
  result = (__int64)KeAbPreAcquire((__int64)&PspJobAssignmentLock, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&PspJobAssignmentLock, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&PspJobAssignmentLock, result, (__int64)&PspJobAssignmentLock);
  if ( v2 )
    *(_BYTE *)(v2 + 10) = 1;
  return result;
}
