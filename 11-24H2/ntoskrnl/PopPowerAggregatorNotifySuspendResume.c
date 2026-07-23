/*
 * XREFs of PopPowerAggregatorNotifySuspendResume @ 0x140A9D7B8
 * Callers:
 *     PopIssueActionRequest @ 0x140A84124 (PopIssueActionRequest.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x1409A2738 (PopPowerAggregatorHandleIntentUnsafe.c)
 *     PopPowerAggregatorDiagTraceSuspendResume @ 0x140A9D860 (PopPowerAggregatorDiagTraceSuspendResume.c)
 */

NTSTATUS __fastcall PopPowerAggregatorNotifySuspendResume(char a1)
{
  __int64 v2; // rcx
  int *v3; // rdx
  __int64 v4; // rcx
  NTSTATUS result; // eax
  int v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock);
  LOBYTE(v2) = a1;
  PopPowerAggregatorDiagTraceSuspendResume(v2, (unsigned int)dword_140F08D80);
  if ( a1 )
  {
    if ( ++dword_140F08D80 != 1 )
      goto LABEL_7;
    v3 = 0LL;
    v4 = 7LL;
  }
  else
  {
    if ( --dword_140F08D80 )
      goto LABEL_7;
    v3 = &v6;
    v6 = dword_140F08D84;
    v4 = 8LL;
  }
  PopPowerAggregatorHandleIntentUnsafe((_QWORD *)v4, v3, 0, 0x14u);
LABEL_7:
  result = PopReleaseRwLock(&PopPowerAggregatorLock);
  if ( a1 )
    return KeWaitForSingleObject(&word_140F08D68, Executive, 0, 0, 0LL);
  return result;
}
