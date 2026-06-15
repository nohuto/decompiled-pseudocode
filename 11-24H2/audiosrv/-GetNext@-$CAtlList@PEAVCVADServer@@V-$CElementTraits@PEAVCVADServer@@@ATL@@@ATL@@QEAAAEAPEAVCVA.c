/*
 * XREFs of ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x180053800
 * Callers:
 *     ?DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x180008BD8 (-DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 *     ?HandleDeviceArrivalForExistingMonitors@CMonitorManager@@AEAAXPEBG@Z @ 0x1800097F0 (-HandleDeviceArrivalForExistingMonitors@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?OnPowerStateChanged@CMonitorManager@@QEAAXE@Z @ 0x180009960 (-OnPowerStateChanged@CMonitorManager@@QEAAXE@Z.c)
 *     ?HandleDeviceRemoved@CMonitorManager@@AEAAXPEBG@Z @ 0x18000A78C (-HandleDeviceRemoved@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?OnRuleOperation@DynamicAudioEndpointManager@@AEAAXPEBGW4RuleOperation@@QEAY05_NK@Z @ 0x18006B978 (-OnRuleOperation@DynamicAudioEndpointManager@@AEAAXPEBGW4RuleOperation@@QEAY05_NK@Z.c)
 *     ?Callback@AudioSrvTelemetryProvider@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x180080910 (-Callback@AudioSrvTelemetryProvider@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     ?GetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEA_NPEAPEAUIMMDevice@@@Z @ 0x180089A34 (-GetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000.c)
 *     ?VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY05_N@Z @ 0x18009F5FC (-VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY05_N@Z.c)
 *     _lambda_3512d86930cf5e3297db3d8fbb4f9b41_::operator() @ 0x18010B89C (_lambda_3512d86930cf5e3297db3d8fbb4f9b41_--operator().c)
 *     _lambda_c4f66075b064f94c83b6e478b87a895c_::operator() @ 0x18010BA98 (_lambda_c4f66075b064f94c83b6e478b87a895c_--operator().c)
 *     ?ForEachStream@@YAX$$QEAV?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x18010C1DC (-ForEachStream@@YAX$$QEAV-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z.c)
 *     AudioServerGetAudioStreamHandle @ 0x18010FA20 (AudioServerGetAudioStreamHandle.c)
 *     ?Continue@CMonitorManager@@QEAAXXZ @ 0x180117C50 (-Continue@CMonitorManager@@QEAAXXZ.c)
 *     ?FindMonitor@CMonitorManager@@AEAA?AV?$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z @ 0x18011892C (-FindMonitor@CMonitorManager@@AEAA-AV-$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z.c)
 *     ?OnCheckForMonitorRestart@CMonitorManager@@AEAAXXZ @ 0x18011A978 (-OnCheckForMonitorRestart@CMonitorManager@@AEAAXXZ.c)
 *     ?Pause@CMonitorManager@@QEAAXXZ @ 0x18011AF00 (-Pause@CMonitorManager@@QEAAXXZ.c)
 *     ?RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z @ 0x18011B424 (-RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z.c)
 *     ?FindRule@DynamicAudioEndpointManager@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4RuleType@@PEAV?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@@Z @ 0x180125AA0 (-FindRule@DynamicAudioEndpointManager@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__.c)
 *     ?VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@QEAY05_NPEAV?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@@Z @ 0x180127180 (-VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NKW4__MIDL___MIDL_i.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A116C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

_QWORD *__fastcall ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext(__int64 a1, _QWORD **a2)
{
  _QWORD *v2; // rcx

  v2 = *a2;
  if ( !*a2 )
    ATL::AtlThrowImpl(-2147467259);
  *a2 = (_QWORD *)*v2;
  return v2 + 2;
}
