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

__int64 __fastcall TpSetPoolThreadCpuSets(__int64 a1, void *a2, int a3)
{
  _RTL_SRWLOCK *v6; // rsi
  ULONG v7; // r14d
  NTSTATUS v8; // ebp
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  *(&BitMapHeader.SizeOfBitMap + 1) = 0;
  if ( !a1 || !a2 )
    return 3221225485LL;
  v6 = (_RTL_SRWLOCK *)(a1 + 72);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
  v7 = 8 * a3;
  v8 = NtSetInformationWorkerFactory(*(HANDLE *)(a1 + 56), WorkerFactoryThreadCpuSets, a2, v7);
  if ( v8 >= 0 )
  {
    BitMapHeader.SizeOfBitMap = v7;
    BitMapHeader.Buffer = (unsigned int *)a2;
    *(_DWORD *)(a1 + 440) = RtlNumberOfSetBits(&BitMapHeader);
    TppAdjustRunningThreadGoalWithLock(a1);
  }
  RtlReleaseSRWLockExclusive(v6);
  return (unsigned int)v8;
}
