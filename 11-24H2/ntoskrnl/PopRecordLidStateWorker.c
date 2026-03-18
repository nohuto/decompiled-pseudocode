/*
 * XREFs of PopRecordLidStateWorker @ 0x140AB48F0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopOkayToQueueNextWorkItem @ 0x1404A4D54 (PopOkayToQueueNextWorkItem.c)
 *     PopBsdHandleRequest @ 0x1404A8F44 (PopBsdHandleRequest.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
 */

__int64 PopRecordLidStateWorker()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  char v3; // bl
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // [rsp+20h] [rbp-8h]

  result = PopOkayToQueueNextWorkItem((__int64)&PopRecordLidStateWorkItem);
  if ( !PopErrataReportingIncorrectLidState )
  {
    PopAcquirePolicyLock(v2, v1);
    v3 = PopLidOpened != 0 ? 0x40 : 0;
    PopReleasePolicyLock(v5, v4, v6, v7, v8);
    PopAcquireRwLockExclusive(&PopBsdUpdateLock);
    BYTE11(PopBsdPowerTransition) = v3 | BYTE11(PopBsdPowerTransition) & 0x3F;
    dword_140F0778C = BYTE11(PopBsdPowerTransition) >> 6;
    PopBsdHandleRequest(1u);
    return PopReleaseRwLock((signed __int64 *)&PopBsdUpdateLock);
  }
  return result;
}
