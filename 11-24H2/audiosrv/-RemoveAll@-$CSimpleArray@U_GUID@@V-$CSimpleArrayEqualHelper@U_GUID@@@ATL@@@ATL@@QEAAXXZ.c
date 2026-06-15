/*
 * XREFs of ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180032B00
 * Callers:
 *     ?GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x1800327CC (-GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W.c)
 *     ??4?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x180032B38 (--4-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?GetAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x180034E44 (-GetAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEffectDesc.c)
 *     ?DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800357B0 (-DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?FixupProcessingModeSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180038F98 (-FixupProcessingModeSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x180039630 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4Connect.c)
 *     ?UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@@Z @ 0x180039868 (-UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IP.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x180039C00 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 *     ?ReplaceEffectChain@SystemEffectChainDescriptor@@IEAAJIPEBU_GUID@@I0@Z @ 0x18003A780 (-ReplaceEffectChain@SystemEffectChainDescriptor@@IEAAJIPEBU_GUID@@I0@Z.c)
 *     ?GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x18003A92C (-GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEff.c)
 *     ?GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@PEAIPEAPEAU_GUID@@@Z @ 0x18003ADB4 (-GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@P.c)
 *     ?CreateDriverEffectPackConfiguration@EffectPackConfiguration@@SAJPEAUIPropertyStore@@0AEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@Z @ 0x180050468 (-CreateDriverEffectPackConfiguration@EffectPackConfiguration@@SAJPEAUIPropertyStore@@0AEAV-$shar.c)
 *     ?AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18005C46C (-AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ??1EffectPack@@QEAA@XZ @ 0x180066898 (--1EffectPack@@QEAA@XZ.c)
 *     ??1SystemEffectDescriptor@@QEAA@XZ @ 0x1800669A0 (--1SystemEffectDescriptor@@QEAA@XZ.c)
 *     ??1SystemEffectChainDescriptor@@QEAA@XZ @ 0x18006DCC4 (--1SystemEffectChainDescriptor@@QEAA@XZ.c)
 *     ?AddInternalVoiceProcessingMode@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@W4EnhancementsDisabledSupport@@@Z @ 0x18008BC98 (-AddInternalVoiceProcessingMode@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     _lambda_8ba24c4cf53db699b74a350d628b126d_::operator() @ 0x180131684 (_lambda_8ba24c4cf53db699b74a350d628b126d_--operator().c)
 *     _lambda_8dedf90f1f70af288e66d072af95fd4f_::operator() @ 0x180131CB4 (_lambda_8dedf90f1f70af288e66d072af95fd4f_--operator().c)
 *     _lambda_b22d32747e6e160a9ad72c43aac845ac_::operator() @ 0x180132420 (_lambda_b22d32747e6e160a9ad72c43aac845ac_--operator().c)
 *     ?InitializeCriticalAPOMetadata@EffectPack@@QEAAJXZ @ 0x180134DB4 (-InitializeCriticalAPOMetadata@EffectPack@@QEAAJXZ.c)
 *     ?PublishProcessingModeTelemetry@EffectPack@@QEAAXXZ @ 0x180135D88 (-PublishProcessingModeTelemetry@EffectPack@@QEAAXXZ.c)
 *     ?SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@@Z @ 0x18014AFA0 (-SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@@Z.c)
 *     _EffectPack::CanBuildProcessingModesOnRawConnector_::_1_::dtor$0 @ 0x18016A8F4 (_EffectPack--CanBuildProcessingModesOnRawConnector_--_1_--dtor$0.c)
 *     _EffectPolicy::GetAECInsertionPolicy_::_1_::dtor$0 @ 0x18016AA14 (_EffectPolicy--GetAECInsertionPolicy_--_1_--dtor$0.c)
 *     _SystemEffectDescriptor::UpdateEffectsInOverridingChain_::_1_::dtor$0 @ 0x18016AAB6 (_SystemEffectDescriptor--UpdateEffectsInOverridingChain_--_1_--dtor$0.c)
 *     _SystemEffectDescriptor::UpdateEffectsInOverridingChain_::_1_::dtor$2 @ 0x18016ABE0 (_SystemEffectDescriptor--UpdateEffectsInOverridingChain_--_1_--dtor$2.c)
 *     _SystemEffectDescriptor::CreateOverridingChain_::_1_::dtor$1 @ 0x18016ABF2 (_SystemEffectDescriptor--CreateOverridingChain_--_1_--dtor$1.c)
 *     _SystemEffectDescriptor::CreateOverridingChain_::_1_::dtor$1_0 @ 0x18016AC16 (_SystemEffectDescriptor--CreateOverridingChain_--_1_--dtor$1_0.c)
 *     _SystemEffectDescriptor::UpdateEffectsInOverridingChain_::_1_::dtor$3 @ 0x18016AC28 (_SystemEffectDescriptor--UpdateEffectsInOverridingChain_--_1_--dtor$3.c)
 *     _EffectPolicy::GetDelayedAECInsertionPolicy_::_1_::dtor$4 @ 0x18016ACB0 (_EffectPolicy--GetDelayedAECInsertionPolicy_--_1_--dtor$4.c)
 *     _EffectPackConfiguration::CreateDriverEffectPackConfiguration_::_1_::dtor$1 @ 0x18016B466 (_EffectPackConfiguration--CreateDriverEffectPackConfiguration_--_1_--dtor$1.c)
 *     _EffectPack::AddSpatialAudioProcessingSupportForConnector_::_1_::dtor$8 @ 0x18016BB4B (_EffectPack--AddSpatialAudioProcessingSupportForConnector_--_1_--dtor$8.c)
 *     __lambda_8dedf90f1f70af288e66d072af95fd4f_::operator()_::_1_::dtor$1 @ 0x1801717CF (__lambda_8dedf90f1f70af288e66d072af95fd4f_--operator()_--_1_--dtor$1.c)
 *     _EffectPack::PublishProcessingModeTelemetry_::_1_::dtor$0 @ 0x180171957 (_EffectPack--PublishProcessingModeTelemetry_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(_DWORD *a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    free(v2);
    *(_QWORD *)a1 = 0LL;
  }
  a1[2] = 0;
  a1[3] = 0;
}
