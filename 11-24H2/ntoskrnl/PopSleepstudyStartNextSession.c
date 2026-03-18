/*
 * XREFs of PopSleepstudyStartNextSession @ 0x140AAC910
 * Callers:
 *     PopPowerAggregatorActiveToScreenOffStateHandler @ 0x140759060 (PopPowerAggregatorActiveToScreenOffStateHandler.c)
 *     PopPowerAggregatorEngageModernStandby @ 0x140759514 (PopPowerAggregatorEngageModernStandby.c)
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140759DE0 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x140759E80 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x140902758 (PopPowerAggregatorEnterScreenOff.c)
 *     PopPowerAggregatorDisplayPoweringOnStateHandler @ 0x140AA9580 (PopPowerAggregatorDisplayPoweringOnStateHandler.c)
 * Callees:
 *     PopCalculateIdleInformation @ 0x14032D51C (PopCalculateIdleInformation.c)
 *     KeQueryInterruptTimePrecise @ 0x14033BC40 (KeQueryInterruptTimePrecise.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     KeSetTimer2 @ 0x1403C20A0 (KeSetTimer2.c)
 *     PopThermalCsEntry @ 0x1404277CC (PopThermalCsEntry.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     SSHSupportIsPlatformAoAc @ 0x140490DC8 (SSHSupportIsPlatformAoAc.c)
 *     PopIdleWakeNotifyModernStandbyEnter @ 0x1404A94CC (PopIdleWakeNotifyModernStandbyEnter.c)
 *     PopIdleWakeNotifyModernStandbyExit @ 0x1404AA390 (PopIdleWakeNotifyModernStandbyExit.c)
 *     PopSetModernStandbyTransitionReason @ 0x1404B615C (PopSetModernStandbyTransitionReason.c)
 *     PopThermalCsExit @ 0x1405D3C64 (PopThermalCsExit.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PopDiagTraceSleepStudyStart @ 0x140757B84 (PopDiagTraceSleepStudyStart.c)
 *     PopCurrentPowerStatePrecise @ 0x140A2C144 (PopCurrentPowerStatePrecise.c)
 *     SshNotifySystemSessionChange @ 0x140A4B418 (SshNotifySystemSessionChange.c)
 *     PopSleepstudySendSessionChangeEvent @ 0x140A79CC8 (PopSleepstudySendSessionChangeEvent.c)
 *     PopTransitionTelemetryOsState @ 0x140A86334 (PopTransitionTelemetryOsState.c)
 *     PopSleepstudySendWnfNotification @ 0x140AAE0DC (PopSleepstudySendWnfNotification.c)
 *     PopSleepstudyCaptureResiliencyStatistics @ 0x140ABD324 (PopSleepstudyCaptureResiliencyStatistics.c)
 *     PopSleepstudyCaptureSessionStatistics @ 0x140ABDD04 (PopSleepstudyCaptureSessionStatistics.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopSleepstudyStartNextSession(int a1, unsigned int a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // edi
  char v10; // r12
  char v11; // r15
  unsigned int v12; // r13d
  bool v13; // r12
  bool v14; // r15
  __int64 v15; // rax
  __int64 InterruptTimePrecise; // rax
  __int64 v17; // r14
  int v18; // eax
  int v19; // edi
  int v20; // esi
  __int64 v21; // rcx
  __int64 *v22; // rax
  _DWORD *v23; // rcx
  __int64 v24; // r8
  unsigned int *v25; // r14
  __int64 v26; // rsi
  int v27; // ecx
  bool v28; // r15
  __int64 v29; // r8
  int v30; // edi
  int v31; // ecx
  __int64 v32; // rdx
  _OWORD *v33; // rax
  _OWORD *v34; // rcx
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int64 v45; // rax
  __int64 v46; // r8
  __int64 v47; // r9
  int v48; // edi
  __int64 v49; // r9
  __int64 v50; // r8
  __int64 *v51; // rcx
  int v52; // ecx
  __int64 *i; // rbx
  void *v55; // [rsp+28h] [rbp-E0h]
  char v56; // [rsp+38h] [rbp-D0h]
  bool v57; // [rsp+39h] [rbp-CFh]
  BOOL v59; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v60; // [rsp+48h] [rbp-C0h]
  __int64 *v61; // [rsp+50h] [rbp-B8h]
  _QWORD v62[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v63; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v64; // [rsp+78h] [rbp-90h]
  int v65[4]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v66; // [rsp+98h] [rbp-70h]
  __int64 v67; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v68[4]; // [rsp+B8h] [rbp-50h] BYREF
  int v69; // [rsp+BCh] [rbp-4Ch]

  v69 = 0;
  memset_0(v68, 0, 0x1ACuLL);
  *(_OWORD *)v65 = 0LL;
  v66 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  PopAcquirePolicyLock(v4, v3);
  v56 = PopLidOpened != 0;
  v57 = PopConsoleExternalDisplayConnected != 0;
  PopReleasePolicyLock(v6, v5, v7, v8, v55);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopCB);
  v9 = xmmword_140F0AE80;
  PopReleaseRwLock((signed __int64 *)&PopCB);
  v10 = v9;
  v11 = v9;
  v12 = v9 >> 4;
  v9 >>= 7;
  LOBYTE(v12) = v12 & 1;
  LOBYTE(v9) = v9 & 1;
  v13 = (v10 & 0x20) != 0;
  LODWORD(v60) = v9;
  v14 = (v11 & 0x40) != 0;
  PopAcquireRwLockExclusive(&PopSleepstudySessionLock);
  v62[0] = (char *)&unk_140F0A030 + 112 * (unsigned int)dword_140F0A028;
  v15 = 14LL * (((_BYTE)dword_140F0A028 + 1) & 7);
  dword_140F0A028 = ((_BYTE)dword_140F0A028 + 1) & 7;
  v61 = &PopSleepstudySessionContext[v15 + 26];
  InterruptTimePrecise = KeQueryInterruptTimePrecise((__int64)&v59);
  v67 = -2500000LL;
  v17 = InterruptTimePrecise;
  v18 = PopCurrentPowerStatePrecise((__int64)v65, (__int64)&v67);
  v19 = v65[2];
  v20 = v65[3];
  v59 = v18 != 258;
  v21 = v62[0];
  *(_BYTE *)(v62[0] + 58LL) = v56;
  *(_BYTE *)(v21 + 64) = v60;
  *(_QWORD *)(v21 + 24) = v17;
  *(_DWORD *)(v21 + 36) = a2;
  *(_DWORD *)(v21 + 44) = v20;
  *(_DWORD *)(v21 + 52) = v19;
  *(_BYTE *)(v21 + 61) = v12;
  *(_BYTE *)(v21 + 62) = v13;
  *(_BYTE *)(v21 + 63) = v14;
  *(_BYTE *)(v21 + 60) = v57;
  memset_0((char *)v61 + 4, 0, 0x6CuLL);
  v22 = v61;
  *(_DWORD *)v61 = a1;
  v23 = (_DWORD *)v62[0];
  v24 = *(_QWORD *)(v62[0] + 8LL);
  v22[2] = v17;
  v25 = (unsigned int *)v22;
  *((_DWORD *)v22 + 10) = v20;
  v22[1] = v24 + 1;
  v26 = (__int64)v23;
  *((_DWORD *)v22 + 8) = a2;
  *((_DWORD *)v22 + 12) = v19;
  *((_BYTE *)v22 + 56) = v65[0];
  *((_BYTE *)v22 + 57) = v56;
  *((_BYTE *)v22 + 64) = v60;
  *((_BYTE *)v22 + 59) = v57;
  *((_BYTE *)v22 + 61) = v12;
  *((_BYTE *)v22 + 62) = v13;
  *((_BYTE *)v22 + 63) = v14;
  v27 = *v23 - 1;
  if ( v27 )
  {
    if ( v27 != 1 )
    {
      v30 = a1;
      v28 = v59;
      goto LABEL_25;
    }
    PopSleepstudySendWnfNotification(&WNF_PO_SCENARIO_CHANGE, &CPER_EMPTY_GUID);
    PopIdleWakeNotifyModernStandbyExit();
    v28 = v59;
    LOBYTE(v29) = v59;
    PopSleepstudyCaptureResiliencyStatistics(v26, v65, v29, 0LL);
  }
  else
  {
    v28 = v59;
  }
  v30 = a1;
  if ( SSHSupportIsPlatformAoAc() && (unsigned int)(a1 - 1) > 1 )
  {
    PopTransitionTelemetryOsState(4, 6);
    PopThermalCsExit();
  }
  if ( *(_DWORD *)v26 == 1 )
  {
    PopCalculateIdleInformation((__int64)&v63);
    *(_QWORD *)(v26 + 88) = v64;
    *(_QWORD *)(v26 + 96) = *((_QWORD *)&v63 + 1);
    *(_QWORD *)(v26 + 104) = KeQueryInterruptTimePrecise((__int64)&v59);
  }
  if ( a1 != 2 )
  {
    if ( *(_DWORD *)v26 == 1 )
      ++*((_QWORD *)v25 + 1);
    if ( ((a1 - 1) & 0xFFFFFFFD) != 0 || (byte_140E27CE4 = 1, a1 != 3) )
    {
      if ( a2 >= 0x1000000 || (PopSleepstudyStopReason = 2, (a2 & 0xFFFFFF) != 0x35) )
        PopSleepstudyStopReason = 18;
    }
    else
    {
      PopSleepstudyStopReason = dword_140F0B114;
    }
    PopSetModernStandbyTransitionReason(0, a2);
    PopSleepstudyCaptureSessionStatistics(v31, (int)&CPER_EMPTY_GUID, *((_QWORD *)v25 + 1), (int)v65, v68);
    if ( !byte_140F09F78 )
    {
      v32 = 3LL;
      v33 = &PopWdiScenarioStopEventData;
      v34 = v68;
      do
      {
        v35 = v34[1];
        *v33 = *v34;
        v36 = v34[2];
        v33[1] = v35;
        v37 = v34[3];
        v33[2] = v36;
        v38 = v34[4];
        v33[3] = v37;
        v39 = v34[5];
        v33[4] = v38;
        v40 = v34[6];
        v33[5] = v39;
        v41 = v34[7];
        v34 += 8;
        v33[6] = v40;
        v33 += 8;
        *(v33 - 1) = v41;
        --v32;
      }
      while ( v32 );
      v42 = *v34;
      v62[1] = -1LL;
      v43 = v34[1];
      *v33 = v42;
      v62[0] = 0LL;
      v44 = v34[2];
      v33[1] = v43;
      v33[2] = v44;
      KeSetTimer2((__int64)&unk_140F09F80, -50000000LL, 0LL, (__int64)v62);
      v45 = *((_QWORD *)v25 + 1) - 2LL;
      byte_140F09F78 = 1;
      qword_140F09F70 = v45;
    }
    PopSleepstudySendWnfNotification(&WNF_PO_UMPO_SCENARIO_CHANGE, &CPER_EMPTY_GUID);
  }
LABEL_25:
  PopSleepstudySendSessionChangeEvent(v26, v25);
  SshNotifySystemSessionChange(v30, *((_QWORD *)v25 + 1));
  v48 = v30 - 1;
  if ( !v48 )
  {
    if ( SSHSupportIsPlatformAoAc() && (unsigned int)(*(_DWORD *)v26 - 1) > 1 )
    {
      PopTransitionTelemetryOsState(3, 6);
      PopThermalCsEntry(a2 == 23);
    }
    PopCalculateIdleInformation((__int64)&v63);
    *((_QWORD *)v25 + 9) = v64;
    *((_QWORD *)v25 + 10) = *((_QWORD *)&v63 + 1);
    PopSetModernStandbyTransitionReason(1, a2);
    PopSleepstudyCaptureSessionStatistics(v52, (int)&GUID_SPM_LOW_POWER_CS, *((_QWORD *)v25 + 1), (int)v65, v68);
    if ( !byte_140F09F78 )
      PopDiagTraceSleepStudyStart(v56);
    v51 = &WNF_PO_UMPO_SCENARIO_CHANGE;
    goto LABEL_34;
  }
  if ( v48 == 1 )
  {
    PopCalculateIdleInformation((__int64)&v63);
    *((_QWORD *)v25 + 9) = v64;
    *((_QWORD *)v25 + 10) = *((_QWORD *)&v63 + 1);
    PopIdleWakeNotifyModernStandbyEnter();
    LOBYTE(v49) = 1;
    LOBYTE(v50) = v28;
    PopSleepstudyCaptureResiliencyStatistics(v25, v65, v50, v49);
    v51 = &WNF_PO_SCENARIO_CHANGE;
LABEL_34:
    PopSleepstudySendWnfNotification(v51, &GUID_SPM_LOW_POWER_CS);
  }
  for ( i = (__int64 *)PopSleepstudySessionContext[0]; i != PopSleepstudySessionContext; i = (__int64 *)*i )
    guard_dispatch_icall_no_overrides(*v25, *((_QWORD *)v25 + 1), v46, v47);
  return PopReleaseRwLock((signed __int64 *)&PopSleepstudySessionLock);
}
