/*
 * XREFs of PopBatteryApplyCompositeState @ 0x140A304E8
 * Callers:
 *     PopBatteryWorker @ 0x140AC5DB0 (PopBatteryWorker.c)
 * Callees:
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopInitilizeAcDcSettings @ 0x1403E66D0 (PopInitilizeAcDcSettings.c)
 *     PopSetNotificationWork @ 0x1403E6A78 (PopSetNotificationWork.c)
 *     PopCheckForWork @ 0x1403E6AAC (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x1403E6B24 (PopGetPolicyWorker.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     _tlgCreate1Sz_char @ 0x14042C374 (_tlgCreate1Sz_char.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x14049319C (PopBatteryTraceSystemBatteryStatus.c)
 *     PopUpdateAcDcState @ 0x1404A9584 (PopUpdateAcDcState.c)
 *     PopTracePowerReconfig @ 0x1404BFE20 (PopTracePowerReconfig.c)
 *     Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline @ 0x1404F6FAC (Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline.c)
 *     PopBatteryTraceSystemBatteryStatusV1 @ 0x1404F8784 (PopBatteryTraceSystemBatteryStatusV1.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 *     PopRecordBatteryLevel @ 0x1407479FC (PopRecordBatteryLevel.c)
 *     PopExecutePowerAction @ 0x140751894 (PopExecutePowerAction.c)
 *     PopDiagTraceBatteryAlarmStatus @ 0x140753950 (PopDiagTraceBatteryAlarmStatus.c)
 *     PopDiagTraceBatteryCountChange @ 0x140753CA0 (PopDiagTraceBatteryCountChange.c)
 *     PopDiagTraceBatteryTriggerMet @ 0x140753DC0 (PopDiagTraceBatteryTriggerMet.c)
 *     PopCheckCachedPowerSourceStateUpdates @ 0x140759BB0 (PopCheckCachedPowerSourceStateUpdates.c)
 *     PopBatteryUpdateAlarms @ 0x14099E388 (PopBatteryUpdateAlarms.c)
 *     PopUpdateSystemIdleContext @ 0x1409A0024 (PopUpdateSystemIdleContext.c)
 *     PopSetPowerSettingValueAcDc @ 0x1409A2DCC (PopSetPowerSettingValueAcDc.c)
 *     PopEsQueueStateEvaluation @ 0x140A31258 (PopEsQueueStateEvaluation.c)
 *     PopBatteryCheckCompositeCapacity @ 0x140A315D4 (PopBatteryCheckCompositeCapacity.c)
 *     PopBatteryCheckTrigger @ 0x140A31A78 (PopBatteryCheckTrigger.c)
 *     PopBatteryCheckTriggerAllBatteries @ 0x140A31AB0 (PopBatteryCheckTriggerAllBatteries.c)
 *     PpmProfileAcDcUpdate @ 0x140A3CAF8 (PpmProfileAcDcUpdate.c)
 *     PopDiagTraceBatteryTriggerFlags @ 0x140A66E48 (PopDiagTraceBatteryTriggerFlags.c)
 *     PopAccountCbEnergyChange @ 0x140A9728C (PopAccountCbEnergyChange.c)
 *     PopRecordAcDcState @ 0x140A9D76C (PopRecordAcDcState.c)
 *     PopSqmBatteryUpdate @ 0x140AA3C3C (PopSqmBatteryUpdate.c)
 *     PopRecordBatteryPercentage @ 0x140AA8EC4 (PopRecordBatteryPercentage.c)
 *     PopBatteryTracePercentageRemaining @ 0x140ABA554 (PopBatteryTracePercentageRemaining.c)
 *     PopRecalculateCBTriggerLevels @ 0x140AC707C (PopRecalculateCBTriggerLevels.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
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
  void *ExplicitScope; // [rsp+20h] [rbp-59h]
  void *ExplicitScopea; // [rsp+20h] [rbp-59h]
  void *ExplicitScopeb; // [rsp+20h] [rbp-59h]
  char v40; // [rsp+40h] [rbp-39h]
  unsigned int v41; // [rsp+44h] [rbp-35h] BYREF
  unsigned int v42; // [rsp+48h] [rbp-31h] BYREF
  int Buffer; // [rsp+4Ch] [rbp-2Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v44[2]; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v45[2]; // [rsp+70h] [rbp-9h] BYREF
  int *v46; // [rsp+80h] [rbp+7h]
  __int64 v47; // [rsp+88h] [rbp+Fh]

  v3 = ~*(_DWORD *)a1;
  v41 = 0;
  Buffer = 0;
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
  if ( byte_140F0BC98 )
  {
    PopSetPowerSettingValueAcDc((__int64)&GUID_BATTERY_COUNT, 4u, (__int64)&dword_140F0BC94);
    v12 = qword_140F0BCA0;
    v11 = &qword_140F0BCA0;
    v10 = 0LL;
    v8 = 0LL;
    while ( (__int64 *)v12 != &qword_140F0BCA0 )
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
    v9 = (unsigned int)dword_140F0BC94;
    if ( PopCachedValidBatteryCount == -1 || PopCachedValidBatteryCount != dword_140F0BC94 )
    {
      PopCachedValidBatteryCount = dword_140F0BC94;
      PopDiagTraceBatteryCountChange(dword_140F0BC94, v8, v10);
    }
    v40 = 1;
  }
  PopReleasePolicyLock(v9, v8, v10, v11, ExplicitScope);
  PopBatteryCheckCompositeCapacity(a1, v7, &v41);
  if ( ((*(_BYTE *)a1 ^ (unsigned __int8)xmmword_140F0BCC0) & 0xF) != 0 || byte_140F0BC98 )
  {
    PopSetNotificationWork(8u);
    byte_140F0BC98 = 0;
  }
  xmmword_140F0BCC0 = *(_OWORD *)a1;
  unk_140F0BCD0 = *(_OWORD *)(a1 + 16);
  HIDWORD(xmmword_140F0BCD4) = *(_DWORD *)(a1 + 32);
  dword_140F0BCE4 = v5;
  if ( v41 )
  {
    v42 = (dword_140F0BE64 + 500) / 0x3E8u;
    PopSetPowerSettingValueAcDc((__int64)&GUID_BATTERY_PERCENTAGE_REMAINING, 4u, (__int64)&v42);
    PopRecordBatteryPercentage(v42);
    LODWORD(v14) = 0;
    v15 = MEMORY[0xFFFFF78000000008];
    if ( dword_140F0BE64 != -1 )
      v14 = (MEMORY[0xFFFFF78000000008] - qword_140F0BE68 + 5000) / 0x2710uLL;
    PopSqmBatteryUpdate(v42, v41, v7, (unsigned int)v14);
    PopBatteryTracePercentageRemaining(v42, v41, v7, (unsigned int)v14);
    qword_140F0BE68 = v15;
  }
  PopAcquireRwLockExclusive((unsigned __int64 *)&xmmword_140F0BE90);
  v16 = dword_140F0BCE4;
  if ( dword_140F0BCE4 == -1 )
    v16 = 0;
  LODWORD(ExplicitScopea) = DWORD1(xmmword_140F0BCC0);
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
    (unsigned int)xmmword_140F0BCC0,
    ExplicitScopea,
    DWORD2(xmmword_140F0BCC0),
    HIDWORD(xmmword_140F0BCC0),
    v16);
  xmmword_140F0BEA0 = 0LL;
  BYTE7(xmmword_140F0BEA0) = dword_140F0BD0C;
  *(_QWORD *)&xmmword_140F0BEC0 = -1LL;
  xmmword_140F0BEB0 = 0LL;
  *((_QWORD *)&xmmword_140F0BEC0 + 1) = -1LL;
  *(_QWORD *)&xmmword_140F0BED0 = -1LL;
  DWORD2(xmmword_140F0BED0) = -1;
  LOBYTE(xmmword_140F0BEA0) = xmmword_140F0BCC0 & 1;
  if ( dword_140F0BC94 )
  {
    BYTE1(xmmword_140F0BEA0) = 1;
    BYTE2(xmmword_140F0BEA0) = (xmmword_140F0BCC0 & 4) != 0;
    DWORD2(xmmword_140F0BEA0) = HIDWORD(qword_140F0BCF4);
    HIDWORD(xmmword_140F0BEA0) = DWORD1(xmmword_140F0BCC0);
    LODWORD(xmmword_140F0BEB0) = HIDWORD(xmmword_140F0BCC0);
    DWORD1(xmmword_140F0BEB0) = dword_140F0BCE4;
    *((_QWORD *)&xmmword_140F0BEB0 + 1) = unk_140F0BCFC;
    BYTE3(xmmword_140F0BEA0) = byte_140F0BE60 != 0 || (xmmword_140F0BCC0 & 2) != 0;
    if ( (unsigned int)Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline() )
    {
      xmmword_140F0BEC0 = xmmword_140F0BCD4;
      dword_140F0BEE0 = DWORD2(xmmword_140F0BCC0);
      HIDWORD(xmmword_140F0BED0) = a3;
    }
  }
  if ( (unsigned int)Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( qword_140F0BF30 && *(_DWORD *)(qword_140F0BF30 + 128) == 1 )
    {
      *(_QWORD *)&xmmword_140F0BED0 = *(_QWORD *)(qword_140F0BF30 + 184);
      DWORD2(xmmword_140F0BED0) = *(_DWORD *)(qword_140F0BF30 + 192);
    }
    PopCheckCachedPowerSourceStateUpdates();
  }
  PopAccountCbEnergyChange();
  if ( (unsigned int)Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline() )
    PopBatteryTraceSystemBatteryStatusV1(0);
  else
    PopBatteryTraceSystemBatteryStatus(0);
  PopReleaseRwLock((signed __int64 *)&xmmword_140F0BE90);
  if ( HIDWORD(qword_140F0BCF4) )
    PopRecalculateCBTriggerLevels();
  if ( qword_140F0BCF4
    && (unsigned __int8)PopBatteryCheckTriggerAllBatteries(&unk_140F0BDE0, 1LL)
    && (dword_140F0BDE4[0] & 2) == 0 )
  {
    PopGetPolicyWorker(64);
    PopCheckForWork();
  }
  PopAcquirePolicyLock(v18, v17);
  v41 = 0;
  v19 = 0;
  LODWORD(v20) = 0;
  v21 = 0;
  v22 = dword_140F0BC94 != 0 ? 3 : 0;
  do
  {
    v23 = v21;
    v24 = (char *)&unk_140F0BDE0 + 32 * (unsigned int)v20;
    v25 = &dword_140F0BDE4[8 * v21];
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
        if ( dword_140F0BDE4[v28 / 4] == 128 )
        {
          PopDiagTraceBatteryTriggerMet((__int64)&unk_140F0BDE0 + v28, (__int64)PopPolicy + 24 * v41 + 96, (int *)&v41);
          v19 = v41;
        }
      }
      if ( !byte_140F0BDD8 )
        PopExecutePowerAction(
          (_DWORD *)&unk_140F0BDE0 + 8 * v19,
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
  if ( dword_140F0BD10 != v22 )
  {
    Buffer = v22;
    ZwUpdateWnfStateData(&WNF_PO_BATTERY_CHARGE_LEVEL, &Buffer, 4u, 0LL, 0LL, 0, 0);
    v31 = dword_140E07680;
    if ( (unsigned int)dword_140E07680 > 5 )
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
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07680, (unsigned __int8 *)byte_14004D253, 0LL, 0LL, 4u, v44);
      v31 = dword_140E07680;
    }
    if ( (unsigned int)(v22 - 1) <= 1 != (unsigned int)(dword_140F0BD10 - 1) <= 1
      && v31 > 5
      && tlgKeywordOn((__int64)&dword_140E07680, 0x400000000000LL) )
    {
      v42 = v34;
      v45[1] = 4LL;
      v45[0] = &v42;
      v41 = v22;
      v46 = (int *)&v41;
      v47 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E07680,
        (unsigned __int8 *)&byte_14004D297,
        0LL,
        0LL,
        4u,
        v44);
    }
    dword_140F0BD10 = v22;
    PopRecordBatteryLevel(v22);
  }
  if ( v40 )
    PopTracePowerReconfig();
  PopReleasePolicyLock(v20, v27, v28, v29, ExplicitScopeb);
  LOBYTE(v35) = v40;
  PopEsQueueStateEvaluation(v35);
  return v40;
}
