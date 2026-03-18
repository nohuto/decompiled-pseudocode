/*
 * XREFs of PopBatteryEtwCallback @ 0x14075AD80
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockShared @ 0x1403B5E64 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x14049883C (PopBatteryTraceSystemBatteryStatus.c)
 *     Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline @ 0x1404F96CC (Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline.c)
 *     PopBatteryTraceSystemBatteryStatusV1 @ 0x1404FAEA4 (PopBatteryTraceSystemBatteryStatusV1.c)
 */

void __fastcall PopBatteryEtwCallback(LPCGUID SourceId, ULONG ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  if ( ControlCode == 2 )
  {
    PopAcquireRwLockShared((volatile signed __int64 *)&xmmword_140F0B050);
    if ( (unsigned int)Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline() )
      PopBatteryTraceSystemBatteryStatusV1(1);
    else
      PopBatteryTraceSystemBatteryStatus(1);
    PopReleaseRwLock((signed __int64 *)&xmmword_140F0B050);
  }
}
