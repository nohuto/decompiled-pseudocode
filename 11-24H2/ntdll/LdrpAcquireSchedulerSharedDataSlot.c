/*
 * XREFs of LdrpAcquireSchedulerSharedDataSlot @ 0x1800F1124
 * Callers:
 *     LdrpInitializeThread @ 0x180012810 (LdrpInitializeThread.c)
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 *     RtlCloneUserProcess @ 0x18015F270 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x18015F580 (RtlCompleteProcessCloning.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180010220 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     NtSetInformationThread @ 0x180161E30 (NtSetInformationThread.c)
 */

__int64 __fastcall LdrpAcquireSchedulerSharedDataSlot(__int64 a1)
{
  __int64 v2; // rbx
  __int64 result; // rax
  int v4; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+24h] [rbp-24h]
  __int64 v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+30h] [rbp-18h]

  v5 = 0;
  RtlAcquireSRWLockShared(&LdrpSchedulerSharedDataListHeadLock);
  v2 = LdrpSchedulerSharedDataListHead;
  if ( (__int64 *)LdrpSchedulerSharedDataListHead == &LdrpSchedulerSharedDataListHead
    || !LdrpSchedulerSharedDataListHead
    || (NtCurrentPeb()->NtGlobalFlag2 & 0x10) != 0 )
  {
    return RtlReleaseSRWLockShared(&LdrpSchedulerSharedDataListHeadLock);
  }
  RtlReleaseSRWLockShared(&LdrpSchedulerSharedDataListHeadLock);
  v5 = 0;
  v7 = 0LL;
  v4 = 0;
  v6 = *(_QWORD *)(v2 + 16);
  result = NtSetInformationThread(-2LL, 57LL, &v4);
  if ( (int)result >= 0 )
  {
    result = v7;
    *(_QWORD *)(a1 + 6224) = v7;
  }
  return result;
}
