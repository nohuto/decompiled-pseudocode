/*
 * XREFs of HvlPhase1Initialize @ 0x14057F2B0
 * Callers:
 *     InitBootProcessor @ 0x140BF9C88 (InitBootProcessor.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140413F40 (MmMapIoSpaceEx.c)
 *     KeRegisterBugCheckReasonCallback @ 0x140469560 (KeRegisterBugCheckReasonCallback.c)
 *     HviIsAnyHypervisorPresent @ 0x1404A3870 (HviIsAnyHypervisorPresent.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x14057EC40 (HvlConfigureMemoryZeroingOnReset.c)
 *     HvlpMapStatisticsPage @ 0x140581078 (HvlpMapStatisticsPage.c)
 *     HvlpSetupCachedHypercallPages @ 0x140581D54 (HvlpSetupCachedHypercallPages.c)
 *     HvlpInitializePowerStatistics @ 0x140586330 (HvlpInitializePowerStatistics.c)
 *     HvlpInitializeHvCrashdump @ 0x1405873BC (HvlpInitializeHvCrashdump.c)
 *     MiMarkRetpolineBits @ 0x140A83A24 (MiMarkRetpolineBits.c)
 *     VslpIumPhase0Initialize @ 0x140C08DD8 (VslpIumPhase0Initialize.c)
 */

__int64 __fastcall HvlPhase1Initialize(__int64 a1)
{
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0LL;
  if ( HviIsAnyHypervisorPresent() && (HvlpRootFlags & 4) == 0 )
  {
    HvlpHvIdentityInfoCallbackRecord.State = 0;
    KeRegisterBugCheckReasonCallback(
      &HvlpHvIdentityInfoCallbackRecord,
      HvlpHvIdentityInfoCallback,
      KbCallbackSecondaryDumpData,
      &HvlpComponentName);
  }
  if ( HvlHypervisorConnected )
  {
    if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
      MiMarkRetpolineBits(HvlpHypercallCodeVa, 4096LL, 1LL);
    HvlpSetupCachedHypercallPages(KeGetCurrentPrcb());
    HvlpInitializePowerStatistics();
    if ( (HvlpRootFlags & 0x10) != 0 )
    {
      v3 = 0LL;
      if ( (int)HvlpMapStatisticsPage(1LL, &v3, &v4) >= 0 )
        HvlpHypervisorStatsPage = MmMapIoSpaceEx(v4, 4096LL, 2u);
    }
    HvlConfigureMemoryZeroingOnReset(1);
    HvlpFlags |= 8u;
    VslpIumPhase0Initialize(a1);
    if ( (HvlpRootFlags & 4) != 0 || VslVsmEnabled )
      HvlpInitializeHvCrashdump(*(_QWORD *)(a1 + 240) + 2504LL);
  }
  return 0LL;
}
