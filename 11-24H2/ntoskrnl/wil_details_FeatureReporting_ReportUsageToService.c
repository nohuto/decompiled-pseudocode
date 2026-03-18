/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToService @ 0x14053CAC4
 * Callers:
 *     KeConfigureHeteroProcessors @ 0x140438880 (KeConfigureHeteroProcessors.c)
 *     Feature_ID51912085__private_IsEnabledPreCheck @ 0x14045E7E4 (Feature_ID51912085__private_IsEnabledPreCheck.c)
 *     Feature_OpocksAndMappedSections__private_ReportDeviceUsage @ 0x140463230 (Feature_OpocksAndMappedSections__private_ReportDeviceUsage.c)
 *     Feature_IoInvalidateDeviceState_Unconditional__private_ReportDeviceUsage @ 0x14046D5F4 (Feature_IoInvalidateDeviceState_Unconditional__private_ReportDeviceUsage.c)
 *     Feature_PreventInterfaceChangeConcurrentNotify__private_ReportDeviceUsage @ 0x14047DAD0 (Feature_PreventInterfaceChangeConcurrentNotify__private_ReportDeviceUsage.c)
 *     Feature_PdcClientPnpActionQueue__private_ReportDeviceUsage @ 0x1404934C4 (Feature_PdcClientPnpActionQueue__private_ReportDeviceUsage.c)
 *     Feature_NewWpsAssignmentAlgorithm__private_IsEnabledPreCheck @ 0x1404A4E58 (Feature_NewWpsAssignmentAlgorithm__private_IsEnabledPreCheck.c)
 *     Feature_UpperThresholdInheritance__private_ReportDeviceUsage @ 0x1404A5184 (Feature_UpperThresholdInheritance__private_ReportDeviceUsage.c)
 *     wil_details_IsEnabledFallback @ 0x1404D17E0 (wil_details_IsEnabledFallback.c)
 *     Feature_MachineHiveCache__private_ReportDeviceUsage @ 0x1404F5F9C (Feature_MachineHiveCache__private_ReportDeviceUsage.c)
 *     Feature_HaltOnAddress_QueuedSpinLock__private_ReportDeviceUsage @ 0x1404F638C (Feature_HaltOnAddress_QueuedSpinLock__private_ReportDeviceUsage.c)
 *     Feature_HaltOnAddress_Barrier__private_ReportDeviceUsage @ 0x1404F63F4 (Feature_HaltOnAddress_Barrier__private_ReportDeviceUsage.c)
 *     Feature_ShortThreadQuantum__private_ReportDeviceUsage @ 0x1404F645C (Feature_ShortThreadQuantum__private_ReportDeviceUsage.c)
 *     Feature_AggressiveInputSuppression__private_IsEnabledPreCheck @ 0x1404F97A4 (Feature_AggressiveInputSuppression__private_IsEnabledPreCheck.c)
 *     Feature_SleepStudySlimControlEtl__private_ReportDeviceUsage @ 0x1404FAA10 (Feature_SleepStudySlimControlEtl__private_ReportDeviceUsage.c)
 *     IopAddBugcheckDirectedTransitionTriageData @ 0x14059F4AC (IopAddBugcheckDirectedTransitionTriageData.c)
 *     Feature_PerProcessorClockTickServer__private_IsEnabledPreCheck @ 0x1405B8E44 (Feature_PerProcessorClockTickServer__private_IsEnabledPreCheck.c)
 *     Feature_TickAccumulationFromAccountingPeriods__private_IsEnabledPreCheck @ 0x1405B8F04 (Feature_TickAccumulationFromAccountingPeriods__private_IsEnabledPreCheck.c)
 *     Feature_Servicing_IdealProcessorEventOutsideLocks__private_ReportUsageFallback @ 0x1405BF3BC (Feature_Servicing_IdealProcessorEventOutsideLocks__private_ReportUsageFallback.c)
 *     Feature_Servicing_DeadlineQosReschedule__private_ReportUsageFallback @ 0x1405C20CC (Feature_Servicing_DeadlineQosReschedule__private_ReportUsageFallback.c)
 *     Feature_Sx_PEP_Notification_Synchronization__private_ReportUsageFallback @ 0x1405CD938 (Feature_Sx_PEP_Notification_Synchronization__private_ReportUsageFallback.c)
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledOtherReporting @ 0x14064EECC (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledOtherReporting.c)
 *     ExpPrepareNewAtsDevice @ 0x140658070 (ExpPrepareNewAtsDevice.c)
 *     WheaResumedFromHibernate @ 0x14065B70C (WheaResumedFromHibernate.c)
 *     Feature_VelTest_KM_ControlledByProxy_DBD_1__private_ReportUsageFallback @ 0x14066893C (Feature_VelTest_KM_ControlledByProxy_DBD_1__private_ReportUsageFallback.c)
 *     SdbpCheckApplicationTypeAttributes @ 0x140696028 (SdbpCheckApplicationTypeAttributes.c)
 *     SshSessionManagerFlushBuffers @ 0x1407668B8 (SshSessionManagerFlushBuffers.c)
 *     SshpAlpcProcessAlpcMessage @ 0x140767E0C (SshpAlpcProcessAlpcMessage.c)
 *     SshpAlpcProcessMessage @ 0x140768068 (SshpAlpcProcessMessage.c)
 *     SepSetSystemPaths @ 0x14078EA40 (SepSetSystemPaths.c)
 *     CmpLoadHiveThread @ 0x1407CB060 (CmpLoadHiveThread.c)
 *     SdbpCheckBackupApplicationAttributes @ 0x140802990 (SdbpCheckBackupApplicationAttributes.c)
 *     SdbpCheckPackageAttributes @ 0x140804080 (SdbpCheckPackageAttributes.c)
 *     SdbpFreeAppAttributes @ 0x14080457C (SdbpFreeAppAttributes.c)
 *     SdbpCheckAttribute @ 0x1408075F4 (SdbpCheckAttribute.c)
 *     SdbpCheckFromStringVersion @ 0x1408078F4 (SdbpCheckFromStringVersion.c)
 *     SdbpCheckUptoStringVersion @ 0x140807ACC (SdbpCheckUptoStringVersion.c)
 *     PspSchedulerSharedDataRegionCreate @ 0x140946D5C (PspSchedulerSharedDataRegionCreate.c)
 *     PspThreadOpen @ 0x1409E8460 (PspThreadOpen.c)
 *     PspProcessOpen @ 0x1409E8660 (PspProcessOpen.c)
 *     PnpActivatePdcForDeviceEvent @ 0x1409EDD5C (PnpActivatePdcForDeviceEvent.c)
 *     SeQuerySigningPolicy @ 0x140A1BB40 (SeQuerySigningPolicy.c)
 *     PopPowerAggregatorHandleActiveIntent @ 0x140A376A0 (PopPowerAggregatorHandleActiveIntent.c)
 *     PspValidateCreateProcessProtection @ 0x140A8BA34 (PspValidateCreateProcessProtection.c)
 *     PnpEarlyLaunchImageNotificationPostProcess @ 0x140C22A30 (PnpEarlyLaunchImageNotificationPostProcess.c)
 *     PopEvaluateInputSuppressionRequired @ 0x140C305FC (PopEvaluateInputSuppressionRequired.c)
 *     PopPowerButtonSuppressionInit @ 0x140C306E0 (PopPowerButtonSuppressionInit.c)
 *     ExpTimerInitialization @ 0x140C42C88 (ExpTimerInitialization.c)
 *     MiProtectSharedUserPage @ 0x140C50154 (MiProtectSharedUserPage.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1403A4B50 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     wil_details_MapReportingKind @ 0x1404838F0 (wil_details_MapReportingKind.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportUsageToService(__int64 a1, char a2, int a3)
{
  unsigned int v4; // edi
  unsigned int v5; // eax
  unsigned int v6; // r9d
  __int64 v7; // r10
  __int64 result; // rax

  v4 = a2 & 1;
  v5 = wil_details_MapReportingKind(a3, v4);
  result = wil_details_FeatureReporting_ReportUsageToServiceDirect(a1, v7, v5, v6);
  if ( (_DWORD)result )
  {
    result = g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
      return guard_dispatch_icall_no_overrides(*(unsigned int *)(a1 + 24), *(_QWORD *)(a1 + 16), 0LL, v4);
  }
  return result;
}
