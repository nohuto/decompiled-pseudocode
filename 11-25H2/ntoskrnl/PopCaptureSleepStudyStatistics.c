/*
 * XREFs of PopCaptureSleepStudyStatistics @ 0x140485908
 * Callers:
 *     PopSleepstudyCaptureSessionStatistics @ 0x140AB9C04 (PopSleepstudyCaptureSessionStatistics.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     PopFxStopDeviceAccounting @ 0x1404266B8 (PopFxStopDeviceAccounting.c)
 *     PopDiagTraceFxRundown @ 0x140485F3C (PopDiagTraceFxRundown.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x1404860C4 (PpmSnapDripsAccountingSnapshot.c)
 *     PpmIdleCaptureCsVetoAccounting @ 0x1404863F4 (PpmIdleCaptureCsVetoAccounting.c)
 *     PopCalculateCsSummary @ 0x140486560 (PopCalculateCsSummary.c)
 *     PopCalculateIdleInformation @ 0x140486AEC (PopCalculateIdleInformation.c)
 *     PopGetPowerSettingValue @ 0x14049253C (PopGetPowerSettingValue.c)
 *     PopFxStartDeviceAccounting @ 0x14049884C (PopFxStartDeviceAccounting.c)
 *     PopGetModernStandbyTransitionReason @ 0x1404B4458 (PopGetModernStandbyTransitionReason.c)
 *     PpmGetPlatformSelectionVetoCounts @ 0x1404B572C (PpmGetPlatformSelectionVetoCounts.c)
 *     PpmIdleStartCsVetoAccounting @ 0x1404BC510 (PpmIdleStartCsVetoAccounting.c)
 *     PopDiagGetPowerSchemeInfo @ 0x1404CEBAC (PopDiagGetPowerSchemeInfo.c)
 *     PpmResetDripsAccountingSnapshot @ 0x1404F5E94 (PpmResetDripsAccountingSnapshot.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PopFxResetSocSubsystemAccounting @ 0x1407433A0 (PopFxResetSocSubsystemAccounting.c)
 *     ExStartRecordingIRTimerExpiries @ 0x1407ABE68 (ExStartRecordingIRTimerExpiries.c)
 *     PopFxLogSocSubsystemBlockingTimes @ 0x14098210C (PopFxLogSocSubsystemBlockingTimes.c)
 *     PopFxLookupSocSubsystemsByPlatformIdleState @ 0x14098280C (PopFxLookupSocSubsystemsByPlatformIdleState.c)
 *     PopFxLogSocSubsystemMetadata @ 0x14098283C (PopFxLogSocSubsystemMetadata.c)
 *     PopFilterCapabilities @ 0x140A10C3C (PopFilterCapabilities.c)
 *     PopDirectedDripsNotify @ 0x140A667C0 (PopDirectedDripsNotify.c)
 *     PopSetConnectedStandbyMarker @ 0x140A85E58 (PopSetConnectedStandbyMarker.c)
 *     PopIsHibernateSupported @ 0x140A870FC (PopIsHibernateSupported.c)
 *     PopDiagTraceCsEnterReason @ 0x140A8BE20 (PopDiagTraceCsEnterReason.c)
 *     PopGetEnergyCounter @ 0x140A96130 (PopGetEnergyCounter.c)
 *     PopClearConnectedStandbyMarker @ 0x140A97434 (PopClearConnectedStandbyMarker.c)
 *     PopQueryInputSuppressionCount @ 0x140A9AC3C (PopQueryInputSuppressionCount.c)
 *     PopIsLockConsoleTimeoutActive @ 0x140A9C054 (PopIsLockConsoleTimeoutActive.c)
 *     PopNetIsCompliantNicPresent @ 0x140A9C0D8 (PopNetIsCompliantNicPresent.c)
 *     PopQueryPowerButtonSuppressionCount @ 0x140A9E9B8 (PopQueryPowerButtonSuppressionCount.c)
 *     PopDiagTraceCsConsumption @ 0x140AA268C (PopDiagTraceCsConsumption.c)
 *     PopQueryRemainingSystemIdleTime @ 0x140AA8DA0 (PopQueryRemainingSystemIdleTime.c)
 *     ExStopRecordingIRTimerExpiries @ 0x140AB8D64 (ExStopRecordingIRTimerExpiries.c)
 *     PopDiagTraceCsExitReason @ 0x140ABDA48 (PopDiagTraceCsExitReason.c)
 *     PopAcquirePolicyLock @ 0x140B57E80 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B57ED0 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopCaptureSleepStudyStatistics(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int64 *a4)
{
  int v4; // r14d
  __int64 v9; // rdx
  char IsHibernateSupported; // r15
  char IsLockConsoleTimeoutActive; // r12
  bool v12; // zf
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  KIRQL v16; // al
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 ModernStandbyTransitionReason; // rbx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  KIRQL v32; // al
  unsigned int v33; // ebx
  KIRQL v34; // al
  int v36; // [rsp+30h] [rbp-D0h] BYREF
  int v37; // [rsp+34h] [rbp-CCh] BYREF
  int v38; // [rsp+38h] [rbp-C8h] BYREF
  int v39; // [rsp+3Ch] [rbp-C4h] BYREF
  int v40; // [rsp+40h] [rbp-C0h] BYREF
  int v41; // [rsp+44h] [rbp-BCh] BYREF
  int v42; // [rsp+48h] [rbp-B8h] BYREF
  int v43; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v44; // [rsp+50h] [rbp-B0h] BYREF
  int v45; // [rsp+58h] [rbp-A8h]
  __int64 v46; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v47; // [rsp+68h] [rbp-98h] BYREF
  __int128 v48; // [rsp+70h] [rbp-90h] BYREF
  __int128 v49; // [rsp+80h] [rbp-80h]
  _BYTE v50[80]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v51; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v52; // [rsp+F0h] [rbp-10h] BYREF

  v4 = 0;
  v37 = 0;
  v46 = 0LL;
  v36 = 0;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v52 = 0LL;
  v51 = 0LL;
  memset_0(v50, 0, 0x4CuLL);
  IsHibernateSupported = 0;
  v45 = *(_DWORD *)(a3 + 12);
  IsLockConsoleTimeoutActive = 0;
  LODWORD(v44) = *(_DWORD *)(a3 + 8);
  v13 = *a1 - *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1;
  v12 = *a1 == *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1;
  v38 = 0;
  v43 = 0;
  v42 = 0;
  v40 = 0;
  v41 = 0;
  v39 = 0;
  if ( v12 )
    v13 = a1[1] - *(_QWORD *)GUID_SPM_LOW_POWER_CS.Data4;
  if ( !v13 )
    IsLockConsoleTimeoutActive = PopIsLockConsoleTimeoutActive();
  if ( qword_140E672B8 )
  {
    guard_dispatch_icall_no_overrides(a4 + 21, v9);
    a4[21] /= 0xAuLL;
  }
  PopAcquirePolicyLock();
  v14 = MEMORY[0xFFFFF78000000008];
  v15 = *a1 - *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1;
  if ( *a1 == *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1 )
    v15 = a1[1] - *(_QWORD *)GUID_SPM_LOW_POWER_CS.Data4;
  if ( v15 )
  {
    PopDiagTraceFxRundown(&PopWnfCsEnterScenarioId);
    PopCalculateCsSummary(a4, (unsigned int)PopSleepstudyStopReason);
    v44 = (__int64)a4;
    PopDirectedDripsNotify(1LL, &v44);
    PpmIdleCaptureCsVetoAccounting(v28, (unsigned int)dword_140E27B80);
    ExStopRecordingIRTimerExpiries();
    PopFxStopDeviceAccounting(a4[4]);
    PpmSnapDripsAccountingSnapshot(v29, 10 * a4[4], 10 * a4[5]);
    PopDiagTraceCsConsumption(a4);
    PopDiagTraceCsExitReason(a4, a2);
    if ( PopFxLookupSocSubsystemsByPlatformIdleState((unsigned int)dword_140E27B80) )
    {
      PopFxLogSocSubsystemBlockingTimes(v30, (unsigned int)dword_140E27B80);
      v4 = PopFxLogSocSubsystemMetadata(v31, (unsigned int)dword_140E27B80);
    }
    v32 = KeAcquireSpinLockRaiseToDpc(&PopModernStandbyTransitionInfo);
    v33 = dword_140E0B690;
    KeReleaseSpinLock(&PopModernStandbyTransitionInfo, v32);
    PopClearConnectedStandbyMarker(v33);
    qword_140E279C8 = 0LL;
    v34 = KeAcquireSpinLockRaiseToDpc(&qword_140F0BAB8);
    dword_140F0BAC0 = 0;
    KeReleaseSpinLock(&qword_140F0BAB8, v34);
  }
  else
  {
    PopWnfCsEnterScenarioId = a2;
    PopCalculateIdleInformation(&v48);
    PpmGetPlatformSelectionVetoCounts((unsigned int)dword_140E27B80, &v46, &v47);
    PopCsConsumption = v45;
    qword_140E279D0 = *((_QWORD *)&v48 + 1);
    dword_140E279E0 = DWORD2(v49);
    qword_140E279D8 = v48;
    qword_140E279E8 = KiAccumulatedDeepSleepTimerRebasing;
    qword_140E27A68 = v49;
    qword_140E27A70 = v46;
    qword_140E27A78 = v47;
    dword_140E27AA8 = v44;
    qword_140E279C8 = v14;
    qword_140E279F8 = 0LL;
    qword_140E27A08 = 0LL;
    qword_140E27A58 = 0LL;
    qword_140E27A60 = 0LL;
    qword_140E27A18 = 0LL;
    qword_140E27A28 = 0LL;
    qword_140E27A38 = 0LL;
    qword_140E27A50 = 0LL;
    qword_140E27AB8 = 0LL;
    qword_140E27AC0 = 0LL;
    qword_140E27AC8 = 0LL;
    byte_140E27AA4 = 0;
    v16 = KeAcquireSpinLockRaiseToDpc(&qword_140F0BAB8);
    qword_140F0BAA8 = 0LL;
    qword_140F0BAB0 = 0LL;
    PopDisplayOnPerformance = 0LL;
    dword_140F0BAC0 = 1;
    KeReleaseSpinLock(&qword_140F0BAB8, v16);
    PopGetEnergyCounter(&CsSessionEnergyCounter);
    word_140E27A98 = dword_140F0B70C == 0;
    HIBYTE(word_140E27A98) = HIBYTE(word_140E27A98) & 0xFE | PopNetIsCompliantNicPresent() & 1;
    ((void (__fastcall *)(GUID *, __int64, __int64, int *, int, int *))PopGetPowerSettingValue)(
      &GUID_ENERGY_SAVER_POLICY,
      v17,
      3LL,
      &v38,
      4,
      &v36);
    HIBYTE(word_140E27A98) = HIBYTE(word_140E27A98) & 0xFB | (4 * (v38 & 1));
    ((void (__fastcall *)(GUID *, __int64, __int64, int *, int, int *))PopGetPowerSettingValue)(
      &GUID_VIDEO_POWERDOWN_TIMEOUT,
      v18,
      3LL,
      &v39,
      4,
      &v36);
    dword_140E27A80 = v39;
    ((void (__fastcall *)(GUID *, __int64, __int64, int *, int, int *))PopGetPowerSettingValue)(
      &GUID_VIDEO_CONSOLE_LOCK_TIMEOUT,
      v19,
      3LL,
      &v40,
      4,
      &v36);
    dword_140E27A84 = v40;
    byte_140E27A88 = IsLockConsoleTimeoutActive;
    ((void (__fastcall *)(GUID *, __int64, __int64, int *, int, int *))PopGetPowerSettingValue)(
      &GUID_STANDBY_TIMEOUT,
      v20,
      3LL,
      &v41,
      4,
      &v36);
    dword_140E27A8C = v41;
    PopQueryRemainingSystemIdleTime(&dword_140E27A90, &dword_140E27A94);
    byte_140E27AAD = (char)KdDebuggerEnabled;
    v4 = PopFilterCapabilities(&PopCapabilities, v50);
    if ( v4 >= 0 )
      IsHibernateSupported = PopIsHibernateSupported(v50);
    byte_140E27AAC = IsHibernateSupported;
    ((void (__fastcall *)(GUID *, __int64, __int64, int *, int, int *))PopGetPowerSettingValue)(
      &GUID_HIBERNATE_TIMEOUT,
      v21,
      3LL,
      &v42,
      4,
      &v36);
    dword_140E27AB0 = v42;
    ((void (__fastcall *)(GUID *, __int64, __int64, int *, int, int *))PopGetPowerSettingValue)(
      &GUID_STANDBY_BUDGET_PERCENT,
      v22,
      3LL,
      &v43,
      4,
      &v36);
    dword_140E27AB4 = v43;
    ((void (__fastcall *)(GUID *, __int64, __int64, __int128 *, int, int *))PopGetPowerSettingValue)(
      &GUID_ACTIVE_POWERSCHEME,
      v23,
      3LL,
      &v52,
      16,
      &v36);
    ((void (__fastcall *)(GUID *, __int64, __int64, __int128 *, int, int *))PopGetPowerSettingValue)(
      &GUID_POWERSCHEME_PERSONALITY,
      v24,
      3LL,
      &v51,
      16,
      &v36);
    PopDiagGetPowerSchemeInfo(&v52, &v51, &v37);
    dword_140E27AD8 = v37;
    _InterlockedExchange64(&qword_140E27B40, 0LL);
    if ( PopFxLookupSocSubsystemsByPlatformIdleState((unsigned int)dword_140E27B80) )
      v4 = PopFxResetSocSubsystemAccounting((unsigned int)dword_140E27B80);
    PopFxStartDeviceAccounting();
    PpmIdleStartCsVetoAccounting();
    dword_140E27A9C = PopAggressiveStandbyEnabledActions;
    dword_140E27AA0 = PopAggressiveStandbyAppliedActions;
    ExStartRecordingIRTimerExpiries();
    PpmResetDripsAccountingSnapshot();
    LOBYTE(v25) = 1;
    ModernStandbyTransitionReason = (unsigned int)PopGetModernStandbyTransitionReason(v25);
    PopDiagTraceCsEnterReason(ModernStandbyTransitionReason);
    PopSetConnectedStandbyMarker(v27, (unsigned int)ModernStandbyTransitionReason);
    v44 = PopWdiCurrentScenarioInstanceId;
    PopDirectedDripsNotify(0LL, &v44);
    v37 = 0;
    PopQueryInputSuppressionCount(&v37);
    dword_140E27AD0 = v37;
    v37 = 0;
    PopQueryPowerButtonSuppressionCount(&v37);
    dword_140E27AD4 = v37;
  }
  PopReleasePolicyLock();
  return (unsigned int)v4;
}
