/*
 * XREFs of PopBatteryApplyCompositeState @ 0x140A3AD08
 * Callers:
 *     PopBatteryWorker @ 0x140AC7D70 (PopBatteryWorker.c)
 * Callees:
 *     DbgPrintEx @ 0x1402CB2F0 (DbgPrintEx.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopInitilizeAcDcSettings @ 0x1403F29B0 (PopInitilizeAcDcSettings.c)
 *     PopSetNotificationWork @ 0x1403F2D58 (PopSetNotificationWork.c)
 *     PopCheckForWork @ 0x1403F2D8C (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x1403F2E04 (PopGetPolicyWorker.c)
 *     _tlgKeywordOn @ 0x140426AF0 (_tlgKeywordOn.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     _tlgCreate1Sz_char @ 0x1404397B4 (_tlgCreate1Sz_char.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x14049883C (PopBatteryTraceSystemBatteryStatus.c)
 *     PopUpdateAcDcState @ 0x1404AEC74 (PopUpdateAcDcState.c)
 *     PopTracePowerReconfig @ 0x1404C69C0 (PopTracePowerReconfig.c)
 *     Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline @ 0x1404F96CC (Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline.c)
 *     PopBatteryTraceSystemBatteryStatusV1 @ 0x1404FAEA4 (PopBatteryTraceSystemBatteryStatusV1.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
 *     PopRecordBatteryLevel @ 0x1407496CC (PopRecordBatteryLevel.c)
 *     PopExecutePowerAction @ 0x140753574 (PopExecutePowerAction.c)
 *     PopDiagTraceBatteryAlarmStatus @ 0x140755630 (PopDiagTraceBatteryAlarmStatus.c)
 *     PopDiagTraceBatteryCountChange @ 0x140755980 (PopDiagTraceBatteryCountChange.c)
 *     PopDiagTraceBatteryTriggerMet @ 0x140755A60 (PopDiagTraceBatteryTriggerMet.c)
 *     PopCheckCachedPowerSourceStateUpdates @ 0x14075B0D4 (PopCheckCachedPowerSourceStateUpdates.c)
 *     PopBatteryUpdateAlarms @ 0x1409B7D30 (PopBatteryUpdateAlarms.c)
 *     PopUpdateSystemIdleContext @ 0x1409B99D4 (PopUpdateSystemIdleContext.c)
 *     PopSetPowerSettingValueAcDc @ 0x1409BC77C (PopSetPowerSettingValueAcDc.c)
 *     PopEsQueueStateEvaluation @ 0x140A3BA78 (PopEsQueueStateEvaluation.c)
 *     PopBatteryCheckCompositeCapacity @ 0x140A3BDF4 (PopBatteryCheckCompositeCapacity.c)
 *     PopBatteryCheckTrigger @ 0x140A3C298 (PopBatteryCheckTrigger.c)
 *     PopBatteryCheckTriggerAllBatteries @ 0x140A3C2D0 (PopBatteryCheckTriggerAllBatteries.c)
 *     PpmProfileAcDcUpdate @ 0x140A46B88 (PpmProfileAcDcUpdate.c)
 *     PopDiagTraceBatteryTriggerFlags @ 0x140A6D788 (PopDiagTraceBatteryTriggerFlags.c)
 *     PopAccountCbEnergyChange @ 0x140A9BD1C (PopAccountCbEnergyChange.c)
 *     PopRecordAcDcState @ 0x140AA23DC (PopRecordAcDcState.c)
 *     PopSqmBatteryUpdate @ 0x140AA8B90 (PopSqmBatteryUpdate.c)
 *     PopRecordBatteryPercentage @ 0x140AADE44 (PopRecordBatteryPercentage.c)
 *     PopBatteryTracePercentageRemaining @ 0x140ABF474 (PopBatteryTracePercentageRemaining.c)
 *     PopRecalculateCBTriggerLevels @ 0x140AC903C (PopRecalculateCBTriggerLevels.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
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
  __int64 v12; // rax
  int v13; // ecx
  unsigned __int64 v14; // rdi
  __int64 v15; // rsi
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // edi
  __int64 v20; // rcx
  unsigned int v21; // eax
  int v22; // ebx
  __int64 v23; // r15
  char *v24; // r13
  int *v25; // r12
  int v26; // esi
  __int64 v27; // rdx
  unsigned __int64 v28; // r8
  __int64 v29; // r9
  void *v30; // rax
  unsigned int v31; // ecx
  const CHAR *v32; // rdx
  unsigned int v33; // r8d
  unsigned __int8 v34; // r8
  __int64 v35; // rcx
  __int64 v37; // [rsp+20h] [rbp-59h]
  __int64 v38; // [rsp+20h] [rbp-59h]
  __int64 v39; // [rsp+20h] [rbp-59h]
  char v40; // [rsp+40h] [rbp-39h]
  unsigned int v41; // [rsp+44h] [rbp-35h] BYREF
  unsigned int v42; // [rsp+48h] [rbp-31h] BYREF
  int v43; // [rsp+4Ch] [rbp-2Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v44[2]; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v45[2]; // [rsp+70h] [rbp-9h] BYREF
  int *v46; // [rsp+80h] [rbp+7h]
  __int64 v47; // [rsp+88h] [rbp+Fh]

  v3 = ~*(_DWORD *)a1;
  v41 = 0;
  v43 = 0;
  v5 = a2;
  v40 = 0;
  v7 = v3 & 1;
  PopAcquirePolicyLock(a1, a2);
  if ( PopUpdateAcDcState(v7) )
  {
    PopBatteryUpdateAlarms(1, 0LL);
    PopSetNotificationWork(4u);
    PopRecordAcDcState(v7);
    PopUpdateSystemIdleContext(2);
    PopInitilizeAcDcSettings();
    PpmProfileAcDcUpdate();
    if ( v7 == 1 )
      PopMaxChargeRate = 0LL;
    v40 = 1;
  }
  if ( byte_140F0AE58 )
  {
    PopSetPowerSettingValueAcDc((__int64)&GUID_BATTERY_COUNT, 4u, (__int64)&dword_140F0AE54);
    v12 = qword_140F0AE60;
    v11 = &qword_140F0AE60;
    v10 = 0LL;
    v8 = 0LL;
    while ( (__int64 *)v12 != &qword_140F0AE60 )
    {
      v13 = *(_DWORD *)(v12 + 104);
      if ( v13 == 2 )
      {
        v8 = (unsigned int)(v8 + 1);
      }
      else if ( v13 == 4 )
      {
        v10 = (unsigned int)(v10 + 1);
      }
      v12 = *(_QWORD *)v12;
    }
    v9 = (unsigned int)dword_140F0AE54;
    if ( PopCachedValidBatteryCount == -1 || PopCachedValidBatteryCount != dword_140F0AE54 )
    {
      PopCachedValidBatteryCount = dword_140F0AE54;
      PopDiagTraceBatteryCountChange(dword_140F0AE54, v8, v10);
    }
    v40 = 1;
  }
  PopReleasePolicyLock(v9, v8, v10, v11, v37);
  PopBatteryCheckCompositeCapacity(a1, v7, &v41);
  if ( ((*(_BYTE *)a1 ^ (unsigned __int8)xmmword_140F0AE80) & 0xF) != 0 || byte_140F0AE58 )
  {
    PopSetNotificationWork(8u);
    byte_140F0AE58 = 0;
  }
  xmmword_140F0AE80 = *(_OWORD *)a1;
  unk_140F0AE90 = *(_OWORD *)(a1 + 16);
  HIDWORD(xmmword_140F0AE94) = *(_DWORD *)(a1 + 32);
  dword_140F0AEA4 = v5;
  if ( v41 )
  {
    v42 = (dword_140F0B024 + 500) / 0x3E8u;
    PopSetPowerSettingValueAcDc((__int64)&GUID_BATTERY_PERCENTAGE_REMAINING, 4u, (__int64)&v42);
    PopRecordBatteryPercentage(v42);
    LODWORD(v14) = 0;
    v15 = MEMORY[0xFFFFF78000000008];
    if ( dword_140F0B024 != -1 )
      v14 = (MEMORY[0xFFFFF78000000008] - qword_140F0B028 + 5000) / 0x2710uLL;
    PopSqmBatteryUpdate(v42, v41, v7, (unsigned int)v14);
    PopBatteryTracePercentageRemaining(v42, v41, v7, (unsigned int)v14);
    qword_140F0B028 = v15;
  }
  PopAcquireRwLockExclusive(&xmmword_140F0B050);
  v16 = dword_140F0AEA4;
  if ( dword_140F0AEA4 == -1 )
    v16 = 0;
  LODWORD(v38) = DWORD1(xmmword_140F0AE80);
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
    (unsigned int)xmmword_140F0AE80,
    v38,
    DWORD2(xmmword_140F0AE80),
    HIDWORD(xmmword_140F0AE80),
    v16);
  xmmword_140F0B060 = 0LL;
  BYTE7(xmmword_140F0B060) = dword_140F0AECC;
  *(_QWORD *)&xmmword_140F0B080 = -1LL;
  xmmword_140F0B070 = 0LL;
  *((_QWORD *)&xmmword_140F0B080 + 1) = -1LL;
  *(_QWORD *)&xmmword_140F0B090 = -1LL;
  DWORD2(xmmword_140F0B090) = -1;
  LOBYTE(xmmword_140F0B060) = xmmword_140F0AE80 & 1;
  if ( dword_140F0AE54 )
  {
    BYTE1(xmmword_140F0B060) = 1;
    BYTE2(xmmword_140F0B060) = (xmmword_140F0AE80 & 4) != 0;
    DWORD2(xmmword_140F0B060) = HIDWORD(qword_140F0AEB4);
    HIDWORD(xmmword_140F0B060) = DWORD1(xmmword_140F0AE80);
    LODWORD(xmmword_140F0B070) = HIDWORD(xmmword_140F0AE80);
    DWORD1(xmmword_140F0B070) = dword_140F0AEA4;
    *((_QWORD *)&xmmword_140F0B070 + 1) = unk_140F0AEBC;
    BYTE3(xmmword_140F0B060) = byte_140F0B020 != 0 || (xmmword_140F0AE80 & 2) != 0;
    if ( (unsigned int)Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline() )
    {
      xmmword_140F0B080 = xmmword_140F0AE94;
      dword_140F0B0A0 = DWORD2(xmmword_140F0AE80);
      HIDWORD(xmmword_140F0B090) = a3;
    }
  }
  if ( (unsigned int)Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( qword_140F0B0F0 && *(_DWORD *)(qword_140F0B0F0 + 128) == 1 )
    {
      *(_QWORD *)&xmmword_140F0B090 = *(_QWORD *)(qword_140F0B0F0 + 184);
      DWORD2(xmmword_140F0B090) = *(_DWORD *)(qword_140F0B0F0 + 192);
    }
    PopCheckCachedPowerSourceStateUpdates();
  }
  PopAccountCbEnergyChange();
  if ( (unsigned int)Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline() )
    PopBatteryTraceSystemBatteryStatusV1(0);
  else
    PopBatteryTraceSystemBatteryStatus(0);
  PopReleaseRwLock((signed __int64 *)&xmmword_140F0B050);
  if ( HIDWORD(qword_140F0AEB4) )
    PopRecalculateCBTriggerLevels();
  if ( qword_140F0AEB4
    && (unsigned __int8)PopBatteryCheckTriggerAllBatteries(&unk_140F0AFA0, 1LL)
    && (dword_140F0AFA4[0] & 2) == 0 )
  {
    PopGetPolicyWorker(64);
    PopCheckForWork();
  }
  PopAcquirePolicyLock(v18, v17);
  v41 = 0;
  v19 = 0;
  LODWORD(v20) = 0;
  v21 = 0;
  v22 = dword_140F0AE54 != 0 ? 3 : 0;
  do
  {
    v23 = v21;
    v24 = (char *)&unk_140F0AFA0 + 32 * (unsigned int)v20;
    v25 = &dword_140F0AFA4[8 * v21];
    v26 = *v25;
    if ( (unsigned __int8)PopBatteryCheckTrigger(v24) )
    {
      if ( PopBatteryCachedFlags[v23] != v26 )
      {
        v30 = PopPolicy;
        PopBatteryCachedFlags[v23] = v26;
        PopDiagTraceBatteryAlarmStatus((__int64)v24, (__int64)v30 + 24 * v23 + 96, &v41);
        v19 = v41;
        v28 = 32LL * v41;
        if ( dword_140F0AFA4[v28 / 4] == 128 )
        {
          PopDiagTraceBatteryTriggerMet((__int64)&unk_140F0AFA0 + v28, (__int64)PopPolicy + 24 * v41 + 96, (int *)&v41);
          v19 = v41;
        }
      }
      if ( !byte_140F0AF98 )
        PopExecutePowerAction(
          (_DWORD *)&unk_140F0AFA0 + 8 * v19,
          8u,
          (_DWORD *)PopPolicy + 6 * v19 + 26,
          *((_DWORD *)PopPolicy + 6 * v19 + 29),
          1u);
      if ( v22 == 3 )
      {
        if ( v19 )
        {
          if ( v19 == 1 )
            v22 = 2;
        }
        else
        {
          v22 = 1;
        }
      }
    }
    else
    {
      PopBatteryCachedFlags[v23] = -1;
      *v25 = v26 & 0xFFFFFFFC;
      PopDiagTraceBatteryTriggerFlags(&v41, v24);
      v19 = v41;
    }
    v41 = ++v19;
    v21 = v19;
    v20 = v19;
  }
  while ( v19 < 4 );
  if ( dword_140F0AED0 != v22 )
  {
    v39 = 0LL;
    v43 = v22;
    ZwUpdateWnfStateData((__int64)&WNF_PO_BATTERY_CHARGE_LEVEL, (__int64)&v43);
    v31 = dword_140E076F0;
    if ( (unsigned int)dword_140E076F0 > 5 )
    {
      if ( v22 )
      {
        if ( v22 == 1 )
        {
          v32 = "PoBatteryLevelCritical";
        }
        else if ( v22 == 2 )
        {
          v32 = "PoBatteryLevelLow";
        }
        else
        {
          v32 = "PoBatteryLevelNormal";
        }
      }
      else
      {
        v32 = "PoBatteryLevelUnknown";
      }
      tlgCreate1Sz_char((__int64)v45, v32);
      v42 = v33;
      v46 = (int *)&v42;
      v47 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E076F0, (unsigned __int8 *)word_14004C9FA, 0LL, 0LL, 4u, v44);
      v31 = dword_140E076F0;
    }
    if ( (unsigned int)(v22 - 1) <= 1 != (unsigned int)(dword_140F0AED0 - 1) <= 1
      && v31 > 5
      && tlgKeywordOn((__int64)&dword_140E076F0, 0x400000000000LL) )
    {
      v42 = v34;
      v45[1] = 4LL;
      v45[0] = &v42;
      v41 = v22;
      v46 = (int *)&v41;
      v47 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E076F0,
        (unsigned __int8 *)&byte_14004C9B7,
        0LL,
        0LL,
        4u,
        v44);
    }
    dword_140F0AED0 = v22;
    PopRecordBatteryLevel(v22);
  }
  if ( v40 )
    PopTracePowerReconfig();
  PopReleasePolicyLock(v20, v27, v28, v29, v39);
  LOBYTE(v35) = v40;
  PopEsQueueStateEvaluation(v35);
  return v40;
}
