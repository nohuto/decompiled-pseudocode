/*
 * XREFs of PopPdcCompleteResiliencyCallback @ 0x140A8AF3C
 * Callers:
 *     PopDirectedDripsNotifyResiliencyCompletionWorker @ 0x14049DBB0 (PopDirectedDripsNotifyResiliencyCompletionWorker.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopPdcCompleteResiliencyCallback(__int64 a1, __int64 a2)
{
  return guard_dispatch_icall_no_overrides(1LL, a2);
}
