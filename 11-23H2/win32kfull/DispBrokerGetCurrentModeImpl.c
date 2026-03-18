/*
 * XREFs of DispBrokerGetCurrentModeImpl @ 0x1C009E460
 * Callers:
 *     <none>
 * Callees:
 *     Feature_DesktopDisplayBroker__private_ReportDeviceUsage @ 0x1C013AF48 (Feature_DesktopDisplayBroker__private_ReportDeviceUsage.c)
 */

__int64 DispBrokerGetCurrentModeImpl()
{
  Feature_DesktopDisplayBroker__private_ReportDeviceUsage();
  if ( (unsigned int)UserIsConsoleConnection() )
    return 0LL;
  else
    return (unsigned int)UserRemoteConnectedSessionUsingWddm() != 0 ? 3 : 0;
}
