/*
 * XREFs of ACPIThermalRereadTemperature @ 0x140037874
 * Callers:
 *     AcpiDiagThermalPollingTimerRoutine @ 0x140036F50 (AcpiDiagThermalPollingTimerRoutine.c)
 * Callees:
 *     WPP_RECORDER_SF_qssdddd @ 0x140036760 (WPP_RECORDER_SF_qssdddd.c)
 *     ACPIThermalLoop @ 0x1400379FC (ACPIThermalLoop.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 */

__int64 __fastcall ACPIThermalRereadTemperature(__int64 a1)
{
  int v3; // [rsp+20h] [rbp-68h]
  union _LARGE_INTEGER v4; // [rsp+60h] [rbp-28h] BYREF
  struct _TIME_FIELDS v5; // [rsp+68h] [rbp-20h] BYREF

  v5 = 0LL;
  v4.QuadPart = MEMORY[0xFFFFF78000000008];
  RtlTimeToTimeFields(&v4, &v5);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qssdddd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (unsigned int)v5.Second,
      (unsigned int)v5.Minute,
      (unsigned int)v5.Hour,
      v3);
  return ACPIThermalLoop(a1, 536870914LL);
}
