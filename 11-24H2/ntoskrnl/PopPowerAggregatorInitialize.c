/*
 * XREFs of PopPowerAggregatorInitialize @ 0x140C6809C
 * Callers:
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     PopPowerRequestCreateCommon @ 0x1403313A8 (PopPowerRequestCreateCommon.c)
 *     PoDestroyReasonContext @ 0x140331BA4 (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x140331D38 (PoCaptureReasonContext.c)
 *     KiInitializeTimer2 @ 0x1403BF498 (KiInitializeTimer2.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     KeInitializeIRTimer @ 0x1404C1B3C (KeInitializeIRTimer.c)
 *     Feature_Servicing_LidCloseDisplayOff__private_IsEnabledDeviceUsageNoInline @ 0x1405D78D0 (Feature_Servicing_LidCloseDisplayOff__private_IsEnabledDeviceUsageNoInline.c)
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PoRegisterPowerSettingCallback @ 0x140A6B150 (PoRegisterPowerSettingCallback.c)
 */

__int64 __fastcall PopPowerAggregatorInitialize(int a1)
{
  char *v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rsi
  _QWORD *v4; // rax
  int Common; // ebx
  _DWORD v7[2]; // [rsp+40h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-30h] BYREF
  __int128 v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+B0h] [rbp+38h] BYREF
  int v11; // [rsp+B8h] [rbp+40h] BYREF
  int v12; // [rsp+C0h] [rbp+48h] BYREF
  PVOID P; // [rsp+C8h] [rbp+50h] BYREF

  P = 0LL;
  if ( !a1 )
  {
    qword_140F088E8 = 0LL;
    PopPowerAggregatorLock = 0LL;
    PopPowerAggregatorUmpoInitialized = 0;
    memset_0(&PopPowerAggregatorContext, 0, 0x15F8uLL);
    DWORD2(xmmword_140F08910) = 1;
    qword_140F09EE0 = (__int64)PopPowerAggregatorWorker;
    LODWORD(xmmword_140F08938) = 0;
    stru_140F08960.WorkerRoutine = (void (__fastcall *)(void *))PopPowerAggregatorSessionSwitchWorker;
    qword_140F09EE8 = 0LL;
    qword_140F09ED0 = 0LL;
    stru_140F08960.Parameter = 0LL;
    stru_140F08960.List.Flink = 0LL;
    word_140F08982 = 0;
    KiInitializeTimer2((unsigned __int64)&unk_140F08980, (__int64)PopPowerAggregatorSessionSwitchTimerCallback, 0LL, 8);
    word_140F08A08 = 0;
    qword_140F08A18 = (__int64)&qword_140F08A10;
    qword_140F08A10 = (__int64)&qword_140F08A10;
    v1 = (char *)&unk_140F08AE9;
    byte_140F08A0A = 6;
    v2 = 0LL;
    dword_140F08A0C = 0;
    v3 = 2LL;
    v10 = 131080;
    do
    {
      KeInitializeIRTimer(
        (unsigned __int64)(v1 - 145),
        (__int64)PopPowerAggregatorDozeTimerCallback,
        v2,
        (unsigned __int16 *)&v10,
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
      v11 = 1;
      ZwUpdateWnfStateData((__int64)&WNF_PO_BLUETOOTH_STANDBY_POLICY, (__int64)&v11);
      v12 = 1;
      ZwUpdateWnfStateData((__int64)&WNF_PO_STANDBY_AUDIO_POLICY, (__int64)&v12);
    }
    return 0;
  }
  v7[1] = 1;
  v7[0] = 0;
  DestinationString = 0LL;
  v9 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Sleep Idle State Disabled");
  Common = PoCaptureReasonContext((__int128 *)v7, 0LL, 0LL, 1, 0LL, &P);
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
      PoDestroyReasonContext(P);
    }
  }
  return (unsigned int)Common;
}
