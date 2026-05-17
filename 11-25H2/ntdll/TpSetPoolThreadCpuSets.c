/*
 * XREFs of TpSetPoolThreadCpuSets @ 0x18003B1A0
 * Callers:
 *     TpAllocPoolInternal @ 0x18003A970 (TpAllocPoolInternal.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x18007F694 (TppAdjustRunningThreadGoalWithLock.c)
 *     RtlNumberOfSetBits @ 0x1800F4AC0 (RtlNumberOfSetBits.c)
 *     NtSetInformationWorkerFactory @ 0x180166830 (NtSetInformationWorkerFactory.c)
 */

__int64 __fastcall TpSetPoolThreadCpuSets(__int64 a1, __int64 a2, int a3)
{
  volatile signed __int64 *v6; // rsi
  int v7; // r14d
  int v8; // ebp
  _DWORD v10[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h]

  v10[1] = 0;
  if ( !a1 || !a2 )
    return 3221225485LL;
  v6 = (volatile signed __int64 *)(a1 + 72);
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 72));
  v7 = 8 * a3;
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
