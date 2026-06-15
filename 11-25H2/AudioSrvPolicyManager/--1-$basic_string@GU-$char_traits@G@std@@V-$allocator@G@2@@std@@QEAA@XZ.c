/*
 * XREFs of ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180015310
 * Callers:
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180002360 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180004B00 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamClassPolicyGains@@@Z @ 0x1800066A0 (-GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamCla.c)
 *     ?GetEndpointVolumeOverridePolicyVolume@CEndpointVolumeStateManager@@UEAAMPEBG@Z @ 0x180014630 (-GetEndpointVolumeOverridePolicyVolume@CEndpointVolumeStateManager@@UEAAMPEBG@Z.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180027ED0 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ??1CDuckingNotification@@QEAA@XZ @ 0x1800284DC (--1CDuckingNotification@@QEAA@XZ.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18002EC4C (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBV-$basic_string@GU-$char_trai.c)
 *     _lambda_1e03ffd0b3816784b19a9acf2aab20e8_::operator() @ 0x18002EF7C (_lambda_1e03ffd0b3816784b19a9acf2aab20e8_--operator().c)
 *     _lambda_aa732a8a991b7eb0f1632fe44cffa677_::operator() @ 0x18002F478 (_lambda_aa732a8a991b7eb0f1632fe44cffa677_--operator().c)
 *     ?OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x180030A30 (-OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioS.c)
 *     ??1?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@QEAA@XZ @ 0x1800330C0 (--1-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$com_ptr_t@UIAppli.c)
 *     ??1?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@QEAA@XZ @ 0x18003E73C (--1-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$unique_ptr@VCStre.c)
 *     ??1CAastPreStartContext@@UEAA@XZ @ 0x18003ECEC (--1CAastPreStartContext@@UEAA@XZ.c)
 *     ??1DuckingDescriptorAndId@@QEAA@XZ @ 0x18003FE04 (--1DuckingDescriptorAndId@@QEAA@XZ.c)
 *     ??1?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@QEAA@XZ @ 0x180046474 (--1-$pair@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$unique_ptr@VCEndpoint.c)
 *     ?AddEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x180046610 (-AddEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z.c)
 *     ?ReleaseEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x1800469B0 (-ReleaseEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z.c)
 *     ?LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ @ 0x180048160 (-LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ.c)
 *     _CApplicationManager::OnStreamStarted_::_1_::dtor$5 @ 0x18004B4D0 (_CApplicationManager--OnStreamStarted_--_1_--dtor$5.c)
 *     _CApplicationManager::OnStreamStopped_::_1_::dtor$5 @ 0x18004B6D0 (_CApplicationManager--OnStreamStopped_--_1_--dtor$5.c)
 *     _CStreamClassPolicyGainsWrapper::GetStreamClassPolicyGainsForEndpoint_::_1_::dtor$2 @ 0x18004B830 (_CStreamClassPolicyGainsWrapper--GetStreamClassPolicyGainsForEndpoint_--_1_--dtor$2.c)
 *     _CStreamClassPolicyGainsWrapper::GetStreamClassPolicyGainsForEndpoint_::_1_::dtor$3 @ 0x18004B850 (_CStreamClassPolicyGainsWrapper--GetStreamClassPolicyGainsForEndpoint_--_1_--dtor$3.c)
 *     _CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::dtor$1 @ 0x18004C36F (_CApplication--RegisterProcessWithApplicationSpecificEndpointInfo_--_1_--dtor$1.c)
 *     __lambda_1e03ffd0b3816784b19a9acf2aab20e8_::operator()_::_1_::dtor$1 @ 0x18004CEDC (__lambda_1e03ffd0b3816784b19a9acf2aab20e8_--operator()_--_1_--dtor$1.c)
 *     __lambda_aa732a8a991b7eb0f1632fe44cffa677_::operator()_::_1_::dtor$2 @ 0x18004CF12 (__lambda_aa732a8a991b7eb0f1632fe44cffa677_--operator()_--_1_--dtor$2.c)
 *     _CDuckingManager::OnRenderCommunicationsStreamStateChanged_::_1_::dtor$7 @ 0x18004D17A (_CDuckingManager--OnRenderCommunicationsStreamStateChanged_--_1_--dtor$7.c)
 *     _CEndpointVolumeStateManager::AddEndpointVolumeReference_::_1_::dtor$5 @ 0x18004DEE5 (_CEndpointVolumeStateManager--AddEndpointVolumeReference_--_1_--dtor$5.c)
 *     _ApplicationSpecificEndpointInfo::LoadApplicationDefaultEndpoints_::_1_::dtor$2 @ 0x18004E086 (_ApplicationSpecificEndpointInfo--LoadApplicationDefaultEndpoints_--_1_--dtor$2.c)
 * Callees:
 *     ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBA_NXZ @ 0x18001B218 (-_Large_mode_engaged@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBA_NXZ.c)
 *     ?_Deallocate_for_capacity@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CAXAEAV?$allocator@G@2@QEAG_K@Z @ 0x18001B228 (-_Deallocate_for_capacity@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CAXAEAV-$.c)
 */

__int64 __fastcall std::wstring::~wstring(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rcx
  __int64 result; // rax

  if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(a1, a2, a3, a4) )
    std::wstring::_Deallocate_for_capacity(v5, *v5, v5[3]);
  result = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_WORD *)a1 = 0;
  return result;
}
