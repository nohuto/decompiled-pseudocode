/*
 * XREFs of LdrpAcquireSchedulerSharedDataSlot @ 0x1800F2C94
 * Callers:
 *     LdrpInitializeThread @ 0x180073EB0 (LdrpInitializeThread.c)
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 *     RtlCloneUserProcess @ 0x180160780 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x180160A90 (RtlCompleteProcessCloning.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 *     NtSetInformationThread @ 0x1801633C0 (NtSetInformationThread.c)
 */

void __fastcall LdrpAcquireSchedulerSharedDataSlot(__int64 a1)
{
  __int64 v2; // rbx
  int ThreadInformation; // [rsp+20h] [rbp-28h] BYREF
  int v4; // [rsp+24h] [rbp-24h]
  __int64 v5; // [rsp+28h] [rbp-20h]
  __int64 v6; // [rsp+30h] [rbp-18h]

  v4 = 0;
  RtlAcquireSRWLockShared(&LdrpSchedulerSharedDataListHeadLock);
  v2 = LdrpSchedulerSharedDataListHead;
  if ( (__int64 *)LdrpSchedulerSharedDataListHead == &LdrpSchedulerSharedDataListHead
    || !LdrpSchedulerSharedDataListHead
    || (NtCurrentPeb()->NtGlobalFlag2 & 0x10) != 0 )
  {
    RtlReleaseSRWLockShared(&LdrpSchedulerSharedDataListHeadLock);
  }
  else
  {
    RtlReleaseSRWLockShared(&LdrpSchedulerSharedDataListHeadLock);
    v4 = 0;
    v6 = 0LL;
    ThreadInformation = 0;
    v5 = *(_QWORD *)(v2 + 16);
    if ( NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadSchedulerSharedDataSlot, &ThreadInformation, 0x18u) >= 0 )
      *(_QWORD *)(a1 + 6224) = v6;
  }
}
