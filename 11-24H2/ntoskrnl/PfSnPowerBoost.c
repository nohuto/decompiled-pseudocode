/*
 * XREFs of PfSnPowerBoost @ 0x1409526A4
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x140951F40 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402C6A90 (ExWaitForRundownProtectionRelease.c)
 *     KeCancelTimer @ 0x140333B20 (KeCancelTimer.c)
 *     KiSetTimerEx @ 0x1403347A0 (KiSetTimerEx.c)
 *     ExpNtUpdateWnfStateData @ 0x1408AC580 (ExpNtUpdateWnfStateData.c)
 */

void __fastcall PfSnPowerBoost(PEX_RUNDOWN_REF RunRef, int a2)
{
  unsigned __int64 v3; // [rsp+60h] [rbp+18h] BYREF

  if ( a2 )
  {
    if ( !_InterlockedExchangeAdd(&dword_140E67114, 1u) )
    {
      v3 = 0xFFFFFFFF00000003uLL;
      ExpNtUpdateWnfStateData(&WNF_SEB_APP_LAUNCH_PREFETCH, (__int64)&v3, 8u, 0LL, 0LL, 0, 0, 1);
    }
    ExAcquireRundownProtection(RunRef);
    KiSetTimerEx((__int64)&RunRef[1], -30000000LL, 0, 0, (__int64)&RunRef[9]);
  }
  else
  {
    if ( KeCancelTimer((PKTIMER)&RunRef[1]) )
    {
      if ( _InterlockedExchangeAdd(&dword_140E67114, 0xFFFFFFFF) == 1 )
      {
        v3 = 0xFFFFFFFF00000001uLL;
        ExpNtUpdateWnfStateData(&WNF_SEB_APP_LAUNCH_PREFETCH, (__int64)&v3, 8u, 0LL, 0LL, 0, 0, 1);
      }
      ExReleaseRundownProtection_0(RunRef);
    }
    ExWaitForRundownProtectionRelease(RunRef);
  }
}
