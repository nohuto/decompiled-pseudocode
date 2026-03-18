/*
 * XREFs of ACPIThermalUpdateTemperature @ 0x140038030
 * Callers:
 *     ACPIThermalTMPCallback @ 0x1400379A0 (ACPIThermalTMPCallback.c)
 *     ACPIThermalReadTemperatureComplete @ 0x140069070 (ACPIThermalReadTemperatureComplete.c)
 *     ACPIThermalReadTemperature @ 0x1400BCDC4 (ACPIThermalReadTemperature.c)
 * Callees:
 *     ACPIThermalLoop @ 0x1400379FC (ACPIThermalLoop.c)
 *     WPP_RECORDER_SF_ddqssdddd @ 0x140039CC0 (WPP_RECORDER_SF_ddqssdddd.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 */

void __fastcall ACPIThermalUpdateTemperature(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v5; // r8
  union _LARGE_INTEGER Time; // [rsp+70h] [rbp-38h] BYREF
  struct _TIME_FIELDS TimeFields; // [rsp+78h] [rbp-30h] BYREF

  v2 = *(_QWORD *)(a1 + 200);
  if ( *(_DWORD *)(v2 + 16) != a2 )
  {
    *(_DWORD *)(v2 + 16) = a2;
    TimeFields = 0LL;
    Time.QuadPart = MEMORY[0xFFFFF78000000008];
    RtlTimeToTimeFields(&Time, &TimeFields);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddqssdddd(WPP_GLOBAL_Control->DeviceExtension, *(_DWORD *)(v2 + 16) / 0xAu, TimeFields.Minute, 19);
    ACPIThermalLoop(a1, 2048LL);
  }
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
  {
    v5 = MEMORY[0xFFFFF78000000008];
    if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + *(_QWORD *)(v2 + 320) < MEMORY[0xFFFFF78000000008]
      && *(_DWORD *)(v2 + 328) != a2 )
    {
      *(_DWORD *)(v2 + 328) = a2;
      *(_QWORD *)(v2 + 320) = v5;
      ACPIThermalLoop(a1, 0x4000LL);
    }
  }
}
