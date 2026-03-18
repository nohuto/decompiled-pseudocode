/*
 * XREFs of KiSetBugCheckRecoveryProgressFlag @ 0x1405C66A8
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x1405C5784 (KiAttemptBugcheckRecovery.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x1405C6000 (KiDeferredBugcheckRecoveryWorker.c)
 *     KiHandleMultipleBugchecksDuringRecovery @ 0x1405C62C0 (KiHandleMultipleBugchecksDuringRecovery.c)
 * Callees:
 *     KiUpdateBugcheckRecoveryProgress @ 0x1405C687C (KiUpdateBugcheckRecoveryProgress.c)
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
