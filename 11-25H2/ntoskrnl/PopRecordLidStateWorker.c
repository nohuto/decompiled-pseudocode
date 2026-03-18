/*
 * XREFs of PopRecordLidStateWorker @ 0x140AAF900
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopOkayToQueueNextWorkItem @ 0x1404A4824 (PopOkayToQueueNextWorkItem.c)
 *     PopBsdHandleRequest @ 0x1404A7FA0 (PopBsdHandleRequest.c)
 *     PopAcquirePolicyLock @ 0x140B57E80 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B57ED0 (PopReleasePolicyLock.c)
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
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopBsdUpdateLock);
    BYTE11(PopBsdPowerTransition) = v3 | BYTE11(PopBsdPowerTransition) & 0x3F;
    dword_140F071EC = BYTE11(PopBsdPowerTransition) >> 6;
    PopBsdHandleRequest(1u);
    return PopReleaseRwLock(&PopBsdUpdateLock);
  }
  return result;
}
