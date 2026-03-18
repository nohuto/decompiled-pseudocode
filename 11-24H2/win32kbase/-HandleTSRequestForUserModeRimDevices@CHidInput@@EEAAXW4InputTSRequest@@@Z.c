/*
 * XREFs of ?HandleTSRequestForUserModeRimDevices@CHidInput@@EEAAXW4InputTSRequest@@@Z @ 0x14020F320
 * Callers:
 *     <none>
 * Callees:
 *     RIMDirectPnpRemoveUserModeRimDevices @ 0x14011D660 (RIMDirectPnpRemoveUserModeRimDevices.c)
 *     RIMDirectStopUserModeRimDeviceClassNotifications @ 0x14011D7AC (RIMDirectStopUserModeRimDeviceClassNotifications.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMDirectStartUserModeRimDeviceClassNotifications @ 0x1401D6E40 (RIMDirectStartUserModeRimDeviceClassNotifications.c)
 */

void __fastcall CHidInput::HandleTSRequestForUserModeRimDevices(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx

  if ( a2 )
  {
    v2 = a2 - 1;
    if ( v2 )
    {
      v3 = v2 - 1;
      if ( v3 )
      {
        if ( v3 == 1 )
          RIMDirectStopUserModeRimDeviceClassNotifications();
        else
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1002);
      }
      else
      {
        RIMDirectStartUserModeRimDeviceClassNotifications();
      }
    }
    else
    {
      RIMDirectPnpRemoveUserModeRimDevices();
    }
  }
}
