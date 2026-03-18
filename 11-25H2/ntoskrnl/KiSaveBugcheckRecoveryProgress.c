/*
 * XREFs of KiSaveBugcheckRecoveryProgress @ 0x1405C21B0
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x1405C13E4 (KiAttemptBugcheckRecovery.c)
 *     KiBugCheckRecoveryCleanupFromCrashDump @ 0x1405C172C (KiBugCheckRecoveryCleanupFromCrashDump.c)
 *     KiBugCheckRecoveryPrepareForCrashDump @ 0x1405C1AD0 (KiBugCheckRecoveryPrepareForCrashDump.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x1405C1C60 (KiDeferredBugcheckRecoveryWorker.c)
 * Callees:
 *     KiUpdateBugcheckRecoveryProgress @ 0x1405C24DC (KiUpdateBugcheckRecoveryProgress.c)
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
