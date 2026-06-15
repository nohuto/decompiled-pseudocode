/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x18002368C
 * Callers:
 *     ??$_Uninitialized_move@PEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@0@@Z @ 0x180022DBC (--$_Uninitialized_move@PEAV-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISa.c)
 *     ??1?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180022E6C (--1-$vector@V-$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIProcessSubm.c)
 *     ?PruneStaleEntries@@YAXAEAV?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800233A8 (-PruneStaleEntries@@YAXAEAV-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@.c)
 *     ??$_Emplace_reallocate@AEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV234@AEAV234@@Z @ 0x1800239DC (--$_Emplace_reallocate@AEAV-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UISt.c)
 *     ??$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAPEAVWeakRef@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x180024BC0 (--$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator.c)
 *     ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEAVCEndpointStore@@_N@Z @ 0x180030038 (-ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEAVCEndpointStore@@_N@Z.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@_K1@Z @ 0x18006F238 (-_Change_array@-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIS.c)
 *     ?FreeResourcesAndLockForStreamGroupConnectionDisconnection@CAudioResourceManager@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIDeviceGraphObjectsStore@@@Z @ 0x180070AE4 (-FreeResourcesAndLockForStreamGroupConnectionDisconnection@CAudioResourceManager@@QEAA-AV-$uniqu.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18007230C (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?UseSupportedConnectorMode@@YAJPEAUEndpointCharacteristicsDescriptor@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@HAEA_N@Z @ 0x18008D0EC (-UseSupportedConnectorMode@@YAJPEAUEndpointCharacteristicsDescriptor@@KW4__MIDL___MIDL_itf_audio.c)
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEAV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@_NPEAVCAudioSessionManager@@66PEAPEAUISaDeviceProxy@@@Z @ 0x18009FF94 (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@P.c)
 *     ?GetConnectorTypeForStream@@YA?AW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@HPEBUtWAVEFORMATEX@@PEAUIProcessSubmixProxy@@@Z @ 0x1800A3C60 (-GetConnectorTypeForStream@@YA-AW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUEndp.c)
 *     _lambda_1f5796afe4506c09e96203cfbd7509e5_::operator() @ 0x1800B7674 (_lambda_1f5796afe4506c09e96203cfbd7509e5_--operator().c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2KPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x1800B9CE0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAU.c)
 *     ?DisconnectOffloadStreams@CAudioResourceManager@@QEAAJ$$QEAV?$function@$$A6A_NPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x1800BCBC0 (-DisconnectOffloadStreams@CAudioResourceManager@@QEAAJ$$QEAV-$function@$$A6A_NPEAUIAudioStreamIn.c)
 *     ?ReleaseResource@CAudioResourceManager@@UEAAJ_K@Z @ 0x1800BFA30 (-ReleaseResource@CAudioResourceManager@@UEAAJ_K@Z.c)
 *     ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x1800C06D8 (-SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescript.c)
 *     ?clear@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x1800C1618 (-clear@-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDeviceProx.c)
 *     ?DoExclusiveModePrimaryProfileSaDevicesExist@CBtAudioResourceManagerBase@@IEAA_NPEAVCEndpointStore@@@Z @ 0x1800D4CC4 (-DoExclusiveModePrimaryProfileSaDevicesExist@CBtAudioResourceManagerBase@@IEAA_NPEAVCEndpointSto.c)
 *     ?DoMicrophoneSaDevicesExist@CBtAudioResourceManagerBase@@IEAA_NPEAVCEndpointStore@@@Z @ 0x1800D4E10 (-DoMicrophoneSaDevicesExist@CBtAudioResourceManagerBase@@IEAA_NPEAVCEndpointStore@@@Z.c)
 *     ?DoSecondaryProfileRenderStreamGroupsExist@CBtAudioResourceManagerBase@@IEAA_NPEAVCEndpointStore@@@Z @ 0x1800D4EC8 (-DoSecondaryProfileRenderStreamGroupsExist@CBtAudioResourceManagerBase@@IEAA_NPEAVCEndpointStore.c)
 *     ?DoSecondaryProfileSharedModeRenderSaDevicesExist@CBtAudioResourceManagerBase@@IEAA_NPEAVCEndpointStore@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800D50B4 (-DoSecondaryProfileSharedModeRenderSaDevicesExist@CBtAudioResourceManagerBase@@IEAA_NPEAVCEndpoi.c)
 *     ?FreePrimaryProfileRenderSaDevicesAndSaveDisplacedStreamGroups@CBtAudioResourceManagerBase@@IEAAJPEAVCEndpointStore@@PEA_N@Z @ 0x1800D51F8 (-FreePrimaryProfileRenderSaDevicesAndSaveDisplacedStreamGroups@CBtAudioResourceManagerBase@@IEAA.c)
 *     ?ReleaseSaDevices@CBtAudioResourceManagerBase@@IEAAJPEAVCEndpointStore@@AEAV?$forward_list@UDisplacedStreamGroup@@V?$allocator@UDisplacedStreamGroup@@@std@@@std@@@Z @ 0x1800DA5C8 (-ReleaseSaDevices@CBtAudioResourceManagerBase@@IEAAJPEAVCEndpointStore@@AEAV-$forward_list@UDisp.c)
 *     ?RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ @ 0x1800DB3BC (-RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ.c)
 *     ?RestoreDisplacedPrimaryProfileStreamGroups_Old@CBtAudioResourceManagerBase@@IEAAJXZ @ 0x1800DC2E0 (-RestoreDisplacedPrimaryProfileStreamGroups_Old@CBtAudioResourceManagerBase@@IEAAJXZ.c)
 *     _lambda_cbfc2ac73cdc91d5edb18bccca546a72_::operator() @ 0x1800EF464 (_lambda_cbfc2ac73cdc91d5edb18bccca546a72_--operator().c)
 *     _lambda_fad069bbea6c73c856a21cdaadf497a4_::operator() @ 0x1800F4804 (_lambda_fad069bbea6c73c856a21cdaadf497a4_--operator().c)
 *     ?FindPreferredStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@@@Z @ 0x1800F4B50 (-FindPreferredStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGr.c)
 *     ??$_Uninitialized_copy@PEAVWeakRef@WRL@Microsoft@@PEAV123@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@YAPEAVWeakRef@WRL@Microsoft@@PEAV123@00AEAV?$allocator@VWeakRef@WRL@Microsoft@@@0@@Z @ 0x18010540C (--$_Uninitialized_copy@PEAVWeakRef@WRL@Microsoft@@PEAV123@V-$allocator@VWeakRef@WRL@Microsoft@@@.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x180109760 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     _std::vector_Microsoft::WRL::ComPtr_IStreamGroupProxy__std::allocator_Microsoft::WRL::ComPtr_IStreamGroupProxy_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IStreamGroupProxy__&__::_1_::catch$0 @ 0x18015FE3D (_std--vector_Microsoft--WRL--ComPtr_IStreamGroupProxy__std--allocator_Microsoft--WRL--ComPtr_ISt.c)
 *     _std::vector_Microsoft::WRL::WeakRef_std::allocator_Microsoft::WRL::WeakRef___::_Emplace_reallocate_Microsoft::WRL::WeakRef_const_&__::_1_::catch$1 @ 0x18015FF35 (_std--vector_Microsoft--WRL--WeakRef_std--allocator_Microsoft--WRL--WeakRef___--_Emplace_realloc.c)
 *     _std::vector_Microsoft::WRL::ComPtr_ISaDeviceProxy__std::allocator_Microsoft::WRL::ComPtr_ISaDeviceProxy_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_ISaDeviceProxy__const_&__::_1_::catch$0 @ 0x180164871 (_std--vector_Microsoft--WRL--ComPtr_ISaDeviceProxy__std--allocator_Microsoft--WRL--ComPtr_ISaDev.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A54 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      result = Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v3++);
    while ( v3 != a2 );
  }
  return result;
}
