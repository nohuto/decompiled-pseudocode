/*
 * XREFs of PopPolicyTimeChange @ 0x140A0C160
 * Callers:
 *     <none>
 * Callees:
 *     PopEventCalloutDispatch @ 0x1404A50B8 (PopEventCalloutDispatch.c)
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 *     ExAcquireTimeRefreshLockShared @ 0x140A0C1B0 (ExAcquireTimeRefreshLockShared.c)
 *     ExReleaseTimeRefreshLockShared @ 0x140A0C21C (ExReleaseTimeRefreshLockShared.c)
 */

__int64 PopPolicyTimeChange()
{
  ExAcquireTimeRefreshLockShared();
  ZwUpdateWnfStateData(&WNF_PO_SYSTEM_TIME_CHANGED, &PopTimeChangeInfo, 0x10u, 0LL, 0LL, 0, 0);
  ExReleaseTimeRefreshLockShared();
  PopEventCalloutDispatch(3, 0LL);
  return 0LL;
}
