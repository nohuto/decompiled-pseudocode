/*
 * XREFs of PopPolicyTimeChange @ 0x140A09500
 * Callers:
 *     <none>
 * Callees:
 *     PopEventCalloutDispatch @ 0x1404A9BF8 (PopEventCalloutDispatch.c)
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 *     ExAcquireTimeRefreshLockShared @ 0x140A09550 (ExAcquireTimeRefreshLockShared.c)
 *     ExReleaseTimeRefreshLockShared @ 0x140A095BC (ExReleaseTimeRefreshLockShared.c)
 */

__int64 __fastcall PopPolicyTimeChange(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ExAcquireTimeRefreshLockShared(a1, a2, a3, a4);
  ZwUpdateWnfStateData(&WNF_PO_SYSTEM_TIME_CHANGED, &PopTimeChangeInfo, 0x10u, 0LL, 0LL, 0, 0);
  ExReleaseTimeRefreshLockShared();
  PopEventCalloutDispatch(3, 0LL);
  return 0LL;
}
