/*
 * XREFs of PfSnPowerBoost @ 0x1408EC6A4
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x1408EBF40 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     KeCancelTimer @ 0x1402ECAA0 (KeCancelTimer.c)
 *     KiSetTimerEx @ 0x1402ED730 (KiSetTimerEx.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     ExWaitForRundownProtectionRelease @ 0x14036DCA0 (ExWaitForRundownProtectionRelease.c)
 *     ExpNtUpdateWnfStateData @ 0x1408E4380 (ExpNtUpdateWnfStateData.c)
 */

void __fastcall PfSnPowerBoost(PEX_RUNDOWN_REF RunRef, int a2)
{
  unsigned __int64 v3; // [rsp+60h] [rbp+18h] BYREF

  if ( a2 )
  {
    if ( !_InterlockedExchangeAdd(&dword_140E66E54, 1u) )
    {
      v3 = 0xFFFFFFFF00000003uLL;
      ExpNtUpdateWnfStateData(&WNF_SEB_APP_LAUNCH_PREFETCH, (__int64)&v3, 8u, 0LL, 0LL, 0, 0, 1);
    }
    ExAcquireRundownProtection_0(RunRef);
    KiSetTimerEx((__int64)&RunRef[1], -30000000LL, 0, 0, (__int64)&RunRef[9]);
  }
  else
  {
    if ( KeCancelTimer((PKTIMER)&RunRef[1]) )
    {
      if ( _InterlockedExchangeAdd(&dword_140E66E54, 0xFFFFFFFF) == 1 )
      {
        v3 = 0xFFFFFFFF00000001uLL;
        ExpNtUpdateWnfStateData(&WNF_SEB_APP_LAUNCH_PREFETCH, (__int64)&v3, 8u, 0LL, 0LL, 0, 0, 1);
      }
      ExReleaseRundownProtection_0(RunRef);
    }
    ExWaitForRundownProtectionRelease(RunRef);
  }
}
