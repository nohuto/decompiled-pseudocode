/*
 * XREFs of __security_check_cookie @ 0x1400059D0
 * Callers:
 *     CiLogThreadBuffering @ 0x1400010E0 (CiLogThreadBuffering.c)
 *     CiSchedulerSleep @ 0x140001F80 (CiSchedulerSleep.c)
 *     CiSchedulerWait @ 0x140002650 (CiSchedulerWait.c)
 *     CiSystemDetectPotentiallyStarvedProcessors @ 0x140003040 (CiSystemDetectPotentiallyStarvedProcessors.c)
 *     CiSchedulerTaskIndexYield @ 0x140003320 (CiSchedulerTaskIndexYield.c)
 *     CiLogSchedulerEvent @ 0x140003860 (CiLogSchedulerEvent.c)
 *     CiLogTaskIndexDeadlineExpired @ 0x140003950 (CiLogTaskIndexDeadlineExpired.c)
 *     CiLogTaskIndexPreDeadlineExpired @ 0x1400039C0 (CiLogTaskIndexPreDeadlineExpired.c)
 *     CiLogSchedulerWakeup @ 0x140004010 (CiLogSchedulerWakeup.c)
 *     CiLogSchedulerSleep @ 0x1400040B0 (CiLogSchedulerSleep.c)
 *     CiLogSetBufferingMode @ 0x140004140 (CiLogSetBufferingMode.c)
 *     CiLogTurboEngaged @ 0x1400041D0 (CiLogTurboEngaged.c)
 *     CiLogThreadJoin @ 0x140004420 (CiLogThreadJoin.c)
 *     CiLogThreadLeave @ 0x140004580 (CiLogThreadLeave.c)
 *     CiLogTaskIndexCancelYield @ 0x140004690 (CiLogTaskIndexCancelYield.c)
 *     wil_details_RecordCachedUsage @ 0x140004AAC (wil_details_RecordCachedUsage.c)
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x140005260 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     __GSHandlerCheckCommon @ 0x1400057FC (__GSHandlerCheckCommon.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x14000DADC (wil_details_UpdateFeatureConfiguredStates.c)
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x14000DD88 (wil_RtlStagingConfig_QueryFeatureState.c)
 *     CiCreateTaskIndexClientFromThread @ 0x14000E220 (CiCreateTaskIndexClientFromThread.c)
 *     CiNdisThrottle @ 0x14000FC90 (CiNdisThrottle.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x140010B44 (wil_details_PopulateInitialConfiguredFeatureStates.c)
 *     CiConfigReadDWORD @ 0x140010D2C (CiConfigReadDWORD.c)
 *     CiConfigQueryValue @ 0x140010EC0 (CiConfigQueryValue.c)
 *     CiConfigInitializeFromRegistry @ 0x140011320 (CiConfigInitializeFromRegistry.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
ReportFailure:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto ReportFailure;
  }
}
