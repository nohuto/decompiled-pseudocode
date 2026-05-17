/*
 * XREFs of TppPoolRemoveWorker @ 0x1800F3110
 * Callers:
 *     TppWorkerThread @ 0x1800238D0 (TppWorkerThread.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall TppPoolRemoveWorker(_QWORD *a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  __int64 v4; // rdx
  _QWORD *v5; // rax

  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1[6] + 72LL), a2, a3);
  v4 = a1[2];
  v5 = (_QWORD *)a1[3];
  if ( *(_QWORD **)(v4 + 8) != a1 + 2 || (_QWORD *)*v5 != a1 + 2 )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1[6] + 72LL));
}
