/*
 * XREFs of PopBatteryApplyCompositeState @ 0x140AC1ED8
 * Callers:
 *     PopBatteryWorker @ 0x140AC2900 (PopBatteryWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     DbgPrintEx @ 0x1403A9690 (DbgPrintEx.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_char @ 0x140428104 (_tlgCreate1Sz_char.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopInitilizeAcDcSettings @ 0x1404765A0 (PopInitilizeAcDcSettings.c)
 *     PopSetNotificationWork @ 0x140476948 (PopSetNotificationWork.c)
 *     PopCheckForWork @ 0x14047697C (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x1404769F4 (PopGetPolicyWorker.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x140498BCC (PopBatteryTraceSystemBatteryStatus.c)
 *     PopBsdHandleRequest @ 0x1404A7FA0 (PopBsdHandleRequest.c)
 *     PopUpdateAcDcState @ 0x1404ADDF4 (PopUpdateAcDcState.c)
 *     PopTracePowerReconfig @ 0x1404C6150 (PopTracePowerReconfig.c)
 *     Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline @ 0x1405C86A4 (Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline.c)
 *     PopBatteryTraceSystemBatteryStatusV1 @ 0x1405D318C (PopBatteryTraceSystemBatteryStatusV1.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 *     PopExecutePowerAction @ 0x140747484 (PopExecutePowerAction.c)
 *     PopDiagTraceBatteryAlarmStatus @ 0x140749560 (PopDiagTraceBatteryAlarmStatus.c)
 *     PopDiagTraceBatteryCountChange @ 0x1407498B0 (PopDiagTraceBatteryCountChange.c)
 *     PopDiagTraceBatteryTriggerMet @ 0x1407499AC (PopDiagTraceBatteryTriggerMet.c)
 *     PopCheckCachedPowerSourceStateUpdates @ 0x14074E874 (PopCheckCachedPowerSourceStateUpdates.c)
 *     PopSetPowerSettingValueAcDc @ 0x1409649CC (PopSetPowerSettingValueAcDc.c)
 *     PopBatteryUpdateAlarms @ 0x140A0F870 (PopBatteryUpdateAlarms.c)
 *     PopUpdateSystemIdleContext @ 0x140A1112C (PopUpdateSystemIdleContext.c)
 *     PopEsQueueStateEvaluation @ 0x140A36D7C (PopEsQueueStateEvaluation.c)
 *     PpmProfileAcDcUpdate @ 0x140A3E764 (PpmProfileAcDcUpdate.c)
 *     PopBatteryCheckTrigger @ 0x140A5E3D8 (PopBatteryCheckTrigger.c)
 *     PopBatteryCheckTriggerAllBatteries @ 0x140A5E410 (PopBatteryCheckTriggerAllBatteries.c)
 *     PopBatteryCheckCompositeCapacity @ 0x140A6AF48 (PopBatteryCheckCompositeCapacity.c)
 *     PopDiagTraceBatteryTriggerFlags @ 0x140A6B418 (PopDiagTraceBatteryTriggerFlags.c)
 *     PopRecalculateCBTriggerLevels @ 0x140A74B3C (PopRecalculateCBTriggerLevels.c)
 *     PopAccountCbEnergyChange @ 0x140A97050 (PopAccountCbEnergyChange.c)
 *     PopRecordAcDcState @ 0x140A9CA7C (PopRecordAcDcState.c)
 *     PopSqmBatteryUpdate @ 0x140AA3B08 (PopSqmBatteryUpdate.c)
 *     PopRecordBatteryPercentage @ 0x140AA8A90 (PopRecordBatteryPercentage.c)
 *     PopBatteryTracePercentageRemaining @ 0x140ABB2D8 (PopBatteryTracePercentageRemaining.c)
 *     PopAcquirePolicyLock @ 0x140B57E80 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B57ED0 (PopReleasePolicyLock.c)
 */

char __fastcall PopBatteryApplyCompositeState(__int64 a1, __int64 a2, int a3)
{
  int v3; // ebx
  int v5; // esi
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 *v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // r8d
  __int64 v15; // rax
  int v16; // ecx
  unsigned __int64 v17; // rdi
  __int64 v18; // rsi
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned int v22; // edi
  __int64 v23; // rcx
  unsigned int v24; // eax
  int v25; // ebx
  __int64 v26; // r15
  char *v27; // r13
  int *v28; // r12
  int v29; // esi
  __int64 v30; // rdx
  unsigned __int64 v31; // r8
  __int64 v32; // r9
  void *v33; // rax
  unsigned int v34; // ecx
  const CHAR *v35; // rdx
  unsigned int v36; // r8d
  unsigned __int8 v37; // r8
  void *ExplicitScope; // [rsp+20h] [rbp-59h]
  void *ExplicitScopea; // [rsp+20h] [rbp-59h]
  void *ExplicitScopeb; // [rsp+20h] [rbp-59h]
  char v42; // [rsp+40h] [rbp-39h]
  unsigned int v43; // [rsp+44h] [rbp-35h] BYREF
  unsigned int v44; // [rsp+48h] [rbp-31h] BYREF
  int Buffer; // [rsp+4Ch] [rbp-2Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v46[2]; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v47[2]; // [rsp+70h] [rbp-9h] BYREF
  unsigned int *v48; // [rsp+80h] [rbp+7h]
  __int64 v49; // [rsp+88h] [rbp+Fh]

  v3 = ~*(_DWORD *)a1;
  v43 = 0;
  Buffer = 0;
  v5 = a2;
  v42 = 0;
  v7 = v3 & 1;
  PopAcquirePolicyLock(a1, a2);
  if ( PopUpdateAcDcState(v7) )
  {
    PopBatteryUpdateAlarms(1, 0LL);
    PopSetNotificationWork(4u);
    PopRecordAcDcState(v7);
    PopUpdateSystemIdleContext(2);
    PopInitilizeAcDcSettings();
    PpmProfileAcDcUpdate(v13, v12, v14);
    if ( v7 == 1 )
      PopMaxChargeRate = 0LL;
    v42 = 1;
  }
  if ( byte_140F0AAB8 )
  {
    PopSetPowerSettingValueAcDc((__int64)&GUID_BATTERY_COUNT, 4u, (__int64)&dword_140F0AAB4);
    v15 = qword_140F0AAC0;
    v11 = &qword_140F0AAC0;
    v10 = 0LL;
    v8 = 0LL;
    while ( (__int64 *)v15 != &qword_140F0AAC0 )
    {
      v16 = *(_DWORD *)(v15 + 104);
      if ( v16 == 2 )
      {
        v8 = (unsigned int)(v8 + 1);
      }
      else if ( v16 == 4 )
      {
        v10 = (unsigned int)(v10 + 1);
      }
      v15 = *(_QWORD *)v15;
    }
    v9 = (unsigned int)dword_140F0AAB4;
    if ( PopCachedValidBatteryCount == -1 || PopCachedValidBatteryCount != dword_140F0AAB4 )
    {
      PopCachedValidBatteryCount = dword_140F0AAB4;
      PopDiagTraceBatteryCountChange(dword_140F0AAB4, v8, v10);
    }
    v42 = 1;
  }
  PopReleasePolicyLock(v9, v8, v10, v11, ExplicitScope);
  PopBatteryCheckCompositeCapacity(a1, v7, &v43);
  if ( (((unsigned __int8)xmmword_140F0AAE0 ^ *(_BYTE *)a1) & 0xF) != 0 || byte_140F0AAB8 )
  {
    PopSetNotificationWork(8u);
    byte_140F0AAB8 = 0;
  }
  xmmword_140F0AAE0 = *(_OWORD *)a1;
  unk_140F0AAF0 = *(_OWORD *)(a1 + 16);
  HIDWORD(xmmword_140F0AAF4) = *(_DWORD *)(a1 + 32);
  dword_140F0AB04 = v5;
  if ( v43 )
  {
    v44 = (dword_140F0AC84 + 500) / 0x3E8u;
    PopSetPowerSettingValueAcDc((__int64)&GUID_BATTERY_PERCENTAGE_REMAINING, 4u, (__int64)&v44);
    PopRecordBatteryPercentage(v44);
    LODWORD(v17) = 0;
    v18 = MEMORY[0xFFFFF78000000008];
    if ( dword_140F0AC84 != -1 )
      v17 = (MEMORY[0xFFFFF78000000008] - qword_140F0AC88 + 5000) / 0x2710uLL;
    PopSqmBatteryUpdate();
    PopBatteryTracePercentageRemaining(v44, v43, v7, v17);
    qword_140F0AC88 = v18;
  }
  PopAcquireRwLockExclusive((unsigned __int64 *)&xmmword_140F0ACB0);
  v19 = dword_140F0AB04;
  if ( dword_140F0AB04 == -1 )
    v19 = 0;
  LODWORD(ExplicitScopea) = DWORD1(xmmword_140F0AAE0);
  DbgPrintEx(
    0x92u,
    3u,
    "\n"
    "Composite Status\n"
    "|-- PowerState = 0x%08x\n"
    "|-- Capacity   = %u\n"
    "|-- Voltage    = %u\n"
    "|-- Rate       = %d\n"
    "|-- Est Time   = %u\n",
    (unsigned int)xmmword_140F0AAE0,
    ExplicitScopea,
    DWORD2(xmmword_140F0AAE0),
    HIDWORD(xmmword_140F0AAE0),
    v19);
  xmmword_140F0ACC0 = 0LL;
  BYTE7(xmmword_140F0ACC0) = dword_140F0AB2C;
  *(_QWORD *)&xmmword_140F0ACE0 = -1LL;
  xmmword_140F0ACD0 = 0LL;
  *((_QWORD *)&xmmword_140F0ACE0 + 1) = -1LL;
  *(_QWORD *)&xmmword_140F0ACF0 = -1LL;
  DWORD2(xmmword_140F0ACF0) = -1;
  LOBYTE(xmmword_140F0ACC0) = xmmword_140F0AAE0 & 1;
  if ( dword_140F0AAB4 )
  {
    BYTE1(xmmword_140F0ACC0) = 1;
    BYTE2(xmmword_140F0ACC0) = (xmmword_140F0AAE0 & 4) != 0;
    DWORD2(xmmword_140F0ACC0) = HIDWORD(qword_140F0AB14);
    HIDWORD(xmmword_140F0ACC0) = DWORD1(xmmword_140F0AAE0);
    LODWORD(xmmword_140F0ACD0) = HIDWORD(xmmword_140F0AAE0);
    DWORD1(xmmword_140F0ACD0) = dword_140F0AB04;
    *((_QWORD *)&xmmword_140F0ACD0 + 1) = qword_140F0AB1C;
    BYTE3(xmmword_140F0ACC0) = byte_140F0AC80 != 0 || (xmmword_140F0AAE0 & 2) != 0;
    if ( (unsigned int)Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline() )
    {
      xmmword_140F0ACE0 = xmmword_140F0AAF4;
      dword_140F0AD00 = DWORD2(xmmword_140F0AAE0);
      HIDWORD(xmmword_140F0ACF0) = a3;
    }
  }
  if ( (unsigned int)Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( qword_140F0AD50 && *(_DWORD *)(qword_140F0AD50 + 128) == 1 )
    {
      *(_QWORD *)&xmmword_140F0ACF0 = *(_QWORD *)(qword_140F0AD50 + 184);
      DWORD2(xmmword_140F0ACF0) = *(_DWORD *)(qword_140F0AD50 + 192);
    }
    PopCheckCachedPowerSourceStateUpdates();
  }
  PopAccountCbEnergyChange();
  if ( (unsigned int)Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline() )
    PopBatteryTraceSystemBatteryStatusV1(0);
  else
    PopBatteryTraceSystemBatteryStatus(0);
  PopReleaseRwLock((signed __int64 *)&xmmword_140F0ACB0);
  if ( HIDWORD(qword_140F0AB14) )
    PopRecalculateCBTriggerLevels(v21, v20);
  if ( qword_140F0AB14
    && PopBatteryCheckTriggerAllBatteries((__int64)&unk_140F0AC00, 1)
    && (dword_140F0AC04[0] & 2) == 0 )
  {
    PopGetPolicyWorker(64);
    PopCheckForWork();
  }
  PopAcquirePolicyLock(v21, v20);
  v43 = 0;
  v22 = 0;
  LODWORD(v23) = 0;
  v24 = 0;
  v25 = dword_140F0AAB4 != 0 ? 3 : 0;
  do
  {
    v26 = v24;
    v27 = (char *)&unk_140F0AC00 + 32 * (unsigned int)v23;
    v28 = &dword_140F0AC04[8 * v24];
    v29 = *v28;
    if ( PopBatteryCheckTrigger((__int64)v27) )
    {
      if ( PopBatteryCachedFlags[v26] != v29 )
      {
        v33 = PopPolicy;
        PopBatteryCachedFlags[v26] = v29;
        PopDiagTraceBatteryAlarmStatus((__int64)v27, (__int64)v33 + 24 * v26 + 96, &v43);
        v22 = v43;
        v31 = 32LL * v43;
        if ( dword_140F0AC04[v31 / 4] == 128 )
        {
          PopDiagTraceBatteryTriggerMet((__int64)&unk_140F0AC00 + v31, (__int64)PopPolicy + 24 * v43 + 96, (int *)&v43);
          v22 = v43;
        }
      }
      if ( !byte_140F0ABF8 )
        PopExecutePowerAction(
          (_DWORD *)&unk_140F0AC00 + 8 * v22,
          8u,
          (_DWORD *)PopPolicy + 6 * v22 + 26,
          *((_DWORD *)PopPolicy + 6 * v22 + 29),
          1u);
      if ( v25 == 3 )
      {
        if ( v22 )
        {
          if ( v22 == 1 )
            v25 = 2;
        }
        else
        {
          v25 = 1;
        }
      }
    }
    else
    {
      PopBatteryCachedFlags[v26] = -1;
      *v28 = v29 & 0xFFFFFFFC;
      PopDiagTraceBatteryTriggerFlags(&v43, (__int64)v27);
      v22 = v43;
    }
    v43 = ++v22;
    v24 = v22;
    v23 = v22;
  }
  while ( v22 < 4 );
  if ( dword_140F0AB30 != v25 )
  {
    Buffer = v25;
    ZwUpdateWnfStateData(&WNF_PO_BATTERY_CHARGE_LEVEL, &Buffer, 4u, 0LL, 0LL, 0, 0);
    v34 = dword_140E07680;
    if ( (unsigned int)dword_140E07680 > 5 )
    {
      if ( v25 )
      {
        if ( v25 == 1 )
        {
          v35 = "PoBatteryLevelCritical";
        }
        else if ( v25 == 2 )
        {
          v35 = "PoBatteryLevelLow";
        }
        else
        {
          v35 = "PoBatteryLevelNormal";
        }
      }
      else
      {
        v35 = "PoBatteryLevelUnknown";
      }
      tlgCreate1Sz_char((__int64)v47, v35);
      v44 = v36;
      v48 = &v44;
      v49 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07680, (unsigned __int8 *)byte_14004C558, 0LL, 0LL, 4u, v46);
      v34 = dword_140E07680;
    }
    if ( (unsigned int)(v25 - 1) <= 1 != (unsigned int)(dword_140F0AB30 - 1) <= 1
      && v34 > 5
      && tlgKeywordOn((__int64)&dword_140E07680, 0x400000000000LL) )
    {
      v44 = v37;
      v47[1] = 4LL;
      v47[0] = &v44;
      v43 = v25;
      v48 = &v43;
      v49 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E07680,
        (unsigned __int8 *)&dword_14004C59C,
        0LL,
        0LL,
        4u,
        v46);
    }
    dword_140F0AB30 = v25;
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopBsdUpdateLock);
    BYTE10(PopBsdPowerTransition) = BYTE10(PopBsdPowerTransition) & 0x3F | ((_BYTE)v25 << 6);
    PopBsdHandleRequest(1u);
    PopReleaseRwLock(&PopBsdUpdateLock);
  }
  if ( v42 )
    PopTracePowerReconfig();
  PopReleasePolicyLock(v23, v30, v31, v32, ExplicitScopeb);
  PopEsQueueStateEvaluation(v42);
  return v42;
}
