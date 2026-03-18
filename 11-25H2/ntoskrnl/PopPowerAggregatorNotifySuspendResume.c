/*
 * XREFs of PopPowerAggregatorNotifySuspendResume @ 0x140A9CAC8
 * Callers:
 *     PopIssueActionRequest @ 0x140A83104 (PopIssueActionRequest.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140964338 (PopPowerAggregatorHandleIntentUnsafe.c)
 *     PopPowerAggregatorDiagTraceSuspendResume @ 0x140A9CB70 (PopPowerAggregatorDiagTraceSuspendResume.c)
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
  PopPowerAggregatorDiagTraceSuspendResume(v2, (unsigned int)dword_140F083A0);
  if ( a1 )
  {
    if ( ++dword_140F083A0 != 1 )
      goto LABEL_7;
    v3 = 0LL;
    v4 = 7LL;
  }
  else
  {
    if ( --dword_140F083A0 )
      goto LABEL_7;
    v3 = &v6;
    v6 = dword_140F083A4;
    v4 = 8LL;
  }
  PopPowerAggregatorHandleIntentUnsafe((_QWORD *)v4, v3, 0, 0x14u);
LABEL_7:
  result = PopReleaseRwLock(&PopPowerAggregatorLock);
  if ( a1 )
    return KeWaitForSingleObject(&word_140F08388, Executive, 0, 0, 0LL);
  return result;
}
