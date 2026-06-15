/*
 * XREFs of ??1?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001778C
 * Callers:
 *     ?GetProcessFromStreamInfo@CApplicationManager@@QEAAJPEAUIAudioStreamInfo@@PEAPEAVCProcess@@@Z @ 0x180004A50 (-GetProcessFromStreamInfo@CApplicationManager@@QEAAJPEAUIAudioStreamInfo@@PEAPEAVCProcess@@@Z.c)
 *     ?GetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x18000E230 (-GetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmde.c)
 *     std::forward_list_IAudioSessionInfo___std::allocator_IAudioSessionInfo_____::remove_if__lambda_6c758f270a739346e4977fa18103cf5e___ @ 0x180013CA4 (std--forward_list_IAudioSessionInfo___std--allocator_IAudioSessionInfo_____--remove_if__lambda_6.c)
 *     ?GetPolicyVolumeForStreamClass@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamPolicyVolumeClient@@AEAUStreamCategoryPolicyVolumes@@@Z @ 0x180015A90 (-GetPolicyVolumeForStreamClass@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamPolicyVolumeClient@@A.c)
 *     ?GetPersistedDefaultAudioEndpointDeviceId@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x180016160 (-GetPersistedDefaultAudioEndpointDeviceId@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180019C74 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@QEAXV-$com_ptr_t@UIWeakReference@.c)
 *     ?RemoveSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z @ 0x18001C2E4 (-RemoveSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18001EEDC (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@QEAXV-$com_ptr_t@UIWeakReference@@Uerr_returncod.c)
 *     ??1VirtualAudioSessionInfo@@UEAA@XZ @ 0x1800287E8 (--1VirtualAudioSessionInfo@@UEAA@XZ.c)
 *     ?IsSubjectToSessionDisplayPolicyGain@CWindowsPolicyManager@@UEAAHPEAUIAudioStreamPolicyVolumeClient@@@Z @ 0x180028FB0 (-IsSubjectToSessionDisplayPolicyGain@CWindowsPolicyManager@@UEAAHPEAUIAudioStreamPolicyVolumeCli.c)
 *     ?NotifyVirtualStreamStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@PEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4_AudioStreamState@@3@Z @ 0x1800293A0 (-NotifyVirtualStreamStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@PEBGKW4__MIDL___M.c)
 *     ?RpcRegisterAudioStateMonitor@CWindowsPolicyManager@@UEAAJPEAXPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x18002A470 (-RpcRegisterAudioStateMonitor@CWindowsPolicyManager@@UEAAJPEAXPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_.c)
 *     ?RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z @ 0x18002A540 (-RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z.c)
 *     ?RpcUnregisterAudioStateMonitor@CWindowsPolicyManager@@UEAAJPEAXPEA_K@Z @ 0x18002A780 (-RpcUnregisterAudioStateMonitor@CWindowsPolicyManager@@UEAAJPEAXPEA_K@Z.c)
 *     _lambda_aa732a8a991b7eb0f1632fe44cffa677_::__lambda_aa732a8a991b7eb0f1632fe44cffa677_ @ 0x18002C1E8 (_lambda_aa732a8a991b7eb0f1632fe44cffa677_--__lambda_aa732a8a991b7eb0f1632fe44cffa677_.c)
 *     ??1DeactivatableDuckingDescriptor@@UEAA@XZ @ 0x18002C348 (--1DeactivatableDuckingDescriptor@@UEAA@XZ.c)
 *     _lambda_5f73260db21cd4e80ff2f87aa86ff472_::operator() @ 0x18002C714 (_lambda_5f73260db21cd4e80ff2f87aa86ff472_--operator().c)
 *     _lambda_a3aac110b84197fe884df272735eece2_::operator() @ 0x18002C9EC (_lambda_a3aac110b84197fe884df272735eece2_--operator().c)
 *     ?OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x18002E050 (-OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioS.c)
 *     std::_Func_impl_no_alloc__lambda_69dc6b3d18ca39047544878b55e3db40__long_IAudioSessionInfo___::_Do_call @ 0x18002ECB0 (std--_Func_impl_no_alloc__lambda_69dc6b3d18ca39047544878b55e3db40__long_IAudioSessionInfo___--_D.c)
 *     ??$ForEachSession@UIAudioSessionInfo@@@CProcess@@IEAAJ$$QEAV?$function@$$A6AXPEAUIAudioSessionInfo@@PEA_N@Z@std@@@Z @ 0x18002F63C (--$ForEachSession@UIAudioSessionInfo@@@CProcess@@IEAAJ$$QEAV-$function@$$A6AXPEAUIAudioSessionIn.c)
 *     ??$ForEachSession@UIAudioSessionPolicyControl@@@CProcess@@IEAAJ$$QEAV?$function@$$A6AXPEAUIAudioSessionPolicyControl@@PEA_N@Z@std@@@Z @ 0x18002F7A0 (--$ForEachSession@UIAudioSessionPolicyControl@@@CProcess@@IEAAJ$$QEAV-$function@$$A6AXPEAUIAudio.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18002FDE4 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil.c)
 *     ??1?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@QEAA@XZ @ 0x1800306E0 (--1-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$com_ptr_t@UIAppli.c)
 *     ?AddSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z @ 0x180031230 (-AddSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z.c)
 *     ?DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180031B88 (-DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?FreeNode@?$CAtlMap@PEAUIUnknown@@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@@5@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180031FB8 (-FreeNode@-$CAtlMap@PEAUIUnknown@@V-$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_polic.c)
 *     ?RegisterProcessNotification@CProcess@@UEAAJPEAUIAudioProcessNotification@@PEAUIUnknown@@@Z @ 0x1800337E0 (-RegisterProcessNotification@CProcess@@UEAAJPEAUIAudioProcessNotification@@PEAUIUnknown@@@Z.c)
 *     ?UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z @ 0x1800398BC (-UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z.c)
 *     ?QueueStreamStartedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x18003A79C (-QueueStreamStartedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?QueueStreamStoppedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x18003A8EC (-QueueStreamStoppedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x18003C6AC (-RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?HandleShellWarningAccepted@CDriverListener@@AEAAXPEBXK@Z @ 0x1800418EC (-HandleShellWarningAccepted@CDriverListener@@AEAAXPEBXK@Z.c)
 *     ??1CEndpointVolumeState@@QEAA@XZ @ 0x180043CAC (--1CEndpointVolumeState@@QEAA@XZ.c)
 *     ?AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x180045150 (-AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mm.c)
 *     ?GetPersistentId@ApplicationSpecificEndpointInfo@@CAJPEAUIMMDevice@@PEAPEAG@Z @ 0x18004575C (-GetPersistentId@ApplicationSpecificEndpointInfo@@CAJPEAUIMMDevice@@PEAPEAG@Z.c)
 *     ?SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEBG@Z @ 0x180046220 (-SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmde.c)
 *     _GetPolicyVolumeForAudioStream_::_1_::dtor$1 @ 0x180048FC0 (_GetPolicyVolumeForAudioStream_--_1_--dtor$1.c)
 *     _ApplicationSpecificEndpointInfo::AttemptToUpdateEndpointInterfaceId_::_1_::dtor$5 @ 0x180048FE0 (_ApplicationSpecificEndpointInfo--AttemptToUpdateEndpointInterfaceId_--_1_--dtor$5.c)
 *     _CApplicationManager::OnStreamStopped_::_1_::dtor$1 @ 0x1800496C0 (_CApplicationManager--OnStreamStopped_--_1_--dtor$1.c)
 *     _GetPolicyVolumeForAudioStream_::_1_::dtor$0 @ 0x180049800 (_GetPolicyVolumeForAudioStream_--_1_--dtor$0.c)
 *     _CAastPreStartContext::RuntimeClassInitialize_::_1_::dtor$0 @ 0x18004A680 (_CAastPreStartContext--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _CDuckingManager::OnRenderCommunicationsStreamStateChanged_::_1_::dtor$9 @ 0x18004A90C (_CDuckingManager--OnRenderCommunicationsStreamStateChanged_--_1_--dtor$9.c)
 *     _CAastPreStartContext::RuntimeClassInitialize_::_1_::dtor$1 @ 0x18004A9E1 (_CAastPreStartContext--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     _CProcess::ForEachSession_IAudioSessionPolicyControl__::_1_::dtor$1 @ 0x18004AA17 (_CProcess--ForEachSession_IAudioSessionPolicyControl__--_1_--dtor$1.c)
 *     _ApplicationSpecificEndpointInfo::GetPersistentId_::_1_::dtor$0 @ 0x18004AC46 (_ApplicationSpecificEndpointInfo--GetPersistentId_--_1_--dtor$0.c)
 *     _CProcess::RegisterProcessNotification_::_1_::dtor$0 @ 0x18004ADD5 (_CProcess--RegisterProcessNotification_--_1_--dtor$0.c)
 *     _CPlaybackManager::QueueStreamStoppedWorkItem_::_1_::dtor$0 @ 0x18004B0C1 (_CPlaybackManager--QueueStreamStoppedWorkItem_--_1_--dtor$0.c)
 *     _CPlaybackManager::QueueStreamStoppedWorkItem_::_1_::dtor$1 @ 0x18004B0D3 (_CPlaybackManager--QueueStreamStoppedWorkItem_--_1_--dtor$1.c)
 *     _ApplicationSpecificEndpointInfo::AttemptToUpdateEndpointInterfaceId_::_1_::dtor$4 @ 0x18004B5A9 (_ApplicationSpecificEndpointInfo--AttemptToUpdateEndpointInterfaceId_--_1_--dtor$4.c)
 *     _ApplicationSpecificEndpointInfo::AttemptToUpdateEndpointInterfaceId_::_1_::dtor$6 @ 0x18004B5BB (_ApplicationSpecificEndpointInfo--AttemptToUpdateEndpointInterfaceId_--_1_--dtor$6.c)
 *     _CEndpointVolumeState::CEndpointVolumeState_::_1_::dtor$0 @ 0x18004B639 (_CEndpointVolumeState--CEndpointVolumeState_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
