/*
 * XREFs of CiNdisCleanupThrottle @ 0x14000DB90
 * Callers:
 *     CsTerminate @ 0x14000D470 (CsTerminate.c)
 * Callees:
 *     Feature_3448537402__private_IsEnabledDeviceUsageNoInline @ 0x140004E58 (Feature_3448537402__private_IsEnabledDeviceUsageNoInline.c)
 *     CiSystemAcquirePushLock @ 0x14000F6C0 (CiSystemAcquirePushLock.c)
 */

__int64 CiNdisCleanupThrottle()
{
  char v1; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  Feature_3448537402__private_IsEnabledDeviceUsageNoInline();
  if ( CiNdisThrottleWorkItem )
  {
    if ( (unsigned int)Feature_3448537402__private_IsEnabledDeviceUsageNoInline() )
    {
      CiSystemAcquirePushLock(&WPP_MAIN_CB.Queue);
      WPP_MAIN_CB.Queue.ListEntry.Blink = 0LL;
      v1 = CiNdisThrottleInProgress;
      ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.Queue, 0LL);
      if ( v1 )
      {
        ExBlockOnAddressPushLock(&CiNdisThrottleInProgressPushLock, &CiNdisThrottleInProgress, &v1, 1LL, 0LL);
        CiSystemAcquirePushLock(&WPP_MAIN_CB.Queue);
        WPP_MAIN_CB.Queue.ListEntry.Blink = 0LL;
        ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.Queue, 0LL);
      }
    }
    IoFreeWorkItem(CiNdisThrottleWorkItem);
    if ( (unsigned int)Feature_3448537402__private_IsEnabledDeviceUsageNoInline() )
      CiNdisThrottleWorkItem = 0LL;
    if ( CiNdisDeviceHandle )
    {
      ZwClose(CiNdisDeviceHandle);
      if ( (unsigned int)Feature_3448537402__private_IsEnabledDeviceUsageNoInline() )
        CiNdisDeviceHandle = 0LL;
    }
  }
  return Feature_3448537402__private_IsEnabledDeviceUsageNoInline();
}
