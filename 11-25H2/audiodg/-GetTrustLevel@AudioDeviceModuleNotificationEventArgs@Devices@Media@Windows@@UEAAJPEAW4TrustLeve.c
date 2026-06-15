/*
 * XREFs of ?GetTrustLevel@AudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@UEAAJPEAW4TrustLevel@@@Z @ 0x14007C000
 * Callers:
 *     ?GetTrustLevel@SendCommandAsyncOperation@Devices@Media@Windows@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x14007C010 (-GetTrustLevel@SendCommandAsyncOperation@Devices@Media@Windows@@WBA@EAAJPEAW4TrustLevel@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs::GetTrustLevel(
        Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *this,
        enum TrustLevel *a2)
{
  *a2 = BaseTrust;
  return 0LL;
}
