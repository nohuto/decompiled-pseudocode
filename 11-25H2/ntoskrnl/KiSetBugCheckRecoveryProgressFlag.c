/*
 * XREFs of KiSetBugCheckRecoveryProgressFlag @ 0x1405C2308
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x1405C13E4 (KiAttemptBugcheckRecovery.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x1405C1C60 (KiDeferredBugcheckRecoveryWorker.c)
 *     KiHandleMultipleBugchecksDuringRecovery @ 0x1405C1F20 (KiHandleMultipleBugchecksDuringRecovery.c)
 * Callees:
 *     KiUpdateBugcheckRecoveryProgress @ 0x1405C24DC (KiUpdateBugcheckRecoveryProgress.c)
 */

__int64 __fastcall KiSetBugCheckRecoveryProgressFlag(int a1)
{
  __int64 v2; // [rsp+20h] [rbp-28h] BYREF
  int v3; // [rsp+28h] [rbp-20h]
  __int64 v4; // [rsp+2Ch] [rbp-1Ch]

  v4 = 0LL;
  v2 = 2LL;
  v3 = a1;
  return KiUpdateBugcheckRecoveryProgress(&v2);
}
