/*
 * XREFs of ?HandleTSRequestForUserModeRimDevices@CHidInput@@EEAAXW4InputTSRequest@@@Z @ 0x1C00BA9A0
 * Callers:
 *     <none>
 * Callees:
 *     RIMDirectStopUserModeRimDeviceClassNotifications @ 0x1C00BA9DC (RIMDirectStopUserModeRimDeviceClassNotifications.c)
 *     RIMDirectPnpRemoveUserModeRimDevices @ 0x1C00BAADC (RIMDirectPnpRemoveUserModeRimDevices.c)
 *     RIMDirectStartUserModeRimDeviceClassNotifications @ 0x1C00CC07C (RIMDirectStartUserModeRimDeviceClassNotifications.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CHidInput::HandleTSRequestForUserModeRimDevices(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  __int64 result; // rax

  if ( a2 )
  {
    v2 = a2 - 1;
    if ( v2 )
    {
      v3 = v2 - 1;
      if ( v3 )
      {
        if ( v3 == 1 )
          return RIMDirectStopUserModeRimDeviceClassNotifications();
        else
          return MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 967LL);
      }
      else
      {
        return RIMDirectStartUserModeRimDeviceClassNotifications();
      }
    }
    else
    {
      return RIMDirectPnpRemoveUserModeRimDevices();
    }
  }
  return result;
}
