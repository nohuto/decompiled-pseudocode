/*
 * XREFs of PopPolicyTimeChange @ 0x140A13A00
 * Callers:
 *     <none>
 * Callees:
 *     PopEventCalloutDispatch @ 0x1404AAEB8 (PopEventCalloutDispatch.c)
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
 *     ExAcquireTimeRefreshLockShared @ 0x140A13A50 (ExAcquireTimeRefreshLockShared.c)
 *     ExReleaseTimeRefreshLockShared @ 0x140A13ABC (ExReleaseTimeRefreshLockShared.c)
 */

__int64 PopPolicyTimeChange()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8

  ExAcquireTimeRefreshLockShared();
  ZwUpdateWnfStateData((__int64)&WNF_PO_SYSTEM_TIME_CHANGED, (__int64)&PopTimeChangeInfo);
  ExReleaseTimeRefreshLockShared(v1, v0, v2);
  PopEventCalloutDispatch(3, 0LL);
  return 0LL;
}
