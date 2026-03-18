/*
 * XREFs of AcpiDiagInitialize @ 0x1400C6398
 * Callers:
 *     DriverEntry @ 0x1400C64B0 (DriverEntry.c)
 * Callees:
 *     AcpiDiagRequeueThermalPollingTimer @ 0x140036FCC (AcpiDiagRequeueThermalPollingTimer.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140098154 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     OSReadRegValue @ 0x1400B6898 (OSReadRegValue.c)
 *     OSOpenHandle @ 0x1400B7118 (OSOpenHandle.c)
 *     OSCloseHandle @ 0x1400BE908 (OSCloseHandle.c)
 */

__int64 AcpiDiagInitialize()
{
  unsigned int v0; // ebx
  int v1; // edi
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF
  void *v4; // [rsp+38h] [rbp+10h] BYREF
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v0 = 0;
  v4 = 0LL;
  KeInitializeTimer2(&WPP_MAIN_CB.Queue.Wcb.DeviceObject, AcpiDiagThermalPollingTimerRoutine, 0LL, 8LL);
  EtwRegister(
    &ACPI_ETW_PROVIDER,
    (PETWENABLECALLBACK)AcpiDiagTraceControlCallback,
    0LL,
    (PREGHANDLE)&WPP_MAIN_CB.Queue.Wcb.DeviceContext);
  EtwRegister(
    &THERMAL_POLLING_ETW_PROVIDER,
    (PETWENABLECALLBACK)AcpiDiagThermalPollingTraceControlCallback,
    0LL,
    (PREGHANDLE)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140086930);
  v1 = OSOpenHandle("\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters", 0LL, (__int64)&v4);
  if ( v1 >= 0 )
  {
    v5 = 0LL;
    v3 = 4;
    v1 = OSReadRegValue("TemperatureTelemetryInterval", v4, &v5, &v3);
    if ( v1 >= 0 && v3 == 4 )
    {
      *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = 10000000 * v5;
      if ( 10000000 * v5 > 0 )
      {
        LOBYTE(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine) = 1;
        AcpiDiagRequeueThermalPollingTimer();
      }
    }
    OSCloseHandle(v4);
  }
  if ( v1 >= 0 )
    return (unsigned int)v1;
  return v0;
}
