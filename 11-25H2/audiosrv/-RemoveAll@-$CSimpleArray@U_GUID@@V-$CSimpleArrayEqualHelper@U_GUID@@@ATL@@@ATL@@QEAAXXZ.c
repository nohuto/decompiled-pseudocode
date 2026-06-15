/*
 * XREFs of ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x1800378C0
 * Callers:
 *     ?GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x18003758C (-GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W.c)
 *     ??4?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x1800378F8 (--4-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?FixupProcessingModeSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18003CD24 (-FixupProcessingModeSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x18003D3BC (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4Connect.c)
 *     ?UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@@Z @ 0x18003D5F4 (-UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IP.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x18003D98C (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 *     ?ReplaceEffectChain@SystemEffectChainDescriptor@@IEAAJIPEBU_GUID@@I0@Z @ 0x18003E510 (-ReplaceEffectChain@SystemEffectChainDescriptor@@IEAAJIPEBU_GUID@@I0@Z.c)
 *     ?DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18003ED58 (-DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?AddInternalVoiceProcessingMode@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@W4EnhancementsDisabledSupport@@@Z @ 0x18004A7A8 (-AddInternalVoiceProcessingMode@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     ?GetAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x18004AC70 (-GetAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEffectDesc.c)
 *     ?AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18004CF24 (-AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x18004DBC8 (-GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEff.c)
 *     ?GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@PEAIPEAPEAU_GUID@@@Z @ 0x18004E050 (-GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@P.c)
 *     ?CreateDriverEffectPackConfiguration@EffectPackConfiguration@@SAJPEAUIPropertyStore@@0AEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@Z @ 0x18005E9F8 (-CreateDriverEffectPackConfiguration@EffectPackConfiguration@@SAJPEAUIPropertyStore@@0AEAV-$shar.c)
 *     ??1EffectPack@@QEAA@XZ @ 0x180076920 (--1EffectPack@@QEAA@XZ.c)
 *     ??1SystemEffectDescriptor@@QEAA@XZ @ 0x180076A30 (--1SystemEffectDescriptor@@QEAA@XZ.c)
 *     ??1SystemEffectChainDescriptor@@QEAA@XZ @ 0x180080238 (--1SystemEffectChainDescriptor@@QEAA@XZ.c)
 *     _lambda_0bf9917c90d271a840409fa4d6d2c2a6_::operator() @ 0x180128AB0 (_lambda_0bf9917c90d271a840409fa4d6d2c2a6_--operator().c)
 *     _lambda_c4b06e3056b944e8c68b4f3e8aaba954_::operator() @ 0x180129C8C (_lambda_c4b06e3056b944e8c68b4f3e8aaba954_--operator().c)
 *     _lambda_f318f87950837fa021a8ed1b2df6ff30_::operator() @ 0x18012A524 (_lambda_f318f87950837fa021a8ed1b2df6ff30_--operator().c)
 *     ?InitializeCriticalAPOMetadata@EffectPack@@QEAAJXZ @ 0x18012C868 (-InitializeCriticalAPOMetadata@EffectPack@@QEAAJXZ.c)
 *     ?PublishProcessingModeTelemetry@EffectPack@@QEAAXXZ @ 0x18012D76C (-PublishProcessingModeTelemetry@EffectPack@@QEAAXXZ.c)
 *     ?SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@@Z @ 0x180142530 (-SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@@Z.c)
 *     _EffectPack::CanBuildProcessingModesOnRawConnector_::_1_::dtor$0 @ 0x1801612D4 (_EffectPack--CanBuildProcessingModesOnRawConnector_--_1_--dtor$0.c)
 *     _EffectPolicy::GetAECInsertionPolicy_::_1_::dtor$0 @ 0x18016136D (_EffectPolicy--GetAECInsertionPolicy_--_1_--dtor$0.c)
 *     _SystemEffectDescriptor::UpdateEffectsInOverridingChain_::_1_::dtor$2 @ 0x18016137F (_SystemEffectDescriptor--UpdateEffectsInOverridingChain_--_1_--dtor$2.c)
 *     _SystemEffectDescriptor::UpdateEffectsInOverridingChain_::_1_::dtor$0 @ 0x180161391 (_SystemEffectDescriptor--UpdateEffectsInOverridingChain_--_1_--dtor$0.c)
 *     _SystemEffectDescriptor::CreateOverridingChain_::_1_::dtor$1 @ 0x1801613A3 (_SystemEffectDescriptor--CreateOverridingChain_--_1_--dtor$1.c)
 *     _SystemEffectDescriptor::CreateOverridingChain_::_1_::dtor$1_0 @ 0x1801613C7 (_SystemEffectDescriptor--CreateOverridingChain_--_1_--dtor$1_0.c)
 *     _SystemEffectDescriptor::UpdateEffectsInOverridingChain_::_1_::dtor$3 @ 0x1801613D9 (_SystemEffectDescriptor--UpdateEffectsInOverridingChain_--_1_--dtor$3.c)
 *     _EffectPack::AddSpatialAudioProcessingSupportForConnector_::_1_::dtor$8 @ 0x1801619CA (_EffectPack--AddSpatialAudioProcessingSupportForConnector_--_1_--dtor$8.c)
 *     _EffectPolicy::GetDelayedAECInsertionPolicy_::_1_::dtor$4 @ 0x180161A00 (_EffectPolicy--GetDelayedAECInsertionPolicy_--_1_--dtor$4.c)
 *     _EffectPackConfiguration::CreateDriverEffectPackConfiguration_::_1_::dtor$1 @ 0x180162168 (_EffectPackConfiguration--CreateDriverEffectPackConfiguration_--_1_--dtor$1.c)
 *     __lambda_c4b06e3056b944e8c68b4f3e8aaba954_::operator()_::_1_::dtor$1 @ 0x1801681B4 (__lambda_c4b06e3056b944e8c68b4f3e8aaba954_--operator()_--_1_--dtor$1.c)
 *     _EffectPack::PublishProcessingModeTelemetry_::_1_::dtor$0 @ 0x180168292 (_EffectPack--PublishProcessingModeTelemetry_--_1_--dtor$0.c)
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
