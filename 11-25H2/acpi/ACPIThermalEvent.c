/*
 * XREFs of ACPIThermalEvent @ 0x1400370A0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_Dqssdddd @ 0x1400369E0 (WPP_RECORDER_SF_Dqssdddd.c)
 *     ACPIThermalLoop @ 0x1400379FC (ACPIThermalLoop.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 */

__int64 __fastcall ACPIThermalEvent(ULONG_PTR a1, int a2)
{
  unsigned int v3; // esi
  __int64 DeviceExtension; // rdi
  int v5; // ebx
  int v7; // [rsp+20h] [rbp-88h]
  union _LARGE_INTEGER Time; // [rsp+70h] [rbp-38h] BYREF
  struct _TIME_FIELDS TimeFields; // [rsp+78h] [rbp-30h] BYREF

  TimeFields = 0LL;
  v3 = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  Time.QuadPart = MEMORY[0xFFFFF78000000008];
  RtlTimeToTimeFields(&Time, &TimeFields);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Dqssdddd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (unsigned int)TimeFields.Minute,
      (unsigned int)TimeFields.Hour,
      0x11u,
      v7);
  v5 = a2 - 128;
  if ( v5 )
  {
    if ( v5 == 1 )
      v3 = 536871046;
  }
  else
  {
    v3 = 536870978;
  }
  return ACPIThermalLoop(DeviceExtension, v3);
}
