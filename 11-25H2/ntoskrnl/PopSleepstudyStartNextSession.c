/*
 * XREFs of PopSleepstudyStartNextSession @ 0x140AA74D0
 * Callers:
 *     PopPowerAggregatorActiveToScreenOffStateHandler @ 0x14074CE00 (PopPowerAggregatorActiveToScreenOffStateHandler.c)
 *     PopPowerAggregatorEngageModernStandby @ 0x14074D254 (PopPowerAggregatorEngageModernStandby.c)
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x14074D990 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x14074DA30 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x140A2BD88 (PopPowerAggregatorEnterScreenOff.c)
 *     PopPowerAggregatorDisplayPoweringOnStateHandler @ 0x140AA4520 (PopPowerAggregatorDisplayPoweringOnStateHandler.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     KeQueryInterruptTimePrecise @ 0x140279D80 (KeQueryInterruptTimePrecise.c)
 *     KeSetTimer2 @ 0x140370EF0 (KeSetTimer2.c)
 *     PopThermalCsEntry @ 0x14043125C (PopThermalCsEntry.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopCalculateIdleInformation @ 0x140486AEC (PopCalculateIdleInformation.c)
 *     SSHSupportIsPlatformAoAc @ 0x140491754 (SSHSupportIsPlatformAoAc.c)
 *     PopIdleWakeNotifyModernStandbyEnter @ 0x1404A84D0 (PopIdleWakeNotifyModernStandbyEnter.c)
 *     PopIdleWakeNotifyModernStandbyExit @ 0x1404A969C (PopIdleWakeNotifyModernStandbyExit.c)
 *     PopSetModernStandbyTransitionReason @ 0x1404B66AC (PopSetModernStandbyTransitionReason.c)
 *     PopThermalCsExit @ 0x1405CF254 (PopThermalCsExit.c)
 *     Feature_Servicing_ExtMonStatusSPR__private_IsEnabledDeviceUsageNoInline @ 0x1405CF8A4 (Feature_Servicing_ExtMonStatusSPR__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PopDiagTraceSleepStudyStart @ 0x14074BAD0 (PopDiagTraceSleepStudyStart.c)
 *     PopCurrentPowerStatePrecise @ 0x140A22BFC (PopCurrentPowerStatePrecise.c)
 *     SshNotifySystemSessionChange @ 0x140A489D8 (SshNotifySystemSessionChange.c)
 *     PopSleepstudySendSessionChangeEvent @ 0x140A77E58 (PopSleepstudySendSessionChangeEvent.c)
 *     PopTransitionTelemetryOsState @ 0x140A81BA4 (PopTransitionTelemetryOsState.c)
 *     PopSleepstudySendWnfNotification @ 0x140AA8D28 (PopSleepstudySendWnfNotification.c)
 *     PopSleepstudyCaptureResiliencyStatistics @ 0x140AB922C (PopSleepstudyCaptureResiliencyStatistics.c)
 *     PopSleepstudyCaptureSessionStatistics @ 0x140AB9C04 (PopSleepstudyCaptureSessionStatistics.c)
 *     PopAcquirePolicyLock @ 0x140B57E80 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B57ED0 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopSleepstudyStartNextSession(int a1, unsigned int a2)
{
  bool v4; // r15
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // r12d
  bool v12; // r13
  unsigned int v13; // eax
  bool v14; // r12
  LARGE_INTEGER *v15; // rsi
  __int64 v16; // rax
  __int64 *v17; // rdi
  int v18; // eax
  __int64 v19; // rax
  bool v20; // r15
  __int64 v21; // r8
  int v22; // ecx
  _OWORD *v23; // rax
  __int64 v24; // rdx
  _OWORD *v25; // rcx
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int64 v36; // rax
  int v37; // r14d
  __int64 v38; // r9
  __int64 v39; // r8
  __int64 QuadPart; // r8
  __int64 *v41; // rcx
  int v42; // ecx
  __int64 *i; // rbx
  void *v45; // [rsp+28h] [rbp-E0h]
  bool v46; // [rsp+38h] [rbp-D0h]
  char v47; // [rsp+39h] [rbp-CFh]
  bool v48; // [rsp+3Ch] [rbp-CCh]
  char v49; // [rsp+40h] [rbp-C8h]
  LARGE_INTEGER v50; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v51; // [rsp+50h] [rbp-B8h]
  _QWORD v52[4]; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v53; // [rsp+78h] [rbp-90h] BYREF
  __int128 v54; // [rsp+88h] [rbp-80h]
  __int64 v55; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v56[4]; // [rsp+A8h] [rbp-60h] BYREF
  int v57; // [rsp+ACh] [rbp-5Ch]

  v57 = 0;
  memset_0(v56, 0, 0x1ACuLL);
  v4 = 0;
  memset(v52, 0, sizeof(v52));
  v53 = 0LL;
  v54 = 0LL;
  PopAcquirePolicyLock(v6, v5);
  v47 = PopLidOpened != 0;
  if ( (unsigned int)Feature_Servicing_ExtMonStatusSPR__private_IsEnabledDeviceUsageNoInline() )
    v4 = PopConsoleExternalDisplayConnected != 0;
  PopReleasePolicyLock(v8, v7, v9, v10, v45);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopCB);
  v11 = xmmword_140F0AAE0;
  PopReleaseRwLock((signed __int64 *)&PopCB);
  v48 = (v11 & 0x20) != 0;
  v12 = (v11 & 0x10) != 0;
  v13 = v11 >> 6;
  v14 = (v11 & 0x80) != 0;
  v49 = v13 & 1;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopSleepstudySessionLock);
  v15 = (LARGE_INTEGER *)((char *)&unk_140F09990 + 112 * (unsigned int)dword_140F09988);
  v16 = 14LL * (((_BYTE)dword_140F09988 + 1) & 7);
  dword_140F09988 = ((_BYTE)dword_140F09988 + 1) & 7;
  v17 = &PopSleepstudySessionContext[v16 + 26];
  v50 = KeQueryInterruptTimePrecise(&v50);
  v55 = -2500000LL;
  v18 = PopCurrentPowerStatePrecise((__int64)v52, (__int64)&v55);
  v15[3] = v50;
  v46 = v18 != 258;
  v15[5].HighPart = HIDWORD(v52[1]);
  v15[6].HighPart = v52[1];
  BYTE6(v15[7].QuadPart) = v48;
  HIBYTE(v15[7].QuadPart) = v49;
  v15[4].HighPart = a2;
  BYTE2(v15[7].u.LowPart) = v47;
  BYTE5(v15[7].QuadPart) = v12;
  LOBYTE(v15[8].LowPart) = v14;
  if ( (unsigned int)Feature_Servicing_ExtMonStatusSPR__private_IsEnabledDeviceUsageNoInline() )
    BYTE4(v15[7].QuadPart) = v4;
  memset_0((char *)v17 + 4, 0, 0x6CuLL);
  *(_DWORD *)v17 = a1;
  v19 = v15[1].QuadPart + 1;
  *((_DWORD *)v17 + 8) = a2;
  v17[1] = v19;
  v17[2] = v50.QuadPart;
  *((_DWORD *)v17 + 10) = HIDWORD(v52[1]);
  *((_DWORD *)v17 + 12) = v52[1];
  *((_BYTE *)v17 + 56) = v52[0];
  *((_BYTE *)v17 + 57) = v47;
  *((_BYTE *)v17 + 62) = v48;
  *((_BYTE *)v17 + 63) = v49;
  *((_BYTE *)v17 + 61) = v12;
  *((_BYTE *)v17 + 64) = v14;
  if ( (unsigned int)Feature_Servicing_ExtMonStatusSPR__private_IsEnabledDeviceUsageNoInline() )
    *((_BYTE *)v17 + 59) = v4;
  if ( v15->LowPart == 1 )
  {
    v20 = v46;
  }
  else
  {
    if ( v15->LowPart != 2 )
    {
      v20 = v46;
      goto LABEL_31;
    }
    PopSleepstudySendWnfNotification(&WNF_PO_SCENARIO_CHANGE, &CPER_EMPTY_GUID, v17[1]);
    PopIdleWakeNotifyModernStandbyExit();
    v20 = v46;
    LOBYTE(v21) = v46;
    PopSleepstudyCaptureResiliencyStatistics(v15, v52, v21, 0LL);
  }
  if ( SSHSupportIsPlatformAoAc() && (unsigned int)(a1 - 1) > 1 )
  {
    PopTransitionTelemetryOsState(4, 6);
    PopThermalCsExit();
  }
  if ( v15->LowPart == 1 )
  {
    PopCalculateIdleInformation((__int64)&v53);
    v15[11].QuadPart = v54;
    v15[12] = *(LARGE_INTEGER *)((char *)&v53 + 8);
    v15[13] = KeQueryInterruptTimePrecise(&v50);
  }
  if ( a1 != 2 )
  {
    if ( v15->LowPart == 1 )
      ++v17[1];
    if ( ((a1 - 1) & 0xFFFFFFFD) != 0 || (byte_140E27AA4 = 1, a1 != 3) )
    {
      if ( a2 >= 0x1000000 || (PopSleepstudyStopReason = 2, (a2 & 0xFFFFFF) != 0x35) )
        PopSleepstudyStopReason = 18;
    }
    else
    {
      PopSleepstudyStopReason = dword_140F0AE74;
    }
    PopSetModernStandbyTransitionReason(0, a2);
    PopSleepstudyCaptureSessionStatistics(v22, (int)&CPER_EMPTY_GUID, v17[1], (int)v52, v56);
    if ( !byte_140F098D8 )
    {
      v23 = &PopWdiScenarioStopEventData;
      v24 = 3LL;
      v25 = v56;
      do
      {
        v26 = v25[1];
        *v23 = *v25;
        v27 = v25[2];
        v23[1] = v26;
        v28 = v25[3];
        v23[2] = v27;
        v29 = v25[4];
        v23[3] = v28;
        v30 = v25[5];
        v23[4] = v29;
        v31 = v25[6];
        v23[5] = v30;
        v32 = v25[7];
        v25 += 8;
        v23[6] = v31;
        v23 += 8;
        *(v23 - 1) = v32;
        --v24;
      }
      while ( v24 );
      v33 = *v25;
      v51 = -1LL;
      v34 = v25[1];
      *v23 = v33;
      v50.QuadPart = 0LL;
      v35 = v25[2];
      v23[1] = v34;
      v23[2] = v35;
      KeSetTimer2((__int64)&unk_140F098E0, (LARGE_INTEGER)-50000000LL, 0LL, (__int64)&v50);
      v36 = v17[1] - 2;
      byte_140F098D8 = 1;
      qword_140F098D0 = v36;
    }
    PopSleepstudySendWnfNotification(&WNF_PO_UMPO_SCENARIO_CHANGE, &CPER_EMPTY_GUID, v17[1]);
  }
LABEL_31:
  PopSleepstudySendSessionChangeEvent((__int64)v15, (unsigned int *)v17);
  SshNotifySystemSessionChange(a1, v17[1]);
  v37 = a1 - 1;
  if ( !v37 )
  {
    if ( SSHSupportIsPlatformAoAc() && v15->LowPart - 1 > 1 )
    {
      PopTransitionTelemetryOsState(3, 6);
      PopThermalCsEntry(a2 == 23);
    }
    PopCalculateIdleInformation((__int64)&v53);
    v17[9] = v54;
    v17[10] = *((_QWORD *)&v53 + 1);
    PopSetModernStandbyTransitionReason(1, a2);
    PopSleepstudyCaptureSessionStatistics(v42, (int)&GUID_SPM_LOW_POWER_CS, v17[1], (int)v52, v56);
    if ( !byte_140F098D8 )
      PopDiagTraceSleepStudyStart(v47);
    QuadPart = v17[1];
    v41 = &WNF_PO_UMPO_SCENARIO_CHANGE;
    goto LABEL_40;
  }
  if ( v37 == 1 )
  {
    PopCalculateIdleInformation((__int64)&v53);
    v17[9] = v54;
    v17[10] = *((_QWORD *)&v53 + 1);
    PopIdleWakeNotifyModernStandbyEnter();
    LOBYTE(v38) = 1;
    LOBYTE(v39) = v20;
    PopSleepstudyCaptureResiliencyStatistics(v17, v52, v39, v38);
    QuadPart = v15[1].QuadPart;
    v41 = &WNF_PO_SCENARIO_CHANGE;
LABEL_40:
    PopSleepstudySendWnfNotification(v41, &GUID_SPM_LOW_POWER_CS, QuadPart);
  }
  for ( i = (__int64 *)PopSleepstudySessionContext[0]; i != PopSleepstudySessionContext; i = (__int64 *)*i )
    guard_dispatch_icall_no_overrides(*(unsigned int *)v17);
  return PopReleaseRwLock(&PopSleepstudySessionLock);
}
