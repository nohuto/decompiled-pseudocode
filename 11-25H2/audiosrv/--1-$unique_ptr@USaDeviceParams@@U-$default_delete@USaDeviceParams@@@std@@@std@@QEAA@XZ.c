/*
 * XREFs of ??1?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@QEAA@XZ @ 0x1800276F4
 * Callers:
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAUIBridgeStreamInstanceProxy@@@Z @ 0x1800B88DC (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAU.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2KPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x1800B9CE0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAU.c)
 *     ??1DisplacedStreamGroup@@QEAA@XZ @ 0x1800D36EC (--1DisplacedStreamGroup@@QEAA@XZ.c)
 *     ?CreatePrimaryProfileRenderSaDeviceWithDefaultParameters@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800D3D40 (-CreatePrimaryProfileRenderSaDeviceWithDefaultParameters@CBtAudioResourceManagerBase@@IEAAJPEAUE.c)
 *     ?CreateSecondaryProfileRenderSaDeviceWithDefaultParameters@CBtAudioResourceManagerBase@@IEAAJAEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800D4B54 (-CreateSecondaryProfileRenderSaDeviceWithDefaultParameters@CBtAudioResourceManagerBase@@IEAAJAEA.c)
 *     ?FreePrimaryProfileRenderSaDevicesAndSaveDisplacedStreamGroups@CBtAudioResourceManagerBase@@IEAAJPEAVCEndpointStore@@PEA_N@Z @ 0x1800D51F8 (-FreePrimaryProfileRenderSaDevicesAndSaveDisplacedStreamGroups@CBtAudioResourceManagerBase@@IEAA.c)
 *     ?ReleaseSaDevices@CBtAudioResourceManagerBase@@IEAAJPEAVCEndpointStore@@AEAV?$forward_list@UDisplacedStreamGroup@@V?$allocator@UDisplacedStreamGroup@@@std@@@std@@@Z @ 0x1800DA5C8 (-ReleaseSaDevices@CBtAudioResourceManagerBase@@IEAAJPEAVCEndpointStore@@AEAV-$forward_list@UDisp.c)
 *     ?RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ @ 0x1800DB3BC (-RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ.c)
 *     ?RestoreDisplacedPrimaryProfileStreamGroups_Old@CBtAudioResourceManagerBase@@IEAAJXZ @ 0x1800DC2E0 (-RestoreDisplacedPrimaryProfileStreamGroups_Old@CBtAudioResourceManagerBase@@IEAAJXZ.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$20 @ 0x180164274 (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$20.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$22 @ 0x180164298 (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$22.c)
 *     _CAudioResourceManager::CreateStream_::_1_::dtor$21 @ 0x1801643DC (_CAudioResourceManager--CreateStream_--_1_--dtor$21.c)
 *     _CAudioResourceManager::CreateStream_::_1_::dtor$26 @ 0x180164436 (_CAudioResourceManager--CreateStream_--_1_--dtor$26.c)
 *     _CAudioResourceManager::CreateStream_::_1_::dtor$29 @ 0x18016446C (_CAudioResourceManager--CreateStream_--_1_--dtor$29.c)
 *     _CBtAudioResourceManagerBase::CreatePrimaryProfileRenderSaDeviceWithDefaultParameters_::_1_::dtor$0 @ 0x180164F75 (_CBtAudioResourceManagerBase--CreatePrimaryProfileRenderSaDeviceWithDefaultParameters_--_1_--dto.c)
 *     _CBtAudioResourceManagerBase::CreateSecondaryProfileRenderSaDeviceWithDefaultParameters_::_1_::dtor$1 @ 0x180165086 (_CBtAudioResourceManagerBase--CreateSecondaryProfileRenderSaDeviceWithDefaultParame_ea_180165086.c)
 *     _CBtAudioResourceManagerBase::FreePrimaryProfileRenderSaDevicesAndSaveDisplacedStreamGroups_::_1_::dtor$6 @ 0x1801650F2 (_CBtAudioResourceManagerBase--FreePrimaryProfileRenderSaDevicesAndSaveDisplacedStre_ea_1801650F2.c)
 *     _CBtAudioResourceManagerBase::ReleaseSaDevices_::_1_::dtor$6 @ 0x18016543A (_CBtAudioResourceManagerBase--ReleaseSaDevices_--_1_--dtor$6.c)
 *     _CBtAudioResourceManagerBase::RestoreDisplacedPrimaryProfileStreamGroups_Old_::_1_::dtor$9 @ 0x1801654EE (_CBtAudioResourceManagerBase--RestoreDisplacedPrimaryProfileStreamGroups_Old_--_1_--dtor$9.c)
 * Callees:
 *     ??1SaDeviceParams@@QEAA@XZ @ 0x180027A34 (--1SaDeviceParams@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>(SaDeviceParams **a1)
{
  SaDeviceParams *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    SaDeviceParams::~SaDeviceParams(*a1);
    operator delete(v1, (const struct std::nothrow_t *)0x70);
  }
}
