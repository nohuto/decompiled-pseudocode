/*
 * XREFs of ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180064D38
 * Callers:
 *     ?PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z @ 0x180013568 (-PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ??$construct@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@AEBV123@@?$_Default_allocator_traits@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@SAXAEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@1@QEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@AEBV345@@Z @ 0x180023B44 (--$construct@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@AEBV123@@-$_Default_allocator_traits@.c)
 *     ?Add@?$CSimpleArray@V?$ComPtr@UIAudioSystemEffects2@@@WRL@Microsoft@@V?$CSimpleArrayEqualHelper@V?$ComPtr@UIAudioSystemEffects2@@@WRL@Microsoft@@@ATL@@@ATL@@QEAAHAEBV?$ComPtr@UIAudioSystemEffects2@@@WRL@Microsoft@@@Z @ 0x180064C8C (-Add@-$CSimpleArray@V-$ComPtr@UIAudioSystemEffects2@@@WRL@Microsoft@@V-$CSimpleArrayEqualHelper@.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18007230C (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?GetStreamGroup@CBaseStreamGroupProxy@@UEAAJPEAPEAUIStreamGroup@@@Z @ 0x180072710 (-GetStreamGroup@CBaseStreamGroupProxy@@UEAAJPEAPEAUIStreamGroup@@@Z.c)
 *     ?GetDeviceGraph@CSaDeviceProxy@@UEAAJPEAPEAUIAudioDeviceGraph@@@Z @ 0x180076A80 (-GetDeviceGraph@CSaDeviceProxy@@UEAAJPEAPEAUIAudioDeviceGraph@@@Z.c)
 *     ??4?$ComPtr@UIStreamGroup@@@WRL@Microsoft@@QEAAAEAV012@PEAUIStreamGroup@@@Z @ 0x18008118C (--4-$ComPtr@UIStreamGroup@@@WRL@Microsoft@@QEAAAEAV012@PEAUIStreamGroup@@@Z.c)
 *     ?Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800911E0 (-Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengine.c)
 *     ?GetConnectorTypeForStream@@YA?AW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@HPEBUtWAVEFORMATEX@@PEAUIProcessSubmixProxy@@@Z @ 0x1800A3C60 (-GetConnectorTypeForStream@@YA-AW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUEndp.c)
 *     ??$_Construct_in_place@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@AEAV123@@std@@YAXAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@0@Z @ 0x1800A65D4 (--$_Construct_in_place@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@AEAV123@@std@@YAXAEAV-$ComP.c)
 *     _lambda_ed93c361bb151993c0858b3e67bfc06f_::_lambda_ed93c361bb151993c0858b3e67bfc06f_ @ 0x1800B6F64 (_lambda_ed93c361bb151993c0858b3e67bfc06f_--_lambda_ed93c361bb151993c0858b3e67bfc06f_.c)
 *     ??4?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800B754C (--4-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2KPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x1800B9CE0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAU.c)
 *     ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x1800C06D8 (-SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescript.c)
 *     ?CreateSaDeviceOnRenderEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800D42D0 (-CreateSaDeviceOnRenderEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDes.c)
 *     ?DoSecondaryProfileSharedModeRenderSaDevicesExist@CBtAudioResourceManagerBase@@IEAA_NPEAVCEndpointStore@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800D50B4 (-DoSecondaryProfileSharedModeRenderSaDevicesExist@CBtAudioResourceManagerBase@@IEAA_NPEAVCEndpoi.c)
 *     ??$?0VCSharedStreamGroupProxy@@@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAA@PEAVCSharedStreamGroupProxy@@@Z @ 0x1800EDC88 (--$-0VCSharedStreamGroupProxy@@@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAA@PEAVCSharedStr.c)
 *     ?RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@W4_AUDCLNT_SHAREMODE@@KAEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEBU_GUID@@6@Z @ 0x1800F3468 (-RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAUEndpointCharacteristicsDesc.c)
 *     ?FindPreferredStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@@@Z @ 0x1800F4B50 (-FindPreferredStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGr.c)
 *     ??0CStreamConnectionImpl@CMonitorManager@@QEAA@V?$ComPtr@VCMonitorManager@@@WRL@Microsoft@@V?$ComPtr@VCaptureMonitor@CMonitorManager@@@34@@Z @ 0x18010F24C (--0CStreamConnectionImpl@CMonitorManager@@QEAA@V-$ComPtr@VCMonitorManager@@@WRL@Microsoft@@V-$Co.c)
 *     ?CreateStreamConnection@CMonitorManager@@QEAAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0PEAUStreamConnectionSettings@@AEAV?$shared_ptr@VCStreamConnection@@@3@@Z @ 0x180110028 (-CreateStreamConnection@CMonitorManager@@QEAAJAEBV-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 *     ?SetStreamingState@CStreamConnectionImpl@CMonitorManager@@UEAAJ_N0@Z @ 0x1801139B0 (-SetStreamingState@CStreamConnectionImpl@CMonitorManager@@UEAAJ_N0@Z.c)
 *     ?GetAtmosCheckInstance@CSpatialAudioTech@@CAJPEAPEAVAtmosCheck@@@Z @ 0x180132ED8 (-GetAtmosCheckInstance@CSpatialAudioTech@@CAJPEAPEAVAtmosCheck@@@Z.c)
 *     ??4?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180138C10 (--4-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?IsOutputFormatSupported@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x180141F00 (-IsOutputFormatSupported@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 *     ?RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ @ 0x180149170 (-RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ.c)
 *     ?RegisterForShellReadyNotifications@AtmosCheck@@AEAAJXZ @ 0x1801494B4 (-RegisterForShellReadyNotifications@AtmosCheck@@AEAAJXZ.c)
 *     ?RegisterForUserWatcherNotifications@AtmosCheck@@AEAAJXZ @ 0x1801495F4 (-RegisterForUserWatcherNotifications@AtmosCheck@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  return result;
}
