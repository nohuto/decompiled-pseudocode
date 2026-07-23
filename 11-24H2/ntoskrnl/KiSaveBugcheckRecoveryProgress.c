/*
 * XREFs of KiSaveBugcheckRecoveryProgress @ 0x1405C3C80
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x1405C2EB4 (KiAttemptBugcheckRecovery.c)
 *     KiBugCheckRecoveryCleanupFromCrashDump @ 0x1405C31FC (KiBugCheckRecoveryCleanupFromCrashDump.c)
 *     KiBugCheckRecoveryPrepareForCrashDump @ 0x1405C35A0 (KiBugCheckRecoveryPrepareForCrashDump.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x1405C3730 (KiDeferredBugcheckRecoveryWorker.c)
 * Callees:
 *     KiUpdateBugcheckRecoveryProgress @ 0x1405C3FAC (KiUpdateBugcheckRecoveryProgress.c)
 */

__int64 __fastcall KiSaveBugcheckRecoveryProgress(int a1)
{
  __int64 v2; // [rsp+20h] [rbp-28h] BYREF
  int v3; // [rsp+28h] [rbp-20h]
  __int64 v4; // [rsp+2Ch] [rbp-1Ch]

  v4 = 0LL;
  v2 = 1LL;
  v3 = a1;
  return KiUpdateBugcheckRecoveryProgress(&v2);
}
