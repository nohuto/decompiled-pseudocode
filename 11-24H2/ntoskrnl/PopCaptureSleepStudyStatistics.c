/*
 * XREFs of PopCaptureSleepStudyStatistics @ 0x14032DC2C
 * Callers:
 *     PopSleepstudyCaptureSessionStatistics @ 0x140ABDD04 (PopSleepstudyCaptureSessionStatistics.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopCalculateCsSummary @ 0x14032BF4C (PopCalculateCsSummary.c)
 *     PopCalculateIdleInformation @ 0x14032D51C (PopCalculateIdleInformation.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x14032D84C (PpmSnapDripsAccountingSnapshot.c)
 *     PopDiagTraceFxRundown @ 0x14032E260 (PopDiagTraceFxRundown.c)
 *     PopFxStopDeviceAccounting @ 0x14032F168 (PopFxStopDeviceAccounting.c)
 *     PpmIdleStartCsVetoAccounting @ 0x1403CBC64 (PpmIdleStartCsVetoAccounting.c)
 *     PopGetPowerSettingValue @ 0x14049172C (PopGetPowerSettingValue.c)
 *     PopFxStartDeviceAccounting @ 0x1404984AC (PopFxStartDeviceAccounting.c)
 *     PpmIdleCaptureCsVetoAccounting @ 0x1404AFDBC (PpmIdleCaptureCsVetoAccounting.c)
 *     PopGetModernStandbyTransitionReason @ 0x1404B3CFC (PopGetModernStandbyTransitionReason.c)
 *     PpmGetPlatformSelectionVetoCounts @ 0x1404B51CC (PpmGetPlatformSelectionVetoCounts.c)
 *     PopDiagGetPowerSchemeInfo @ 0x1404CEA10 (PopDiagGetPowerSchemeInfo.c)
 *     PpmResetDripsAccountingSnapshot @ 0x1404F8648 (PpmResetDripsAccountingSnapshot.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PopFxResetSocSubsystemAccounting @ 0x14074F470 (PopFxResetSocSubsystemAccounting.c)
 *     ExStartRecordingIRTimerExpiries @ 0x1407BB318 (ExStartRecordingIRTimerExpiries.c)
 *     PopFxLogSocSubsystemMetadata @ 0x140985A6C (PopFxLogSocSubsystemMetadata.c)
 *     PopFxLogSocSubsystemBlockingTimes @ 0x14098600C (PopFxLogSocSubsystemBlockingTimes.c)
 *     PopFxLookupSocSubsystemsByPlatformIdleState @ 0x1409863B0 (PopFxLookupSocSubsystemsByPlatformIdleState.c)
 *     PopFilterCapabilities @ 0x1409B923C (PopFilterCapabilities.c)
 *     PopIsLockConsoleTimeoutActive @ 0x1409BA32C (PopIsLockConsoleTimeoutActive.c)
 *     PopDirectedDripsNotify @ 0x140A69400 (PopDirectedDripsNotify.c)
 *     PopSetConnectedStandbyMarker @ 0x140A8A930 (PopSetConnectedStandbyMarker.c)
 *     PopIsHibernateSupported @ 0x140A8BE18 (PopIsHibernateSupported.c)
 *     PopDiagTraceCsEnterReason @ 0x140A90F24 (PopDiagTraceCsEnterReason.c)
 *     PopGetEnergyCounter @ 0x140A9BC20 (PopGetEnergyCounter.c)
 *     PopClearConnectedStandbyMarker @ 0x140A9CF60 (PopClearConnectedStandbyMarker.c)
 *     PopQueryInputSuppressionCount @ 0x140AA09FC (PopQueryInputSuppressionCount.c)
 *     PopNetIsCompliantNicPresent @ 0x140AA18E4 (PopNetIsCompliantNicPresent.c)
 *     PopQueryPowerButtonSuppressionCount @ 0x140AA4238 (PopQueryPowerButtonSuppressionCount.c)
 *     PopDiagTraceCsConsumption @ 0x140AA741C (PopDiagTraceCsConsumption.c)
 *     PopQueryRemainingSystemIdleTime @ 0x140AAE2F4 (PopQueryRemainingSystemIdleTime.c)
 *     ExStopRecordingIRTimerExpiries @ 0x140ABCE48 (ExStopRecordingIRTimerExpiries.c)
 *     PopDiagTraceCsExitReason @ 0x140AC1838 (PopDiagTraceCsExitReason.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopCaptureSleepStudyStatistics(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r14d
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  char IsHibernateSupported; // r15
  char IsLockConsoleTimeoutActive; // r12
  bool v14; // zf
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  KIRQL v18; // al
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 ModernStandbyTransitionReason; // rbx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  KIRQL v38; // al
  unsigned int v39; // ebx
  KIRQL v40; // al
  int v42; // [rsp+30h] [rbp-D0h] BYREF
  int v43; // [rsp+34h] [rbp-CCh] BYREF
  int v44; // [rsp+38h] [rbp-C8h] BYREF
  int v45; // [rsp+3Ch] [rbp-C4h] BYREF
  int v46; // [rsp+40h] [rbp-C0h] BYREF
  int v47; // [rsp+44h] [rbp-BCh] BYREF
  int v48; // [rsp+48h] [rbp-B8h] BYREF
  int v49; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v50; // [rsp+50h] [rbp-B0h] BYREF
  int v51; // [rsp+58h] [rbp-A8h]
  __int64 v52; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v53; // [rsp+68h] [rbp-98h] BYREF
  __int128 v54; // [rsp+70h] [rbp-90h] BYREF
  __int128 v55; // [rsp+80h] [rbp-80h]
  _BYTE v56[80]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v57; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v58; // [rsp+F0h] [rbp-10h] BYREF

  v4 = 0;
  v43 = 0;
  v52 = 0LL;
  v42 = 0;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v58 = 0LL;
  v57 = 0LL;
  memset_0(v56, 0, 0x4CuLL);
  IsHibernateSupported = 0;
  v51 = *(_DWORD *)(a3 + 12);
  IsLockConsoleTimeoutActive = 0;
  LODWORD(v50) = *(_DWORD *)(a3 + 8);
  v15 = *a1 - *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1;
  v14 = *a1 == *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1;
  v44 = 0;
  v49 = 0;
  v48 = 0;
  v46 = 0;
  v47 = 0;
  v45 = 0;
  if ( v14 )
    v15 = a1[1] - *(_QWORD *)GUID_SPM_LOW_POWER_CS.Data4;
  if ( !v15 )
    IsLockConsoleTimeoutActive = PopIsLockConsoleTimeoutActive();
  if ( qword_140E67598 )
  {
    guard_dispatch_icall_no_overrides(a4 + 168, v9, v10, v11);
    *(_QWORD *)(a4 + 168) /= 0xAuLL;
  }
  PopAcquirePolicyLock();
  v16 = MEMORY[0xFFFFF78000000008];
  v17 = *a1 - *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1;
  if ( *a1 == *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1 )
    v17 = a1[1] - *(_QWORD *)GUID_SPM_LOW_POWER_CS.Data4;
  if ( v17 )
  {
    PopDiagTraceFxRundown(&PopWnfCsEnterScenarioId);
    PopCalculateCsSummary(a4, PopSleepstudyStopReason);
    v50 = a4;
    PopDirectedDripsNotify(1LL, &v50);
    PpmIdleCaptureCsVetoAccounting(v34, (unsigned int)dword_140E27DC0);
    ExStopRecordingIRTimerExpiries();
    PopFxStopDeviceAccounting(*(_QWORD *)(a4 + 32));
    PpmSnapDripsAccountingSnapshot(v35, 10 * *(_QWORD *)(a4 + 32), 10 * *(_DWORD *)(a4 + 40));
    PopDiagTraceCsConsumption(a4);
    PopDiagTraceCsExitReason(a4, a2);
    if ( PopFxLookupSocSubsystemsByPlatformIdleState((unsigned int)dword_140E27DC0) )
    {
      PopFxLogSocSubsystemBlockingTimes(v36, (unsigned int)dword_140E27DC0);
      v4 = PopFxLogSocSubsystemMetadata(v37, (unsigned int)dword_140E27DC0);
    }
    v38 = KeAcquireSpinLockRaiseToDpc(&PopModernStandbyTransitionInfo);
    v39 = dword_140E0B7F0;
    KeReleaseSpinLock(&PopModernStandbyTransitionInfo, v38);
    PopClearConnectedStandbyMarker(v39);
    qword_140E27C08 = 0LL;
    v40 = KeAcquireSpinLockRaiseToDpc(&qword_140F0C178);
    dword_140F0C180 = 0;
    KeReleaseSpinLock(&qword_140F0C178, v40);
  }
  else
  {
    PopWnfCsEnterScenarioId = a2;
    PopCalculateIdleInformation((__int64)&v54);
    PpmGetPlatformSelectionVetoCounts((unsigned int)dword_140E27DC0, &v52, &v53);
    PopCsConsumption = v51;
    qword_140E27C10 = *((_QWORD *)&v54 + 1);
    dword_140E27C20 = DWORD2(v55);
    qword_140E27C18 = v54;
    qword_140E27C28 = KiAccumulatedDeepSleepTimerRebasing;
    qword_140E27CA8 = v55;
    qword_140E27CB0 = v52;
    qword_140E27CB8 = v53;
    dword_140E27CE8 = v50;
    qword_140E27C08 = v16;
    qword_140E27C38 = 0LL;
    qword_140E27C48 = 0LL;
    qword_140E27C98 = 0LL;
    qword_140E27CA0 = 0LL;
    qword_140E27C58 = 0LL;
    qword_140E27C68 = 0LL;
    qword_140E27C78 = 0LL;
    qword_140E27C90 = 0LL;
    qword_140E27CF8 = 0LL;
    qword_140E27D00 = 0LL;
    qword_140E27D08 = 0LL;
    byte_140E27CE4 = 0;
    v18 = KeAcquireSpinLockRaiseToDpc(&qword_140F0C178);
    qword_140F0C168 = 0LL;
    qword_140F0C170 = 0LL;
    PopDisplayOnPerformance = 0LL;
    dword_140F0C180 = 1;
    KeReleaseSpinLock(&qword_140F0C178, v18);
    PopGetEnergyCounter(&CsSessionEnergyCounter);
    word_140E27CD8 = dword_140F0BA4C == 0;
    HIBYTE(word_140E27CD8) = HIBYTE(word_140E27CD8) & 0xFE | PopNetIsCompliantNicPresent() & 1;
    ((void (__fastcall *)(GUID *, __int64, __int64, int *, int, int *))PopGetPowerSettingValue)(
      &GUID_ENERGY_SAVER_POLICY,
      v19,
      3LL,
      &v44,
      4,
      &v42);
    HIBYTE(word_140E27CD8) = HIBYTE(word_140E27CD8) & 0xFB | (4 * (v44 & 1));
    ((void (__fastcall *)(GUID *, __int64, __int64, int *, int, int *))PopGetPowerSettingValue)(
      &GUID_VIDEO_POWERDOWN_TIMEOUT,
      v20,
      3LL,
      &v45,
      4,
      &v42);
    dword_140E27CC0 = v45;
    ((void (__fastcall *)(GUID *, __int64, __int64, int *, int, int *))PopGetPowerSettingValue)(
      &GUID_VIDEO_CONSOLE_LOCK_TIMEOUT,
      v21,
      3LL,
      &v46,
      4,
      &v42);
    dword_140E27CC4 = v46;
    byte_140E27CC8 = IsLockConsoleTimeoutActive;
    ((void (__fastcall *)(GUID *, __int64, __int64, int *, int, int *))PopGetPowerSettingValue)(
      &GUID_STANDBY_TIMEOUT,
      v22,
      3LL,
      &v47,
      4,
      &v42);
    dword_140E27CCC = v47;
    PopQueryRemainingSystemIdleTime(&dword_140E27CD0, &dword_140E27CD4);
    byte_140E27CED = (char)KdDebuggerEnabled;
    v4 = PopFilterCapabilities(&PopCapabilities, v56);
    if ( v4 >= 0 )
      IsHibernateSupported = PopIsHibernateSupported(v56);
    byte_140E27CEC = IsHibernateSupported;
    ((void (__fastcall *)(GUID *, __int64, __int64, int *, int, int *))PopGetPowerSettingValue)(
      &GUID_HIBERNATE_TIMEOUT,
      v23,
      3LL,
      &v48,
      4,
      &v42);
    dword_140E27CF0 = v48;
    ((void (__fastcall *)(GUID *, __int64, __int64, int *, int, int *))PopGetPowerSettingValue)(
      &GUID_STANDBY_BUDGET_PERCENT,
      v24,
      3LL,
      &v49,
      4,
      &v42);
    dword_140E27CF4 = v49;
    ((void (__fastcall *)(GUID *, __int64, __int64, __int128 *, int, int *))PopGetPowerSettingValue)(
      &GUID_ACTIVE_POWERSCHEME,
      v25,
      3LL,
      &v58,
      16,
      &v42);
    ((void (__fastcall *)(GUID *, __int64, __int64, __int128 *, int, int *))PopGetPowerSettingValue)(
      &GUID_POWERSCHEME_PERSONALITY,
      v26,
      3LL,
      &v57,
      16,
      &v42);
    PopDiagGetPowerSchemeInfo(&v58, &v57, &v43);
    dword_140E27D18 = v43;
    _InterlockedExchange64(&qword_140E27D80, 0LL);
    if ( PopFxLookupSocSubsystemsByPlatformIdleState((unsigned int)dword_140E27DC0) )
      v4 = PopFxResetSocSubsystemAccounting((unsigned int)dword_140E27DC0);
    PopFxStartDeviceAccounting();
    PpmIdleStartCsVetoAccounting();
    dword_140E27CDC = PopAggressiveStandbyEnabledActions;
    dword_140E27CE0 = PopAggressiveStandbyAppliedActions;
    ExStartRecordingIRTimerExpiries();
    PpmResetDripsAccountingSnapshot();
    LOBYTE(v27) = 1;
    ModernStandbyTransitionReason = (unsigned int)PopGetModernStandbyTransitionReason(v27);
    PopDiagTraceCsEnterReason(ModernStandbyTransitionReason);
    PopSetConnectedStandbyMarker(v29, (unsigned int)ModernStandbyTransitionReason);
    v50 = PopWdiCurrentScenarioInstanceId;
    PopDirectedDripsNotify(0LL, &v50);
    v43 = 0;
    PopQueryInputSuppressionCount(&v43, v30, v31, v32);
    dword_140E27D10 = v43;
    v43 = 0;
    PopQueryPowerButtonSuppressionCount(&v43, v33);
    dword_140E27D14 = v43;
  }
  PopReleasePolicyLock();
  return (unsigned int)v4;
}
