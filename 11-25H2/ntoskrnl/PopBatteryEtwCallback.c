/*
 * XREFs of PopBatteryEtwCallback @ 0x140AC2670
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockShared @ 0x140204514 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x140498BCC (PopBatteryTraceSystemBatteryStatus.c)
 *     Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline @ 0x1405C86A4 (Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline.c)
 *     PopBatteryTraceSystemBatteryStatusV1 @ 0x1405D318C (PopBatteryTraceSystemBatteryStatusV1.c)
 */

void __fastcall PopBatteryEtwCallback(LPCGUID SourceId, ULONG ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  if ( ControlCode == 2 )
  {
    PopAcquireRwLockShared((volatile signed __int64 *)&xmmword_140F0ACB0);
    if ( (unsigned int)Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline() )
      PopBatteryTraceSystemBatteryStatusV1(1);
    else
      PopBatteryTraceSystemBatteryStatus(1);
    PopReleaseRwLock((signed __int64 *)&xmmword_140F0ACB0);
  }
}
