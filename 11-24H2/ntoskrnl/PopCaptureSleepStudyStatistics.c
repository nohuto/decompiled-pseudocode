/*
 * XREFs of PopCaptureSleepStudyStatistics @ 0x1402B63C0
 * Callers:
 *     PopSleepstudyCaptureSessionStatistics @ 0x140AB8D74 (PopSleepstudyCaptureSessionStatistics.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopCalculateCsSummary @ 0x1402B5524 (PopCalculateCsSummary.c)
 *     PopCalculateIdleInformation @ 0x1402B5AAC (PopCalculateIdleInformation.c)
 *     PpmIdleCaptureCsVetoAccounting @ 0x1402B5F24 (PpmIdleCaptureCsVetoAccounting.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x1402B6090 (PpmSnapDripsAccountingSnapshot.c)
 *     PopDiagTraceFxRundown @ 0x1402B69F4 (PopDiagTraceFxRundown.c)
 *     PopFxStopDeviceAccounting @ 0x1402B79AC (PopFxStopDeviceAccounting.c)
 *     PopGetPowerSettingValue @ 0x14048C3EC (PopGetPowerSettingValue.c)
 *     PopFxStartDeviceAccounting @ 0x140492E8C (PopFxStartDeviceAccounting.c)
 *     PopGetModernStandbyTransitionReason @ 0x1404AE510 (PopGetModernStandbyTransitionReason.c)
 *     PpmGetPlatformSelectionVetoCounts @ 0x1404AF9CC (PpmGetPlatformSelectionVetoCounts.c)
 *     PpmIdleStartCsVetoAccounting @ 0x1404B6580 (PpmIdleStartCsVetoAccounting.c)
 *     PopDiagGetPowerSchemeInfo @ 0x1404C7BDC (PopDiagGetPowerSchemeInfo.c)
 *     PpmResetDripsAccountingSnapshot @ 0x1404F5F28 (PpmResetDripsAccountingSnapshot.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PopFxResetSocSubsystemAccounting @ 0x14074D7A0 (PopFxResetSocSubsystemAccounting.c)
 *     ExStartRecordingIRTimerExpiries @ 0x1407BB768 (ExStartRecordingIRTimerExpiries.c)
 *     PopFxLogSocSubsystemMetadata @ 0x14096E27C (PopFxLogSocSubsystemMetadata.c)
 *     PopFxLogSocSubsystemBlockingTimes @ 0x14096E81C (PopFxLogSocSubsystemBlockingTimes.c)
 *     PopFxLookupSocSubsystemsByPlatformIdleState @ 0x14096EBC0 (PopFxLookupSocSubsystemsByPlatformIdleState.c)
 *     PopFilterCapabilities @ 0x14099F88C (PopFilterCapabilities.c)
 *     PopIsLockConsoleTimeoutActive @ 0x1409A097C (PopIsLockConsoleTimeoutActive.c)
 *     PopDirectedDripsNotify @ 0x140A627B0 (PopDirectedDripsNotify.c)
 *     PopSetConnectedStandbyMarker @ 0x140A86C70 (PopSetConnectedStandbyMarker.c)
 *     PopIsHibernateSupported @ 0x140A88308 (PopIsHibernateSupported.c)
 *     PopDiagTraceCsEnterReason @ 0x140A8D620 (PopDiagTraceCsEnterReason.c)
 *     PopGetEnergyCounter @ 0x140A97190 (PopGetEnergyCounter.c)
 *     PopClearConnectedStandbyMarker @ 0x140A984D0 (PopClearConnectedStandbyMarker.c)
 *     PopQueryInputSuppressionCount @ 0x140A9BD8C (PopQueryInputSuppressionCount.c)
 *     PopNetIsCompliantNicPresent @ 0x140A9CC74 (PopNetIsCompliantNicPresent.c)
 *     PopQueryPowerButtonSuppressionCount @ 0x140A9F5C8 (PopQueryPowerButtonSuppressionCount.c)
 *     PopDiagTraceCsConsumption @ 0x140AA251C (PopDiagTraceCsConsumption.c)
 *     PopQueryRemainingSystemIdleTime @ 0x140AA91D0 (PopQueryRemainingSystemIdleTime.c)
 *     ExStopRecordingIRTimerExpiries @ 0x140AB7EB4 (ExStopRecordingIRTimerExpiries.c)
 *     PopDiagTraceCsExitReason @ 0x140ABCB20 (PopDiagTraceCsExitReason.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopCaptureSleepStudyStatistics(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
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
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  KIRQL v36; // al
  unsigned int v37; // ebx
  KIRQL v38; // al
  int v40; // [rsp+30h] [rbp-D0h] BYREF
  int v41; // [rsp+34h] [rbp-CCh] BYREF
  int v42; // [rsp+38h] [rbp-C8h] BYREF
  int v43; // [rsp+3Ch] [rbp-C4h] BYREF
  int v44; // [rsp+40h] [rbp-C0h] BYREF
  int v45; // [rsp+44h] [rbp-BCh] BYREF
  int v46; // [rsp+48h] [rbp-B8h] BYREF
  int v47; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v48; // [rsp+50h] [rbp-B0h] BYREF
  int v49; // [rsp+58h] [rbp-A8h]
  __int64 v50; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v51; // [rsp+68h] [rbp-98h] BYREF
  __int128 v52; // [rsp+70h] [rbp-90h] BYREF
  __int128 v53; // [rsp+80h] [rbp-80h]
  _BYTE v54[80]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v55; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v56; // [rsp+F0h] [rbp-10h] BYREF

  v4 = 0;
  v41 = 0;
  v50 = 0LL;
  v40 = 0;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v56 = 0LL;
  v55 = 0LL;
  memset_0(v54, 0, 0x4CuLL);
  IsHibernateSupported = 0;
  v49 = *(_DWORD *)(a3 + 12);
  IsLockConsoleTimeoutActive = 0;
  LODWORD(v48) = *(_DWORD *)(a3 + 8);
  v13 = *a1 - *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1;
  v12 = *a1 == *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1;
  v42 = 0;
  v47 = 0;
  v46 = 0;
  v44 = 0;
  v45 = 0;
  v43 = 0;
  if ( v12 )
    v13 = a1[1] - *(_QWORD *)GUID_SPM_LOW_POWER_CS.Data4;
  if ( !v13 )
    IsLockConsoleTimeoutActive = PopIsLockConsoleTimeoutActive();
  if ( qword_140E67708 )
  {
    guard_dispatch_icall_no_overrides(a4 + 168, v9);
    *(_QWORD *)(a4 + 168) /= 0xAuLL;
  }
  PopAcquirePolicyLock();
  v14 = MEMORY[0xFFFFF78000000008];
  v15 = *a1 - *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1;
  if ( *a1 == *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1 )
    v15 = a1[1] - *(_QWORD *)GUID_SPM_LOW_POWER_CS.Data4;
  if ( v15 )
  {
    PopDiagTraceFxRundown(&PopWnfCsEnterScenarioId);
    PopCalculateCsSummary(a4, PopSleepstudyStopReason);
    v48 = a4;
    PopDirectedDripsNotify(1LL, &v48);
    PpmIdleCaptureCsVetoAccounting(v32, dword_140E27F00);
    ExStopRecordingIRTimerExpiries();
    PopFxStopDeviceAccounting(*(_QWORD *)(a4 + 32));
    PpmSnapDripsAccountingSnapshot(v33, 10 * *(_QWORD *)(a4 + 32), 10 * *(_DWORD *)(a4 + 40));
    PopDiagTraceCsConsumption(a4);
    PopDiagTraceCsExitReason(a4, a2);
    if ( PopFxLookupSocSubsystemsByPlatformIdleState((unsigned int)dword_140E27F00) )
    {
      PopFxLogSocSubsystemBlockingTimes(v34, (unsigned int)dword_140E27F00);
      v4 = PopFxLogSocSubsystemMetadata(v35, (unsigned int)dword_140E27F00);
    }
    v36 = KeAcquireSpinLockRaiseToDpc(&PopModernStandbyTransitionInfo);
    v37 = dword_140E0B870;
    KeReleaseSpinLock(&PopModernStandbyTransitionInfo, v36);
    PopClearConnectedStandbyMarker(v37);
    qword_140E27D48 = 0LL;
    v38 = KeAcquireSpinLockRaiseToDpc(&qword_140F0B158);
    dword_140F0B160 = 0;
    KeReleaseSpinLock(&qword_140F0B158, v38);
  }
  else
  {
    PopWnfCsEnterScenarioId = a2;
    PopCalculateIdleInformation((__int64)&v52);
    PpmGetPlatformSelectionVetoCounts((unsigned int)dword_140E27F00, &v50, &v51);
    PopCsConsumption = v49;
    qword_140E27D50 = *((_QWORD *)&v52 + 1);
    dword_140E27D60 = DWORD2(v53);
    qword_140E27D58 = v52;
    qword_140E27D68 = KiAccumulatedDeepSleepTimerRebasing;
    qword_140E27DE8 = v53;
    qword_140E27DF0 = v50;
    qword_140E27DF8 = v51;
    dword_140E27E28 = v48;
    qword_140E27D48 = v14;
    qword_140E27D78 = 0LL;
    qword_140E27D88 = 0LL;
    qword_140E27DD8 = 0LL;
    qword_140E27DE0 = 0LL;
    qword_140E27D98 = 0LL;
    qword_140E27DA8 = 0LL;
    qword_140E27DB8 = 0LL;
    qword_140E27DD0 = 0LL;
    qword_140E27E38 = 0LL;
    qword_140E27E40 = 0LL;
    qword_140E27E48 = 0LL;
    byte_140E27E24 = 0;
    v16 = KeAcquireSpinLockRaiseToDpc(&qword_140F0B158);
    qword_140F0B148 = 0LL;
    qword_140F0B150 = 0LL;
    PopDisplayOnPerformance = 0LL;
    dword_140F0B160 = 1;
    KeReleaseSpinLock(&qword_140F0B158, v16);
    PopGetEnergyCounter(&CsSessionEnergyCounter);
    word_140E27E18 = dword_140F0B38C == 0;
    HIBYTE(word_140E27E18) = HIBYTE(word_140E27E18) & 0xFE | PopNetIsCompliantNicPresent() & 1;
    ((void (__fastcall *)(GUID *, __int64, __int64, int *, int, int *))PopGetPowerSettingValue)(
      &GUID_ENERGY_SAVER_POLICY,
      v17,
      3LL,
      &v42,
      4,
      &v40);
    HIBYTE(word_140E27E18) = HIBYTE(word_140E27E18) & 0xFB | (4 * (v42 & 1));
    ((void (__fastcall *)(GUID *, __int64, __int64, int *, int, int *))PopGetPowerSettingValue)(
      &GUID_VIDEO_POWERDOWN_TIMEOUT,
      v18,
      3LL,
      &v43,
      4,
      &v40);
    dword_140E27E00 = v43;
    ((void (__fastcall *)(GUID *, __int64, __int64, int *, int, int *))PopGetPowerSettingValue)(
      &GUID_VIDEO_CONSOLE_LOCK_TIMEOUT,
      v19,
      3LL,
      &v44,
      4,
      &v40);
    dword_140E27E04 = v44;
    byte_140E27E08 = IsLockConsoleTimeoutActive;
    ((void (__fastcall *)(GUID *, __int64, __int64, int *, int, int *))PopGetPowerSettingValue)(
      &GUID_STANDBY_TIMEOUT,
      v20,
      3LL,
      &v45,
      4,
      &v40);
    dword_140E27E0C = v45;
    PopQueryRemainingSystemIdleTime(&dword_140E27E10, &dword_140E27E14);
    byte_140E27E2D = (char)KdDebuggerEnabled;
    v4 = PopFilterCapabilities(&PopCapabilities, v54);
    if ( v4 >= 0 )
      IsHibernateSupported = PopIsHibernateSupported(v54);
    byte_140E27E2C = IsHibernateSupported;
    ((void (__fastcall *)(GUID *, __int64, __int64, int *, int, int *))PopGetPowerSettingValue)(
      &GUID_HIBERNATE_TIMEOUT,
      v21,
      3LL,
      &v46,
      4,
      &v40);
    dword_140E27E30 = v46;
    ((void (__fastcall *)(GUID *, __int64, __int64, int *, int, int *))PopGetPowerSettingValue)(
      &GUID_STANDBY_BUDGET_PERCENT,
      v22,
      3LL,
      &v47,
      4,
      &v40);
    dword_140E27E34 = v47;
    ((void (__fastcall *)(GUID *, __int64, __int64, __int128 *, int, int *))PopGetPowerSettingValue)(
      &GUID_ACTIVE_POWERSCHEME,
      v23,
      3LL,
      &v56,
      16,
      &v40);
    ((void (__fastcall *)(GUID *, __int64, __int64, __int128 *, int, int *))PopGetPowerSettingValue)(
      &GUID_POWERSCHEME_PERSONALITY,
      v24,
      3LL,
      &v55,
      16,
      &v40);
    PopDiagGetPowerSchemeInfo(&v56, &v55, &v41);
    dword_140E27E58 = v41;
    _InterlockedExchange64(&qword_140E27EC0, 0LL);
    if ( PopFxLookupSocSubsystemsByPlatformIdleState((unsigned int)dword_140E27F00) )
      v4 = PopFxResetSocSubsystemAccounting((unsigned int)dword_140E27F00);
    PopFxStartDeviceAccounting();
    PpmIdleStartCsVetoAccounting();
    dword_140E27E1C = PopAggressiveStandbyEnabledActions;
    dword_140E27E20 = PopAggressiveStandbyAppliedActions;
    ExStartRecordingIRTimerExpiries();
    PpmResetDripsAccountingSnapshot();
    LOBYTE(v25) = 1;
    ModernStandbyTransitionReason = (unsigned int)PopGetModernStandbyTransitionReason(v25);
    PopDiagTraceCsEnterReason(ModernStandbyTransitionReason);
    PopSetConnectedStandbyMarker(v27, (unsigned int)ModernStandbyTransitionReason);
    v48 = PopWdiCurrentScenarioInstanceId;
    PopDirectedDripsNotify(0LL, &v48);
    v41 = 0;
    PopQueryInputSuppressionCount(&v41, v28, v29, v30);
    dword_140E27E50 = v41;
    v41 = 0;
    PopQueryPowerButtonSuppressionCount(&v41, v31);
    dword_140E27E54 = v41;
  }
  PopReleasePolicyLock();
  return (unsigned int)v4;
}
