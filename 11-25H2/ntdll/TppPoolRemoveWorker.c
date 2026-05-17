/*
 * XREFs of TppPoolRemoveWorker @ 0x1800F4C80
 * Callers:
 *     TppWorkerThread @ 0x18007DCB0 (TppWorkerThread.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall TppPoolRemoveWorker(_QWORD *a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rax

  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1[6] + 72LL));
  v2 = a1[2];
  v3 = (_QWORD *)a1[3];
  if ( *(_QWORD **)(v2 + 8) != a1 + 2 || (_QWORD *)*v3 != a1 + 2 )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1[6] + 72LL));
}
