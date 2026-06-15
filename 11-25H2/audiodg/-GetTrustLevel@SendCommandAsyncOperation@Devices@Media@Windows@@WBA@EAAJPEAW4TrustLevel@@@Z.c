/*
 * XREFs of ?GetTrustLevel@SendCommandAsyncOperation@Devices@Media@Windows@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x14007C010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Media::Devices::SendCommandAsyncOperation::GetTrustLevel(__int64 a1, enum TrustLevel *a2)
{
  return Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs::GetTrustLevel(
           (Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *)(a1 - 16),
           a2);
}
