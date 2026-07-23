/*
 * XREFs of PopSleepstudyStartNextSession @ 0x140AA7940
 * Callers:
 *     PopPowerAggregatorActiveToScreenOffStateHandler @ 0x1407574E0 (PopPowerAggregatorActiveToScreenOffStateHandler.c)
 *     PopPowerAggregatorEngageModernStandby @ 0x140757974 (PopPowerAggregatorEngageModernStandby.c)
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140758230 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x1407582D0 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x140A6E038 (PopPowerAggregatorEnterScreenOff.c)
 *     PopPowerAggregatorDisplayPoweringOnStateHandler @ 0x140AA4630 (PopPowerAggregatorDisplayPoweringOnStateHandler.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopCalculateIdleInformation @ 0x1402B5AAC (PopCalculateIdleInformation.c)
 *     KeQueryInterruptTimePrecise @ 0x14031B120 (KeQueryInterruptTimePrecise.c)
 *     KeSetTimer2 @ 0x1403B0C60 (KeSetTimer2.c)
 *     PopThermalCsEntry @ 0x14041B95C (PopThermalCsEntry.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     SSHSupportIsPlatformAoAc @ 0x14048B408 (SSHSupportIsPlatformAoAc.c)
 *     PopIdleWakeNotifyModernStandbyEnter @ 0x1404A38EC (PopIdleWakeNotifyModernStandbyEnter.c)
 *     PopIdleWakeNotifyModernStandbyExit @ 0x1404A458C (PopIdleWakeNotifyModernStandbyExit.c)
 *     PopSetModernStandbyTransitionReason @ 0x1404B0A1C (PopSetModernStandbyTransitionReason.c)
 *     Feature_NU4MP__private_IsEnabledDeviceUsageNoInline @ 0x1405CA3E4 (Feature_NU4MP__private_IsEnabledDeviceUsageNoInline.c)
 *     PopThermalCsExit @ 0x1405D13D8 (PopThermalCsExit.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PopDiagTraceSleepStudyStart @ 0x140756004 (PopDiagTraceSleepStudyStart.c)
 *     PopCurrentPowerStatePrecise @ 0x140A2006C (PopCurrentPowerStatePrecise.c)
 *     SshNotifySystemSessionChange @ 0x140A42178 (SshNotifySystemSessionChange.c)
 *     PopSleepstudySendSessionChangeEvent @ 0x140A73FC8 (PopSleepstudySendSessionChangeEvent.c)
 *     PopTransitionTelemetryOsState @ 0x140A80E74 (PopTransitionTelemetryOsState.c)
 *     PopSleepstudySendWnfNotification @ 0x140AA915C (PopSleepstudySendWnfNotification.c)
 *     PopSleepstudyCaptureResiliencyStatistics @ 0x140AB8394 (PopSleepstudyCaptureResiliencyStatistics.c)
 *     PopSleepstudyCaptureSessionStatistics @ 0x140AB8D74 (PopSleepstudyCaptureSessionStatistics.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopSleepstudyStartNextSession(int a1, unsigned int a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  bool v5; // di
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // edi
  unsigned int v11; // r13d
  char v12; // r15
  unsigned int v13; // r12d
  bool v14; // r15
  __int64 v15; // rax
  LARGE_INTEGER v16; // rax
  LARGE_INTEGER v17; // r14
  int v18; // eax
  int v19; // edi
  int v20; // esi
  __int64 v21; // rcx
  __int64 *v22; // rax
  LARGE_INTEGER *v23; // rcx
  __int64 v24; // r8
  unsigned int *v25; // r14
  LARGE_INTEGER *v26; // rsi
  int v27; // ecx
  char LowPart; // r15
  __int64 v29; // r8
  int v30; // edi
  int v31; // ecx
  _OWORD *v32; // rax
  __int64 v33; // rdx
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
  int v46; // edi
  __int64 v47; // r9
  __int64 v48; // r8
  __int64 *v49; // rcx
  int v50; // ecx
  __int64 *i; // rbx
  void *v53; // [rsp+28h] [rbp-E0h]
  char v54; // [rsp+38h] [rbp-D0h]
  bool v55; // [rsp+39h] [rbp-CFh]
  char v56; // [rsp+3Ah] [rbp-CEh]
  LARGE_INTEGER v58; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v59; // [rsp+48h] [rbp-C0h]
  __int64 *v60; // [rsp+50h] [rbp-B8h]
  _QWORD v61[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v62; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v63; // [rsp+78h] [rbp-90h]
  int v64[4]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v65; // [rsp+98h] [rbp-70h]
  __int64 v66; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v67[4]; // [rsp+B8h] [rbp-50h] BYREF
  int v68; // [rsp+BCh] [rbp-4Ch]

  v68 = 0;
  memset_0(v67, 0, 0x1ACuLL);
  *(_OWORD *)v64 = 0LL;
  v54 = 0;
  v65 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  PopAcquirePolicyLock(v4, v3);
  v56 = PopLidOpened != 0;
  v5 = PopConsoleExternalDisplayConnected != 0;
  v55 = PopConsoleExternalDisplayConnected != 0;
  if ( (unsigned int)Feature_NU4MP__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v5 )
    {
      v54 = PopUsb4DisplayPresent != 0 ? 3 : 1;
    }
    else if ( PopUsb4DisplayPresent )
    {
      v55 = 1;
      v54 = 2;
    }
  }
  PopReleasePolicyLock(v7, v6, v8, v9, v53);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopCB);
  v10 = xmmword_140F0BCC0;
  PopReleaseRwLock((signed __int64 *)&PopCB);
  v11 = v10 >> 4;
  v12 = v10;
  v13 = v10 >> 5;
  v10 >>= 7;
  LOBYTE(v11) = v11 & 1;
  LOBYTE(v10) = v10 & 1;
  LODWORD(v59) = v10;
  LOBYTE(v13) = v13 & 1;
  v14 = (v12 & 0x40) != 0;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopSleepstudySessionLock);
  v61[0] = (char *)&unk_140F0A370 + 112 * (unsigned int)dword_140F0A368;
  v15 = 14LL * (((_BYTE)dword_140F0A368 + 1) & 7);
  dword_140F0A368 = ((_BYTE)dword_140F0A368 + 1) & 7;
  v60 = &PopSleepstudySessionContext[v15 + 26];
  v16 = KeQueryInterruptTimePrecise(&v58);
  v66 = -2500000LL;
  v17 = v16;
  v18 = PopCurrentPowerStatePrecise((__int64)v64, (__int64)&v66);
  v19 = v64[2];
  v20 = v64[3];
  v58.LowPart = v18 != 258;
  v21 = v61[0];
  *(_BYTE *)(v61[0] + 58LL) = v56;
  *(_BYTE *)(v21 + 66) = v59;
  *(_BYTE *)(v21 + 60) = v55;
  *(_BYTE *)(v21 + 62) = v54;
  *(LARGE_INTEGER *)(v21 + 24) = v17;
  *(_DWORD *)(v21 + 36) = a2;
  *(_DWORD *)(v21 + 44) = v20;
  *(_DWORD *)(v21 + 52) = v19;
  *(_BYTE *)(v21 + 63) = v11;
  *(_BYTE *)(v21 + 64) = v13;
  *(_BYTE *)(v21 + 65) = v14;
  memset_0((char *)v60 + 4, 0, 0x6CuLL);
  v22 = v60;
  *(_DWORD *)v60 = a1;
  v23 = (LARGE_INTEGER *)v61[0];
  v24 = *(_QWORD *)(v61[0] + 8LL);
  v22[2] = v17.QuadPart;
  v22[1] = v24 + 1;
  v25 = (unsigned int *)v22;
  *((_DWORD *)v22 + 8) = a2;
  *((_DWORD *)v22 + 10) = v20;
  *((_DWORD *)v22 + 12) = v19;
  *((_BYTE *)v22 + 56) = v64[0];
  v26 = v23;
  *((_BYTE *)v22 + 57) = v56;
  *((_BYTE *)v22 + 66) = v59;
  *((_BYTE *)v22 + 59) = v55;
  *((_BYTE *)v22 + 63) = v11;
  *((_BYTE *)v22 + 61) = v54;
  *((_BYTE *)v22 + 64) = v13;
  *((_BYTE *)v22 + 65) = v14;
  v27 = v23->LowPart - 1;
  if ( v27 )
  {
    if ( v27 != 1 )
    {
      v30 = a1;
      LowPart = v58.LowPart;
      goto LABEL_30;
    }
    PopSleepstudySendWnfNotification(&WNF_PO_SCENARIO_CHANGE, &CPER_EMPTY_GUID);
    PopIdleWakeNotifyModernStandbyExit();
    LowPart = v58.LowPart;
    LOBYTE(v29) = v58.LowPart;
    PopSleepstudyCaptureResiliencyStatistics(v26, v64, v29, 0LL);
  }
  else
  {
    LowPart = v58.LowPart;
  }
  v30 = a1;
  if ( SSHSupportIsPlatformAoAc() && (unsigned int)(a1 - 1) > 1 )
  {
    PopTransitionTelemetryOsState(4, 6);
    PopThermalCsExit();
  }
  if ( v26->LowPart == 1 )
  {
    PopCalculateIdleInformation((__int64)&v62);
    v26[11].QuadPart = v63;
    v26[12] = *(LARGE_INTEGER *)((char *)&v62 + 8);
    v26[13] = KeQueryInterruptTimePrecise(&v58);
  }
  if ( a1 != 2 )
  {
    if ( v26->LowPart == 1 )
      ++*((_QWORD *)v25 + 1);
    if ( ((a1 - 1) & 0xFFFFFFFD) != 0 || (byte_140E27E24 = 1, a1 != 3) )
    {
      if ( a2 >= 0x1000000 || (PopSleepstudyStopReason = 2, (a2 & 0xFFFFFF) != 0x35) )
        PopSleepstudyStopReason = 18;
    }
    else
    {
      PopSleepstudyStopReason = dword_140F0B994;
    }
    PopSetModernStandbyTransitionReason(0, a2);
    PopSleepstudyCaptureSessionStatistics(v31, (int)&CPER_EMPTY_GUID, *((_QWORD *)v25 + 1), (int)v64, v67);
    if ( !byte_140F0A2B8 )
    {
      v32 = &PopWdiScenarioStopEventData;
      v33 = 3LL;
      v34 = v67;
      do
      {
        v35 = v34[1];
        *v32 = *v34;
        v36 = v34[2];
        v32[1] = v35;
        v37 = v34[3];
        v32[2] = v36;
        v38 = v34[4];
        v32[3] = v37;
        v39 = v34[5];
        v32[4] = v38;
        v40 = v34[6];
        v32[5] = v39;
        v41 = v34[7];
        v34 += 8;
        v32[6] = v40;
        v32 += 8;
        *(v32 - 1) = v41;
        --v33;
      }
      while ( v33 );
      v42 = *v34;
      v61[1] = -1LL;
      v43 = v34[1];
      *v32 = v42;
      v61[0] = 0LL;
      v44 = v34[2];
      v32[1] = v43;
      v32[2] = v44;
      KeSetTimer2((__int64)&unk_140F0A2C0, (LARGE_INTEGER)-50000000LL, 0LL, (__int64)v61);
      v45 = *((_QWORD *)v25 + 1) - 2LL;
      byte_140F0A2B8 = 1;
      qword_140F0A2B0 = v45;
    }
    PopSleepstudySendWnfNotification(&WNF_PO_UMPO_SCENARIO_CHANGE, &CPER_EMPTY_GUID);
  }
LABEL_30:
  PopSleepstudySendSessionChangeEvent((__int64)v26, v25);
  SshNotifySystemSessionChange(v30, *((_QWORD *)v25 + 1));
  v46 = v30 - 1;
  if ( !v46 )
  {
    if ( SSHSupportIsPlatformAoAc() && v26->LowPart - 1 > 1 )
    {
      PopTransitionTelemetryOsState(3, 6);
      PopThermalCsEntry(a2 == 23);
    }
    PopCalculateIdleInformation((__int64)&v62);
    *((_QWORD *)v25 + 9) = v63;
    *((_QWORD *)v25 + 10) = *((_QWORD *)&v62 + 1);
    PopSetModernStandbyTransitionReason(1, a2);
    PopSleepstudyCaptureSessionStatistics(v50, (int)&GUID_SPM_LOW_POWER_CS, *((_QWORD *)v25 + 1), (int)v64, v67);
    if ( !byte_140F0A2B8 )
      PopDiagTraceSleepStudyStart(v56);
    v49 = &WNF_PO_UMPO_SCENARIO_CHANGE;
    goto LABEL_39;
  }
  if ( v46 == 1 )
  {
    PopCalculateIdleInformation((__int64)&v62);
    *((_QWORD *)v25 + 9) = v63;
    *((_QWORD *)v25 + 10) = *((_QWORD *)&v62 + 1);
    PopIdleWakeNotifyModernStandbyEnter();
    LOBYTE(v47) = 1;
    LOBYTE(v48) = LowPart;
    PopSleepstudyCaptureResiliencyStatistics(v25, v64, v48, v47);
    v49 = &WNF_PO_SCENARIO_CHANGE;
LABEL_39:
    PopSleepstudySendWnfNotification(v49, &GUID_SPM_LOW_POWER_CS);
  }
  for ( i = (__int64 *)PopSleepstudySessionContext[0]; i != PopSleepstudySessionContext; i = (__int64 *)*i )
    guard_dispatch_icall_no_overrides(*v25, *((_QWORD *)v25 + 1));
  return PopReleaseRwLock(&PopSleepstudySessionLock);
}
