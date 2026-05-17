/*
 * XREFs of RtlAcquireReleaseSRWLockExclusive @ 0x180033EB0
 * Callers:
 *     RtlpHpHeapExtendContext @ 0x180033D4C (RtlpHpHeapExtendContext.c)
 *     RtlRcuSynchronize @ 0x180149330 (RtlRcuSynchronize.c)
 *     RtlCloneUserProcess @ 0x180160780 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x180160A90 (RtlCompleteProcessCloning.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall RtlAcquireReleaseSRWLockExclusive(volatile signed __int32 *a1)
{
  __int64 result; // rax
  signed __int32 v3[10]; // [rsp+0h] [rbp-28h] BYREF

  _InterlockedOr(v3, 0);
  result = *(_QWORD *)a1;
  if ( (*(_QWORD *)a1 & 1) != 0 )
  {
    RtlAcquireSRWLockExclusive(a1);
    return RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
  }
  return result;
}
