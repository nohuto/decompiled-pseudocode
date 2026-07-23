/*
 * XREFs of PopPowerAggregatorInitialize @ 0x140C6A210
 * Callers:
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     PopPowerRequestCreateCommon @ 0x1402BAAB0 (PopPowerRequestCreateCommon.c)
 *     PoDestroyReasonContext @ 0x1402BC528 (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x1402BC6B8 (PoCaptureReasonContext.c)
 *     KiInitializeTimer2 @ 0x1403AE058 (KiInitializeTimer2.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     KeInitializeIRTimer @ 0x1404BD12C (KeInitializeIRTimer.c)
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PoRegisterPowerSettingCallback @ 0x140A646B0 (PoRegisterPowerSettingCallback.c)
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
  int Buffer; // [rsp+B8h] [rbp+40h] BYREF
  int v12; // [rsp+C0h] [rbp+48h] BYREF
  PVOID P; // [rsp+C8h] [rbp+50h] BYREF

  P = 0LL;
  if ( !a1 )
  {
    qword_140F08C48 = 0LL;
    PopPowerAggregatorLock = 0LL;
    PopPowerAggregatorUmpoInitialized = 0;
    memset_0(&PopPowerAggregatorContext, 0, 0x15F8uLL);
    DWORD2(xmmword_140F08C70) = 1;
    qword_140F0A240 = (__int64)PopPowerAggregatorWorker;
    LODWORD(xmmword_140F08C98) = 0;
    stru_140F08CC0.WorkerRoutine = (void (__fastcall *)(void *))PopPowerAggregatorSessionSwitchWorker;
    qword_140F0A248 = 0LL;
    qword_140F0A230 = 0LL;
    stru_140F08CC0.Parameter = 0LL;
    stru_140F08CC0.List.Flink = 0LL;
    word_140F08CE2 = 0;
    KiInitializeTimer2((unsigned __int64)&unk_140F08CE0, (__int64)PopPowerAggregatorSessionSwitchTimerCallback, 0LL, 8);
    word_140F08D68 = 0;
    qword_140F08D78 = (__int64)&qword_140F08D70;
    qword_140F08D70 = (__int64)&qword_140F08D70;
    v1 = (char *)&unk_140F08E49;
    byte_140F08D6A = 6;
    v2 = 0LL;
    dword_140F08D6C = 0;
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
      Buffer = 1;
      ZwUpdateWnfStateData(&WNF_PO_BLUETOOTH_STANDBY_POLICY, &Buffer, 4u, 0LL, 0LL, 0, 0);
      v12 = 1;
      ZwUpdateWnfStateData(&WNF_PO_STANDBY_AUDIO_POLICY, &v12, 4u, 0LL, 0LL, 0, 0);
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
