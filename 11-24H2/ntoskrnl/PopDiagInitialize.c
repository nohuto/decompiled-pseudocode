/*
 * XREFs of PopDiagInitialize @ 0x140C2EEA0
 * Callers:
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopAcquireRwLockShared @ 0x1403B5E64 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1404251D0 (KiQueryUnbiasedInterruptTime.c)
 *     _tlgKeywordOn @ 0x140426AF0 (_tlgKeywordOn.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopDiagTraceThermalZoneEnumeration @ 0x1405D5850 (PopDiagTraceThermalZoneEnumeration.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     PopDiagSleepStudyInitialize @ 0x140755254 (PopDiagSleepStudyInitialize.c)
 *     PdcTaskClientRegister @ 0x14078DE9C (PdcTaskClientRegister.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140A57414 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     EtwRegister @ 0x140A574E0 (EtwRegister.c)
 *     PopTransitionTelemetryOsState @ 0x140A86334 (PopTransitionTelemetryOsState.c)
 *     EtwSetInformation @ 0x140AA4AB0 (EtwSetInformation.c)
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
    (__int64)&dword_140E076F0,
    (__int64)PopDiagTraceControlCallback,
    (__int64)&dword_140E076F0);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E07728, 0LL, 0LL);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E076B8, 0LL, 0LL);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E07680, 0LL, 0LL);
  if ( EtwRegister(&POP_TRIGGER_ETW_PROVIDER, 0LL, 0LL, &PopTriggerDiagHandle) >= 0 )
    PopTriggerDiagHandleRegistered = 1;
  if ( PopTriggerDiagHandleRegistered )
  {
    PopAcquireRwLockShared((volatile signed __int64 *)&PopPolicyDeviceLock);
    for ( i = (unsigned __int64 *)PopThermal; i != (unsigned __int64 *)&PopThermal; i = (unsigned __int64 *)*i )
    {
      PopAcquireRwLockExclusive(i + 54);
      if ( (*((_BYTE *)i + 65) & 0x12) == 2 )
        PopDiagTraceThermalZoneEnumeration((__int64)i);
      PopReleaseRwLock((signed __int64 *)i + 54);
    }
    PopReleaseRwLock((signed __int64 *)&PopPolicyDeviceLock);
  }
  PopDiagSleepStudyInitialize();
  if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E08300, 0LL, 0LL) >= 0 )
    PotsPowerTransitionsHandleRegistered = 1;
  qword_140F0A808 = 0LL;
  PopTelemetryOsState = 0LL;
  qword_140F0A818 = MEMORY[0xFFFFF78000000014];
  qword_140F0A820 = MEMORY[0xFFFFF78000000008];
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  byte_140F0A84C = v2;
  qword_140F0A828 = UnbiasedInterruptTime;
  PopTransitionTelemetryOsState(1, 1);
  PdcTaskClientRegister(68LL, &PopSleepStudyTaskClientActivator);
  if ( (unsigned int)dword_140E076F0 > 5 && tlgKeywordOn((__int64)&dword_140E076F0, 0x400000000000LL) )
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
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E076F0, (unsigned __int8 *)&byte_14004ABDF, 0LL, 0LL, 6u, &v8);
  }
  return 0LL;
}
