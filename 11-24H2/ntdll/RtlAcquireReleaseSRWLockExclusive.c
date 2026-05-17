/*
 * XREFs of RtlAcquireReleaseSRWLockExclusive @ 0x1800A4630
 * Callers:
 *     RtlpHpHeapExtendContext @ 0x1800A44D0 (RtlpHpHeapExtendContext.c)
 *     RtlRcuSynchronize @ 0x180147D80 (RtlRcuSynchronize.c)
 *     RtlCloneUserProcess @ 0x18015F270 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x18015F580 (RtlCompleteProcessCloning.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall RtlAcquireReleaseSRWLockExclusive(
        volatile signed __int32 *a1,
        volatile signed __int32 **a2,
        unsigned __int64 a3)
{
  __int64 result; // rax
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  _InterlockedOr(v5, 0);
  result = *(_QWORD *)a1;
  if ( (*(_QWORD *)a1 & 1) != 0 )
  {
    RtlAcquireSRWLockExclusive(a1, a2, a3);
    return RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
  }
  return result;
}
