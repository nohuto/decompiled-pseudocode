/*
 * XREFs of wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053A44C
 * Callers:
 *     KeConfigureHeteroProcessors @ 0x14042B440 (KeConfigureHeteroProcessors.c)
 *     Feature_ID51912085__private_IsEnabledPreCheck @ 0x1404536A4 (Feature_ID51912085__private_IsEnabledPreCheck.c)
 *     Feature_OpocksAndMappedSections__private_ReportDeviceUsage @ 0x140459D1C (Feature_OpocksAndMappedSections__private_ReportDeviceUsage.c)
 *     Feature_IoInvalidateDeviceState_Unconditional__private_ReportDeviceUsage @ 0x140468194 (Feature_IoInvalidateDeviceState_Unconditional__private_ReportDeviceUsage.c)
 *     Feature_PreventInterfaceChangeConcurrentNotify__private_ReportDeviceUsage @ 0x140478D64 (Feature_PreventInterfaceChangeConcurrentNotify__private_ReportDeviceUsage.c)
 *     Feature_PdcClientPnpActionQueue__private_ReportDeviceUsage @ 0x14048DDF4 (Feature_PdcClientPnpActionQueue__private_ReportDeviceUsage.c)
 *     Feature_NewWpsAssignmentAlgorithm__private_IsEnabledPreCheck @ 0x14049FBE8 (Feature_NewWpsAssignmentAlgorithm__private_IsEnabledPreCheck.c)
 *     Feature_UpperThresholdInheritance__private_ReportDeviceUsage @ 0x14049FF14 (Feature_UpperThresholdInheritance__private_ReportDeviceUsage.c)
 *     wil_details_IsEnabledFallback @ 0x1404CA820 (wil_details_IsEnabledFallback.c)
 *     Feature_MachineHiveCache__private_ReportDeviceUsage @ 0x1404F389C (Feature_MachineHiveCache__private_ReportDeviceUsage.c)
 *     Feature_HaltOnAddress_QueuedSpinLock__private_ReportDeviceUsage @ 0x1404F3C8C (Feature_HaltOnAddress_QueuedSpinLock__private_ReportDeviceUsage.c)
 *     Feature_HaltOnAddress_Barrier__private_ReportDeviceUsage @ 0x1404F3CF4 (Feature_HaltOnAddress_Barrier__private_ReportDeviceUsage.c)
 *     Feature_ShortThreadQuantum__private_ReportDeviceUsage @ 0x1404F3D5C (Feature_ShortThreadQuantum__private_ReportDeviceUsage.c)
 *     Feature_AggressiveInputSuppression__private_IsEnabledPreCheck @ 0x1404F7084 (Feature_AggressiveInputSuppression__private_IsEnabledPreCheck.c)
 *     Feature_SleepStudySlimControlEtl__private_ReportDeviceUsage @ 0x1404F82F0 (Feature_SleepStudySlimControlEtl__private_ReportDeviceUsage.c)
 *     IopAddBugcheckDirectedTransitionTriageData @ 0x14059C3D8 (IopAddBugcheckDirectedTransitionTriageData.c)
 *     Feature_PerProcessorClockTickServer__private_IsEnabledPreCheck @ 0x1405B6484 (Feature_PerProcessorClockTickServer__private_IsEnabledPreCheck.c)
 *     Feature_TickAccumulationFromAccountingPeriods__private_IsEnabledPreCheck @ 0x1405B6544 (Feature_TickAccumulationFromAccountingPeriods__private_IsEnabledPreCheck.c)
 *     Feature_Servicing_IdealProcessorEventOutsideLocks__private_ReportUsageFallback @ 0x1405BC9EC (Feature_Servicing_IdealProcessorEventOutsideLocks__private_ReportUsageFallback.c)
 *     Feature_Servicing_DeadlineQosReschedule__private_ReportUsageFallback @ 0x1405BF69C (Feature_Servicing_DeadlineQosReschedule__private_ReportUsageFallback.c)
 *     Feature_Sx_PEP_Notification_Synchronization__private_ReportUsageFallback @ 0x1405CB0A8 (Feature_Sx_PEP_Notification_Synchronization__private_ReportUsageFallback.c)
 *     ExpPrepareNewAtsDevice @ 0x140656770 (ExpPrepareNewAtsDevice.c)
 *     WheaResumedFromHibernate @ 0x140659E2C (WheaResumedFromHibernate.c)
 *     Feature_CFR_Child_KM_C__private_ReportUsageFallback @ 0x14066722C (Feature_CFR_Child_KM_C__private_ReportUsageFallback.c)
 *     Feature_CFR_Parent_KM_C__private_ReportUsageFallback @ 0x14066729C (Feature_CFR_Parent_KM_C__private_ReportUsageFallback.c)
 *     Feature_VelTest_KM_ControlledByProxy_DBD_1__private_ReportUsageFallback @ 0x14066730C (Feature_VelTest_KM_ControlledByProxy_DBD_1__private_ReportUsageFallback.c)
 *     Feature_GatePerf__private_ReportUsageFallback @ 0x140667BCC (Feature_GatePerf__private_ReportUsageFallback.c)
 *     Feature_ImplVal__private_ReportUsageFallback @ 0x140667CBC (Feature_ImplVal__private_ReportUsageFallback.c)
 *     Feature_NiwTest__private_ReportUsageFallback @ 0x140667F1C (Feature_NiwTest__private_ReportUsageFallback.c)
 *     Feature_PerfImpTest__private_ReportUsageFallback @ 0x14066800C (Feature_PerfImpTest__private_ReportUsageFallback.c)
 *     Feature_PerfTestCen2__private_ReportUsageFallback @ 0x1406680FC (Feature_PerfTestCen2__private_ReportUsageFallback.c)
 *     Feature_SettingsDel__private_ReportUsageFallback @ 0x1406681EC (Feature_SettingsDel__private_ReportUsageFallback.c)
 *     Feature_Ten2Loc__private_ReportUsageFallback @ 0x1406682DC (Feature_Ten2Loc__private_ReportUsageFallback.c)
 *     Feature_TestAccPerf__private_ReportUsageFallback @ 0x1406683CC (Feature_TestAccPerf__private_ReportUsageFallback.c)
 *     Feature_TestConfNum__private_ReportUsageFallback @ 0x1406684BC (Feature_TestConfNum__private_ReportUsageFallback.c)
 *     Feature_TestConfVar__private_ReportUsageFallback @ 0x1406685AC (Feature_TestConfVar__private_ReportUsageFallback.c)
 *     Feature_TestGateImp__private_ReportUsageFallback @ 0x1406686FC (Feature_TestGateImp__private_ReportUsageFallback.c)
 *     Feature_TestLabVal__private_ReportUsageFallback @ 0x1406687EC (Feature_TestLabVal__private_ReportUsageFallback.c)
 *     Feature_TestLoc1Perf__private_ReportUsageFallback @ 0x140668BBC (Feature_TestLoc1Perf__private_ReportUsageFallback.c)
 *     Feature_TestUx32__private_ReportUsageFallback @ 0x140668E7C (Feature_TestUx32__private_ReportUsageFallback.c)
 *     Feature_TestValidate__private_ReportUsageFallback @ 0x1406690DC (Feature_TestValidate__private_ReportUsageFallback.c)
 *     Feature_UexTest7__private_ReportUsageFallback @ 0x1406691CC (Feature_UexTest7__private_ReportUsageFallback.c)
 *     Feature_UxConfTest__private_ReportUsageFallback @ 0x14066942C (Feature_UxConfTest__private_ReportUsageFallback.c)
 *     Feature_UxLabTest__private_ReportUsageFallback @ 0x14066951C (Feature_UxLabTest__private_ReportUsageFallback.c)
 *     Feature_UxPerfImp__private_ReportUsageFallback @ 0x14066960C (Feature_UxPerfImp__private_ReportUsageFallback.c)
 *     Feature_UxSettingTest__private_ReportUsageFallback @ 0x1406696FC (Feature_UxSettingTest__private_ReportUsageFallback.c)
 *     Feature_ValAccTest__private_ReportUsageFallback @ 0x1406697EC (Feature_ValAccTest__private_ReportUsageFallback.c)
 *     Feature_ValConf__private_ReportUsageFallback @ 0x1406698DC (Feature_ValConf__private_ReportUsageFallback.c)
 *     Feature_ValLabTest__private_ReportUsageFallback @ 0x1406699CC (Feature_ValLabTest__private_ReportUsageFallback.c)
 *     SdbpCheckApplicationTypeAttributes @ 0x1406970F8 (SdbpCheckApplicationTypeAttributes.c)
 *     SshSessionManagerFlushBuffers @ 0x140766288 (SshSessionManagerFlushBuffers.c)
 *     SshpAlpcProcessAlpcMessage @ 0x14076802C (SshpAlpcProcessAlpcMessage.c)
 *     SshpAlpcProcessMessage @ 0x140768288 (SshpAlpcProcessMessage.c)
 *     SepSetSystemPaths @ 0x14078E970 (SepSetSystemPaths.c)
 *     CmpLoadHiveThread @ 0x1407CB550 (CmpLoadHiveThread.c)
 *     SdbpCheckBackupApplicationAttributes @ 0x1408030D0 (SdbpCheckBackupApplicationAttributes.c)
 *     SdbpCheckPackageAttributes @ 0x1408047C0 (SdbpCheckPackageAttributes.c)
 *     SdbpFreeAppAttributes @ 0x140804CBC (SdbpFreeAppAttributes.c)
 *     SdbpCheckAttribute @ 0x140807D34 (SdbpCheckAttribute.c)
 *     SdbpCheckFromStringVersion @ 0x140808034 (SdbpCheckFromStringVersion.c)
 *     SdbpCheckUptoStringVersion @ 0x14080820C (SdbpCheckUptoStringVersion.c)
 *     PspSchedulerSharedDataRegionCreate @ 0x1408EB67C (PspSchedulerSharedDataRegionCreate.c)
 *     PspThreadOpen @ 0x1409E3420 (PspThreadOpen.c)
 *     PspProcessOpen @ 0x1409E3620 (PspProcessOpen.c)
 *     PnpActivatePdcForDeviceEvent @ 0x1409EB79C (PnpActivatePdcForDeviceEvent.c)
 *     SeQuerySigningPolicy @ 0x1409FA0B0 (SeQuerySigningPolicy.c)
 *     PopPowerAggregatorHandleActiveIntent @ 0x140A3ABE0 (PopPowerAggregatorHandleActiveIntent.c)
 *     PspValidateCreateProcessProtection @ 0x140A87F24 (PspValidateCreateProcessProtection.c)
 *     PnpEarlyLaunchImageNotificationPostProcess @ 0x140C24A60 (PnpEarlyLaunchImageNotificationPostProcess.c)
 *     PopEvaluateInputSuppressionRequired @ 0x140C3271C (PopEvaluateInputSuppressionRequired.c)
 *     PopPowerButtonSuppressionInit @ 0x140C32800 (PopPowerButtonSuppressionInit.c)
 *     ExpTimerInitialization @ 0x140C44DD8 (ExpTimerInitialization.c)
 *     MiProtectSharedUserPage @ 0x140C522E4 (MiProtectSharedUserPage.c)
 * Callees:
 *     <none>
 */

void __fastcall wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(unsigned __int8 a1, int a2, __int64 a3)
{
  volatile signed __int32 *v3; // r9
  int v4; // edx
  unsigned int v5; // r10d
  signed __int32 v6; // eax
  signed __int32 v7; // ett

  v3 = *(volatile signed __int32 **)a3;
  v4 = a2 - 3;
  if ( v4 )
  {
    if ( v4 != 1 )
      return;
    v5 = 32;
  }
  else
  {
    v5 = 16;
  }
  if ( *(_BYTE *)(a3 + 30) || *(_BYTE *)(a3 + 29) )
  {
    _InterlockedOr(v3, v5);
  }
  else
  {
    v6 = *v3;
    do
    {
      if ( (v6 & 2) == 0 )
        break;
      if ( ((a1 ^ (unsigned __int8)v6) & 1) != 0 )
        break;
      v7 = v6;
      v6 = _InterlockedCompareExchange(v3, v6 | v5, v6);
    }
    while ( v7 != v6 );
  }
}
