/*
 * XREFs of ?Provider@CloudPCTelemetryCore@@SAPEBU_tlgProvider_t@@XZ @ 0x1806417E8
 * Callers:
 *     ??$AccessPhysicalDeviceTriggered@PEBG@CloudPCTelemetryCore@@SAX$$QEAPEBG@Z @ 0x18063C38C (--$AccessPhysicalDeviceTriggered@PEBG@CloudPCTelemetryCore@@SAX$$QEAPEBG@Z.c)
 *     ??$CPCComponentInitForBoot@AEAY0BAE@G@CloudPCTelemetryCore@@SAXAEAY0BAE@G@Z @ 0x18063C3FC (--$CPCComponentInitForBoot@AEAY0BAE@G@CloudPCTelemetryCore@@SAXAEAY0BAE@G@Z.c)
 *     ??$LogonTasksCompleted@PEBG@CloudPCTelemetryCore@@SAX$$QEAPEBG@Z @ 0x18063C628 (--$LogonTasksCompleted@PEBG@CloudPCTelemetryCore@@SAX$$QEAPEBG@Z.c)
 *     ??$PhysicalDeviceAccessed@AEAY0BAE@G@CloudPCTelemetryCore@@SAXAEAY0BAE@G@Z @ 0x18063C730 (--$PhysicalDeviceAccessed@AEAY0BAE@G@CloudPCTelemetryCore@@SAXAEAY0BAE@G@Z.c)
 *     ??$SubscribedToLogonCompleteEvent@PEBG@CloudPCTelemetryCore@@SAX$$QEAPEBG@Z @ 0x18063C798 (--$SubscribedToLogonCompleteEvent@PEBG@CloudPCTelemetryCore@@SAX$$QEAPEBG@Z.c)
 *     ??$LocalActionTriggered@AEAIIAEAY0BAE@G@CloudPCTelemetryCore@@SAXAEAI$$QEAIAEAY0BAE@G@Z @ 0x18064455C (--$LocalActionTriggered@AEAIIAEAY0BAE@G@CloudPCTelemetryCore@@SAXAEAI$$QEAIAEAY0BAE@G@Z.c)
 *     ??$RemoteDesktopProcessRegistered@AEAIIPEBGPEBG@CloudPCTelemetryCore@@SAXAEAI$$QEAI$$QEAPEBG2@Z @ 0x180644608 (--$RemoteDesktopProcessRegistered@AEAIIPEBGPEBG@CloudPCTelemetryCore@@SAXAEAI$$QEAI$$QEAPEBG2@Z.c)
 *     ??$CPCDisconnectingStatus@AEAY07$$CBG@CloudPCTelemetryCore@@SAXAEAY07$$CBG@Z @ 0x180656338 (--$CPCDisconnectingStatus@AEAY07$$CBG@CloudPCTelemetryCore@@SAXAEAY07$$CBG@Z.c)
 *     ??$CPCDisconnectingStatus@AEAY09$$CBG@CloudPCTelemetryCore@@SAXAEAY09$$CBG@Z @ 0x1806563A8 (--$CPCDisconnectingStatus@AEAY09$$CBG@CloudPCTelemetryCore@@SAXAEAY09$$CBG@Z.c)
 *     ??$CPCProviderAppClose@IHPEBGPEBGAEA_NAEAW4SourceOfDisconnect@CloudPCTelemetryCore@@@CloudPCTelemetryCore@@SAX$$QEAI$$QEAH$$QEAPEBG2AEA_NAEAW4SourceOfDisconnect@0@@Z @ 0x180656418 (--$CPCProviderAppClose@IHPEBGPEBGAEA_NAEAW4SourceOfDisconnect@CloudPCTelemetryCore@@@CloudPCTele.c)
 *     ??$CPCProviderAppClose@IIAEAY0BAE@GPEBG_NW4SourceOfDisconnect@CloudPCTelemetryCore@@@CloudPCTelemetryCore@@SAX$$QEAI0AEAY0BAE@G$$QEAPEBG$$QEA_N$$QEAW4SourceOfDisconnect@0@@Z @ 0x180656514 (--$CPCProviderAppClose@IIAEAY0BAE@GPEBG_NW4SourceOfDisconnect@CloudPCTelemetryCore@@@CloudPCTele.c)
 *     ??$W365Crash@AEAY0BAE@G@CloudPCTelemetryCore@@SAXAEAY0BAE@G@Z @ 0x180656800 (--$W365Crash@AEAY0BAE@G@CloudPCTelemetryCore@@SAXAEAY0BAE@G@Z.c)
 *     ??$CPCProviderAppLaunchResult@IHPEBGPEBG_N_N@CloudPCTelemetryCore@@SAX$$QEAI$$QEAH$$QEAPEBG2$$QEA_N3@Z @ 0x1806709DC (--$CPCProviderAppLaunchResult@IHPEBGPEBG_N_N@CloudPCTelemetryCore@@SAX$$QEAI$$QEAH$$QEAPEBG2$$QE.c)
 *     ??$CPCProviderAppLaunchResult@IIAEAY0BAE@GPEBG_N_N@CloudPCTelemetryCore@@SAX$$QEAI0AEAY0BAE@G$$QEAPEBG$$QEA_N3@Z @ 0x180670AD8 (--$CPCProviderAppLaunchResult@IIAEAY0BAE@GPEBG_N_N@CloudPCTelemetryCore@@SAX$$QEAI0AEAY0BAE@G$$Q.c)
 *     ??$CPCStateChanged@AEBIAEBIAEAPEBGPEBGPEBGPEBGAEAI@CloudPCTelemetryCore@@SAXAEBI0AEAPEBG$$QEAPEBG22AEAI@Z @ 0x180671078 (--$CPCStateChanged@AEBIAEBIAEAPEBGPEBGPEBGPEBGAEAI@CloudPCTelemetryCore@@SAXAEBI0AEAPEBG$$QEAPEB.c)
 * Callees:
 *     ?get@?$static_lazy@VCloudPCTelemetryCore@@@details@wil@@QEAAPEAVCloudPCTelemetryCore@@P6AXXZ@Z @ 0x1806431D4 (-get@-$static_lazy@VCloudPCTelemetryCore@@@details@wil@@QEAAPEAVCloudPCTelemetryCore@@P6AXXZ@Z.c)
 */

const struct _tlgProvider_t *__fastcall CloudPCTelemetryCore::Provider(__int64 a1)
{
  return *(const struct _tlgProvider_t **)(wil::details::static_lazy<CloudPCTelemetryCore>::get(
                                             a1,
                                             _lambda_ea63a974ef55fc5057a8ed9c75a53795_::_lambda_invoker_cdecl_)
                                         + 8);
}
