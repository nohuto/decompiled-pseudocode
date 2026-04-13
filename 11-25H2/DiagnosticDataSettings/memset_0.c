/*
 * XREFs of memset_0 @ 0x180001F2A
 * Callers:
 *     __scrt_fastfail @ 0x180001918 (__scrt_fastfail.c)
 *     ??$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1800025F8 (--$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureO.c)
 *     ??$ReportFailure_Return@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1800028A8 (--$ReportFailure_Return@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureO.c)
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x1800029F8 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180003798 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     TelGetRegionalSettingsValue @ 0x180003FD0 (TelGetRegionalSettingsValue.c)
 *     TelIsOsInProcessorMode @ 0x1800044C0 (TelIsOsInProcessorMode.c)
 *     TelpReadOfflineSoftwareRegistryDword @ 0x180004E38 (TelpReadOfflineSoftwareRegistryDword.c)
 *     TelpReadOfflineSoftwareRegistryString @ 0x180004FF4 (TelpReadOfflineSoftwareRegistryString.c)
 *     TelpReadUsersPolicySetting @ 0x1800051AC (TelpReadUsersPolicySetting.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset_0(void *a1, int Val, size_t Size)
{
  return memset(a1, Val, Size);
}
