/*
 * XREFs of PopPowerAggregatorNotifySuspendResume @ 0x140AA2428
 * Callers:
 *     PopIssueActionRequest @ 0x140A87C34 (PopIssueActionRequest.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x1409BC0E8 (PopPowerAggregatorHandleIntentUnsafe.c)
 *     PopPowerAggregatorDiagTraceSuspendResume @ 0x140AA24D0 (PopPowerAggregatorDiagTraceSuspendResume.c)
 */

NTSTATUS __fastcall PopPowerAggregatorNotifySuspendResume(char a1)
{
  __int64 v2; // rcx
  int *v3; // rdx
  __int64 v4; // rcx
  NTSTATUS result; // eax
  int v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  PopAcquireRwLockExclusive(&PopPowerAggregatorLock);
  LOBYTE(v2) = a1;
  PopPowerAggregatorDiagTraceSuspendResume(v2, (unsigned int)dword_140F08A20);
  if ( a1 )
  {
    if ( ++dword_140F08A20 != 1 )
      goto LABEL_7;
    v3 = 0LL;
    v4 = 7LL;
  }
  else
  {
    if ( --dword_140F08A20 )
      goto LABEL_7;
    v3 = &v6;
    v6 = dword_140F08A24;
    v4 = 8LL;
  }
  PopPowerAggregatorHandleIntentUnsafe((_QWORD *)v4, v3, 0, 0x14u);
LABEL_7:
  result = PopReleaseRwLock((signed __int64 *)&PopPowerAggregatorLock);
  if ( a1 )
    return KeWaitForSingleObject(&word_140F08A08, Executive, 0, 0, 0LL);
  return result;
}
