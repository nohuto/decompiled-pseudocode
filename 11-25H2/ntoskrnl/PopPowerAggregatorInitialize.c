/*
 * XREFs of PopPowerAggregatorInitialize @ 0x140C5611C
 * Callers:
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x14036F318 (KiInitializeTimer2.c)
 *     PoCaptureReasonContext @ 0x140425AF8 (PoCaptureReasonContext.c)
 *     PopPowerRequestCreateCommon @ 0x140425C44 (PopPowerRequestCreateCommon.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     KeInitializeIRTimer @ 0x1404C4448 (KeInitializeIRTimer.c)
 *     PoDestroyReasonContext @ 0x1404E90C0 (PoDestroyReasonContext.c)
 *     Feature_Servicing_LidCloseDisplayOff__private_IsEnabledDeviceUsageNoInline @ 0x1405D2DB0 (Feature_Servicing_LidCloseDisplayOff__private_IsEnabledDeviceUsageNoInline.c)
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PoRegisterPowerSettingCallback @ 0x140A686B0 (PoRegisterPowerSettingCallback.c)
 */

__int64 __fastcall PopPowerAggregatorInitialize(int a1)
{
  char *v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rsi
  _QWORD *v4; // rax
  int Common; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _DWORD v10[2]; // [rsp+40h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-30h] BYREF
  __int128 v12; // [rsp+58h] [rbp-20h]
  int v13; // [rsp+B0h] [rbp+38h] BYREF
  int Buffer; // [rsp+B8h] [rbp+40h] BYREF
  int v15; // [rsp+C0h] [rbp+48h] BYREF
  PVOID P; // [rsp+C8h] [rbp+50h] BYREF

  P = 0LL;
  if ( !a1 )
  {
    qword_140F08268 = 0LL;
    PopPowerAggregatorLock = 0LL;
    PopPowerAggregatorUmpoInitialized = 0;
    memset_0(&PopPowerAggregatorContext, 0, 0x15F8uLL);
    DWORD2(xmmword_140F08290) = 1;
    qword_140F09860 = (__int64)PopPowerAggregatorWorker;
    LODWORD(xmmword_140F082B8) = 0;
    stru_140F082E0.WorkerRoutine = (void (__fastcall *)(void *))PopPowerAggregatorSessionSwitchWorker;
    qword_140F09868 = 0LL;
    qword_140F09850 = 0LL;
    stru_140F082E0.Parameter = 0LL;
    stru_140F082E0.List.Flink = 0LL;
    word_140F08302 = 0;
    KiInitializeTimer2((unsigned __int64)&unk_140F08300, (__int64)PopPowerAggregatorSessionSwitchTimerCallback, 0LL, 8);
    word_140F08388 = 0;
    qword_140F08398 = (__int64)&qword_140F08390;
    qword_140F08390 = (__int64)&qword_140F08390;
    v1 = (char *)&unk_140F08469;
    byte_140F0838A = 6;
    v2 = 0LL;
    dword_140F0838C = 0;
    v3 = 2LL;
    v13 = 131080;
    do
    {
      KeInitializeIRTimer(
        (unsigned __int64)(v1 - 145),
        (__int64)PopPowerAggregatorDozeTimerCallback,
        v2,
        (unsigned __int16 *)&v13,
        2);
      *(_QWORD *)(v1 - 153) = v2;
      *(_QWORD *)(v1 - 161) = PopPowerAggregatorDozeTimerWorker;
      ++v2;
      *(_QWORD *)(v1 - 177) = 0LL;
      v4 = v1 + 7;
      *(_QWORD *)(v1 + 15) = v1 + 7;
      *(_WORD *)(v1 - 1) = 0;
      v1[1] = 6;
      *(_DWORD *)(v1 + 3) = 1;
      v1 += 200;
      *v4 = v4;
      --v3;
    }
    while ( v3 );
    return 0;
  }
  if ( a1 != 1 )
  {
    if ( a1 == 3 )
    {
      Buffer = 1;
      ZwUpdateWnfStateData(&WNF_PO_BLUETOOTH_STANDBY_POLICY, &Buffer, 4u, 0LL, 0LL, 0, 0);
      v15 = 1;
      ZwUpdateWnfStateData(&WNF_PO_STANDBY_AUDIO_POLICY, &v15, 4u, 0LL, 0LL, 0, 0);
    }
    return 0;
  }
  v10[1] = 1;
  v10[0] = 0;
  DestinationString = 0LL;
  v12 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Sleep Idle State Disabled");
  Common = PoCaptureReasonContext((__int64)v10, 0, 0LL, 1, 0LL, (__int64 *)&P);
  if ( Common >= 0 )
  {
    Common = PopPowerRequestCreateCommon(P, 1, &PopPowerAggregatorIdleDisabledPowerRequest);
    if ( Common >= 0 )
    {
      if ( !(unsigned int)Feature_Servicing_LidCloseDisplayOff__private_IsEnabledDeviceUsageNoInline() )
        return 0;
      Common = PoRegisterPowerSettingCallback(
                 0LL,
                 &GUID_LIDCLOSE_ACTION,
                 (PPOWER_SETTING_CALLBACK)PopPowerAggregatorPowerSettingCallback,
                 0LL,
                 0LL);
      if ( Common >= 0 )
        return 0;
    }
    else
    {
      PoDestroyReasonContext(P, v6, v7, v8);
    }
  }
  return (unsigned int)Common;
}
