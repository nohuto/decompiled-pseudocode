/*
 * XREFs of PopBatteryEtwCallback @ 0x140759470
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x1402AE968 (PopAcquireRwLockShared.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x14049319C (PopBatteryTraceSystemBatteryStatus.c)
 *     Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline @ 0x1404F6FAC (Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline.c)
 *     PopBatteryTraceSystemBatteryStatusV1 @ 0x1404F8784 (PopBatteryTraceSystemBatteryStatusV1.c)
 */

void __fastcall PopBatteryEtwCallback(LPCGUID SourceId, ULONG ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  if ( ControlCode == 2 )
  {
    PopAcquireRwLockShared((volatile signed __int64 *)&xmmword_140F0BE90);
    if ( (unsigned int)Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline() )
      PopBatteryTraceSystemBatteryStatusV1(1);
    else
      PopBatteryTraceSystemBatteryStatus(1);
    PopReleaseRwLock((signed __int64 *)&xmmword_140F0BE90);
  }
}
