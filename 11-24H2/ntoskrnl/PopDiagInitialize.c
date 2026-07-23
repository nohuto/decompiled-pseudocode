/*
 * XREFs of PopDiagInitialize @ 0x140C30FC0
 * Callers:
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x1402AE968 (PopAcquireRwLockShared.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140419080 (KiQueryUnbiasedInterruptTime.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x1405D2E64 (PopDiagTraceThermalZoneEnumeration.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopDiagSleepStudyInitialize @ 0x140753574 (PopDiagSleepStudyInitialize.c)
 *     PdcTaskClientRegister @ 0x14078DDCC (PdcTaskClientRegister.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1409EA0B8 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     EtwRegister @ 0x1409EA180 (EtwRegister.c)
 *     PopTransitionTelemetryOsState @ 0x140A80E74 (PopTransitionTelemetryOsState.c)
 *     EtwSetInformation @ 0x140AD9290 (EtwSetInformation.c)
 */

__int64 PopDiagInitialize()
{
  unsigned __int64 *i; // rbx
  __int64 UnbiasedInterruptTime; // rax
  char v2; // cl
  int v4; // [rsp+38h] [rbp-39h] BYREF
  int v5; // [rsp+3Ch] [rbp-35h] BYREF
  int v6; // [rsp+40h] [rbp-31h] BYREF
  __int64 v7; // [rsp+48h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+58h] [rbp-19h] BYREF
  int *v9; // [rsp+78h] [rbp+7h]
  __int64 v10; // [rsp+80h] [rbp+Fh]
  int *v11; // [rsp+88h] [rbp+17h]
  __int64 v12; // [rsp+90h] [rbp+1Fh]
  int *v13; // [rsp+98h] [rbp+27h]
  __int64 v14; // [rsp+A0h] [rbp+2Fh]
  __int64 *v15; // [rsp+A8h] [rbp+37h]
  __int64 v16; // [rsp+B0h] [rbp+3Fh]

  if ( EtwRegister(&POP_ETW_PROVIDER, (PETWENABLECALLBACK)PopDiagTraceControlCallback, &PopDiagHandle, &PopDiagHandle) >= 0 )
  {
    PopDiagHandleRegistered = 1;
    EtwSetInformation(
      PopDiagHandle,
      EventProviderSetTraits,
      &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
      (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
  }
  PopDiagDeviceRundownWorkItem.Parameter = 0LL;
  PopDiagDeviceRundownWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopDiagDeviceRundownWorker;
  PopDiagDeviceRundownWorkItem.List.Flink = 0LL;
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
    (__int64)&dword_140E07680,
    (__int64)PopDiagTraceControlCallback,
    (__int64)&dword_140E07680);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E07728, 0LL, 0LL);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E076B8, 0LL, 0LL);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E076F0, 0LL, 0LL);
  if ( EtwRegister(&POP_TRIGGER_ETW_PROVIDER, 0LL, 0LL, &PopTriggerDiagHandle) >= 0 )
    PopTriggerDiagHandleRegistered = 1;
  if ( PopTriggerDiagHandleRegistered )
  {
    PopAcquireRwLockShared(&PopPolicyDeviceLock);
    for ( i = (unsigned __int64 *)PopThermal; i != (unsigned __int64 *)&PopThermal; i = (unsigned __int64 *)*i )
    {
      PopAcquireRwLockExclusive(i + 54);
      if ( (*((_BYTE *)i + 65) & 0x12) == 2 )
        PopDiagTraceThermalZoneEnumeration((__int64)i);
      PopReleaseRwLock((signed __int64 *)i + 54);
    }
    PopReleaseRwLock(&PopPolicyDeviceLock);
  }
  PopDiagSleepStudyInitialize();
  if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E08370, 0LL, 0LL) >= 0 )
    PotsPowerTransitionsHandleRegistered = 1;
  qword_140F0A988 = 0LL;
  PopTelemetryOsState = 0LL;
  qword_140F0A998 = MEMORY[0xFFFFF78000000014];
  qword_140F0A9A0 = MEMORY[0xFFFFF78000000008];
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  byte_140F0A9CC = v2;
  qword_140F0A9A8 = UnbiasedInterruptTime;
  PopTransitionTelemetryOsState(1, 1);
  PdcTaskClientRegister(68LL, &PopSleepStudyTaskClientActivator);
  if ( (unsigned int)dword_140E07680 > 5 && tlgKeywordOn((__int64)&dword_140E07680, 0x400000000000LL) )
  {
    v4 = 0;
    v9 = &v4;
    v10 = 4LL;
    v11 = &v5;
    v5 = 0;
    v13 = &v6;
    v12 = 4LL;
    v15 = &v7;
    v6 = 0;
    v14 = 4LL;
    v7 = 0x1000000LL;
    v16 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07680, (unsigned __int8 *)byte_14004B885, 0LL, 0LL, 6u, &v8);
  }
  return 0LL;
}
