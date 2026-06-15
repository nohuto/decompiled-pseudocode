/*
 * XREFs of ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x1800132E0
 * Callers:
 *     GetAudioSessionManager @ 0x180012C30 (GetAudioSessionManager.c)
 *     ?PublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x180012EB4 (-PublishApoTelemetry@@YAJPEBGU_GUID@@@Z.c)
 *     ?GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAUIVolumeStrip@@@Z @ 0x180013070 (-GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAUIVolumeStrip@@@Z.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@KPEAPEAG@Z @ 0x1800197F0 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@K.c)
 *     ?ResetApoTelemetryPublishingState@CPolicyConfig@@UEAAXPEBG@Z @ 0x180020D10 (-ResetApoTelemetryPublishingState@CPolicyConfig@@UEAAXPEBG@Z.c)
 *     ?GetWatcher@AudioModeEffectsWatcherFactory@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@PEAPEAUIAudioModeEffectsWatcher@@@Z @ 0x1800226F4 (-GetWatcher@AudioModeEffectsWatcherFactory@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@PE.c)
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x180059BFC (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18007230C (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?FindAppropriateStreamGroupAndSaDeviceForStream@CAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEBGPEAUIAudioStreamInfo@@@Z @ 0x180088C30 (-FindAppropriateStreamGroupAndSaDeviceForStream@CAudioResourceManager@@UEAAJPEAUEndpointCharacte.c)
 *     ?SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z @ 0x18008B960 (-SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z.c)
 *     ?UseSupportedConnectorMode@@YAJPEAUEndpointCharacteristicsDescriptor@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@HAEA_N@Z @ 0x18008D0EC (-UseSupportedConnectorMode@@YAJPEAUEndpointCharacteristicsDescriptor@@KW4__MIDL___MIDL_itf_audio.c)
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEAV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@_NPEAVCAudioSessionManager@@66PEAPEAUISaDeviceProxy@@@Z @ 0x18009FF94 (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@P.c)
 *     ?GetConnectorTypeForStream@@YA?AW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@HPEBUtWAVEFORMATEX@@PEAUIProcessSubmixProxy@@@Z @ 0x1800A3C60 (-GetConnectorTypeForStream@@YA-AW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUEndp.c)
 *     ?GetWatcher@AudioEffectsWatcherFactory@@YAJPEBGKHW4DiscoverySettings@@PEAPEAUIAudioEffectsWatcher@@@Z @ 0x1800B47C8 (-GetWatcher@AudioEffectsWatcherFactory@@YAJPEBGKHW4DiscoverySettings@@PEAPEAUIAudioEffectsWatche.c)
 *     _lambda_a5b05a19d77442a7b86c350de8e12946_::operator() @ 0x1800B7A24 (_lambda_a5b05a19d77442a7b86c350de8e12946_--operator().c)
 *     _lambda_ad0db6eea65a131797ab646398125e78_::operator() @ 0x1800B7CD4 (_lambda_ad0db6eea65a131797ab646398125e78_--operator().c)
 *     ?ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@QEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@PEBG_N@Z @ 0x1800B86FC (-ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@QEAAJAEAV-$ComPtr@UIStreamGr.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAUIBridgeStreamInstanceProxy@@@Z @ 0x1800B88DC (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAU.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2KPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x1800B9CE0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAU.c)
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800BC790 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?ReevaluateStreamGroups@CAudioResourceManager@@IEAAJPEBGU_GUID@@@Z @ 0x1800BF6A0 (-ReevaluateStreamGroups@CAudioResourceManager@@IEAAJPEBGU_GUID@@@Z.c)
 *     ?ReleaseResource@CAudioResourceManager@@UEAAJ_K@Z @ 0x1800BFA30 (-ReleaseResource@CAudioResourceManager@@UEAAJ_K@Z.c)
 *     ?AllowOffloadStreamCreation@CBtAudioResourceManagerBase@@UEAA_NXZ @ 0x1800D38A0 (-AllowOffloadStreamCreation@CBtAudioResourceManagerBase@@UEAA_NXZ.c)
 *     ?CreateExclusiveSaDeviceOnRenderEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800D39E4 (-CreateExclusiveSaDeviceOnRenderEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacter.c)
 *     ?CreateSaDeviceOnMicrophoneEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800D3E40 (-CreateSaDeviceOnMicrophoneEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristic.c)
 *     ?CreateSaDeviceOnRenderEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800D42D0 (-CreateSaDeviceOnRenderEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDes.c)
 *     ?GetSaDeviceForOffloadStream@CBtAudioResourceManagerBase@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEBU_GUID@@5PEAPEAUISaDeviceProxy@@@Z @ 0x1800D8A90 (-GetSaDeviceForOffloadStream@CBtAudioResourceManagerBase@@UEAAJPEAUEndpointCharacteristicsDescri.c)
 *     ?RefreshStreamsOnDevice@CBtAudioResourceManagerBase@@IEAAJW4ReconnectSaDeviceOptions@1@@Z @ 0x1800D9B1C (-RefreshStreamsOnDevice@CBtAudioResourceManagerBase@@IEAAJW4ReconnectSaDeviceOptions@1@@Z.c)
 *     ?ReleaseResources@CBtAudioResourceManagerBase@@UEAAJXZ @ 0x1800DA3F0 (-ReleaseResources@CBtAudioResourceManagerBase@@UEAAJXZ.c)
 *     ?RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ @ 0x1800DB3BC (-RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ.c)
 *     ?RestoreDisplacedPrimaryProfileStreamGroupsIfAppropriate@CBtAudioResourceManagerBase@@IEAAJXZ @ 0x1800DC130 (-RestoreDisplacedPrimaryProfileStreamGroupsIfAppropriate@CBtAudioResourceManagerBase@@IEAAJXZ.c)
 *     ?RestoreDisplacedPrimaryProfileStreamGroups_Old@CBtAudioResourceManagerBase@@IEAAJXZ @ 0x1800DC2E0 (-RestoreDisplacedPrimaryProfileStreamGroups_Old@CBtAudioResourceManagerBase@@IEAAJXZ.c)
 *     ?UpdateBtAudioStreamContextIfNecessary@CBtAudioResourceManagerBase@@IEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800DD238 (-UpdateBtAudioStreamContextIfNecessary@CBtAudioResourceManagerBase@@IEAAXW4__MIDL___MIDL_itf_mmd.c)
 *     ?EndpointResourceValidity@CConstraintModelResourceManager@@AEAA_NPEAVCEndpointCharacteristics@@@Z @ 0x1800E84A4 (-EndpointResourceValidity@CConstraintModelResourceManager@@AEAA_NPEAVCEndpointCharacteristics@@@.c)
 *     ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEBU_GUID@@5PEAPEAUISaDeviceProxy@@@Z @ 0x1800F1DD0 (-GetSaDevice@CDeviceGraphManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams.c)
 *     ?DisconnectHelper@CPolicyConfig@@SAXPEBG@Z @ 0x180100974 (-DisconnectHelper@CPolicyConfig@@SAXPEBG@Z.c)
 *     ?LockEndpointForUse@CPolicyConfig@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@PEBG@Z @ 0x180101010 (-LockEndpointForUse@CPolicyConfig@@UEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PE.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x180109760 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     AudioServerGetEndpointVpoContext @ 0x18010A020 (AudioServerGetEndpointVpoContext.c)
 *     AudioServerGetStreamVpoContext @ 0x18010A340 (AudioServerGetStreamVpoContext.c)
 * Callees:
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180014F20 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002153C (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$construct@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@AEBV12@@?$_Default_allocator_traits@V?$allocator@U?$_Flist_node@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@SAXAEAV?$allocator@U?$_Flist_node@V?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@1@QEAV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@AEBV34@@Z @ 0x180021720 (--$construct@V-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@AEBV12@@-$_Default_.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18002203C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18002C450 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??$MakeAndInitialize@VCEndpointStore@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointStore@@AEAPEBG@Z @ 0x1800A57DC (--$MakeAndInitialize@VCEndpointStore@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointStore.c)
 *     ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBA_NXZ @ 0x1800C1360 (-_Large_mode_engaged@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBA_NXZ.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
__int64 __fastcall CEndpointStoreCache::GetEndpointStore(
        CEndpointStoreCache *this,
        const unsigned __int16 *a2,
        struct CEndpointStore **a3)
{
  _QWORD *i; // rbx
  const WCHAR *v6; // rcx
  volatile int *v7; // rdx
  _QWORD *j; // rbx
  const WCHAR *v9; // rax
  volatile int *v10; // rdx
  __int64 v11; // rcx
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // r10
  struct CEndpointStore *v18; // rax
  __int64 v19; // rcx
  BOOL bIgnoreCase; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  CEndpointStoreCache *v22; // [rsp+70h] [rbp+8h] BYREF
  const unsigned __int16 *v23; // [rsp+78h] [rbp+10h] BYREF
  RTL_SRWLOCK *v24; // [rsp+80h] [rbp+18h]

  v23 = a2;
  v22 = this;
  *a3 = 0LL;
  AcquireSRWLockShared(&SRWLock);
  if ( g_endpointStoreCache )
  {
    ReleaseSRWLockShared(&SRWLock);
    return 2147943568LL;
  }
  else
  {
    for ( i = qword_1801CF588; i; i = (_QWORD *)*i )
    {
      if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(i[1] + 16LL) )
        v6 = *(const WCHAR **)v6;
      if ( CompareStringOrdinal(a2, -1, v6, -1, 1) == 2 )
      {
        v11 = i[1];
        if ( v11 )
        {
          *a3 = (struct CEndpointStore *)v11;
          Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v11 + 12), v7);
        }
        else
        {
          *a3 = 0LL;
        }
        ReleaseSRWLockShared(&SRWLock);
        return 0LL;
      }
    }
    ReleaseSRWLockShared(&SRWLock);
    AcquireSRWLockExclusive(&SRWLock);
    v24 = &SRWLock;
    if ( g_endpointStoreCache )
    {
      ReleaseSRWLockExclusive(&SRWLock);
      return 2147943568LL;
    }
    else
    {
      for ( j = qword_1801CF588; ; j = (_QWORD *)*j )
      {
        if ( !j )
        {
          v22 = 0LL;
          v13 = Microsoft::WRL::Details::MakeAndInitialize<CEndpointStore,CEndpointStore,unsigned short const * &>(
                  &v22,
                  &v23);
          v14 = v13;
          if ( v13 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x3A,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointstore.cpp",
              (const char *)(unsigned int)v13,
              bIgnoreCase);
            wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>(&v22);
            ReleaseSRWLockExclusive(&SRWLock);
            return v14;
          }
          else
          {
            v15 = std::_Allocate<16,std::_Default_allocate_traits,0>(16LL);
            std::_Default_allocator_traits<std::allocator<std::_Flist_node<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>,void *>>>::construct<wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>,wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy> const &>(
              v16,
              v15 + 8,
              &v22);
            *v17 = qword_1801CF588;
            qword_1801CF588 = v17;
            v18 = v22;
            v22 = 0LL;
            *a3 = v18;
            wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>(&v22);
            ReleaseSRWLockExclusive(&SRWLock);
            return 0LL;
          }
        }
        v9 = (const WCHAR *)std::wstring::c_str(j[1] + 16LL);
        if ( CompareStringOrdinal(a2, -1, v9, -1, 1) == 2 )
          break;
      }
      v19 = j[1];
      if ( v19 )
      {
        *a3 = (struct CEndpointStore *)v19;
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v19 + 12), v10);
      }
      else
      {
        *a3 = 0LL;
      }
      ReleaseSRWLockExclusive(&SRWLock);
      return 0LL;
    }
  }
}
