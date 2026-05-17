/*
 * XREFs of TpSetPoolThreadCpuSets @ 0x1800ABCC0
 * Callers:
 *     TpAllocPoolInternal @ 0x1800AB494 (TpAllocPoolInternal.c)
 * Callees:
 *     TppAdjustRunningThreadGoalWithLock @ 0x1800252B4 (TppAdjustRunningThreadGoalWithLock.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlNumberOfSetBits @ 0x1800F2F50 (RtlNumberOfSetBits.c)
 *     NtSetInformationWorkerFactory @ 0x1801652A0 (NtSetInformationWorkerFactory.c)
 */

__int64 __fastcall TpSetPoolThreadCpuSets(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  int v3; // r14d
  volatile signed __int64 *v6; // rsi
  int v7; // r14d
  int v8; // ebp
  _DWORD v10[2]; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 **v11; // [rsp+28h] [rbp-10h]

  v3 = a3;
  v10[1] = 0;
  if ( !a1 || !a2 )
    return 3221225485LL;
  v6 = (volatile signed __int64 *)(a1 + 72);
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 72), a2, a3);
  v7 = 8 * v3;
  v8 = NtSetInformationWorkerFactory(*(_QWORD *)(a1 + 56), 15LL, a2);
  if ( v8 >= 0 )
  {
    v10[0] = v7;
    v11 = a2;
    *(_DWORD *)(a1 + 440) = RtlNumberOfSetBits(v10);
    TppAdjustRunningThreadGoalWithLock(a1);
  }
  RtlReleaseSRWLockExclusive(v6);
  return (unsigned int)v8;
}
