/*
 * XREFs of ??1?$_Func_class@X$$V@std@@QEAA@XZ @ 0x1800514A4
 * Callers:
 *     __lambda_530575f8b419a08780554bb070101504_::operator()_::_1_::dtor$9 @ 0x180168FF0 (__lambda_530575f8b419a08780554bb070101504_--operator()_--_1_--dtor$9.c)
 *     _CAudioSession::PostStateCheckExpirationWork_::_1_::dtor$7 @ 0x18016A0F2 (_CAudioSession--PostStateCheckExpirationWork_--_1_--dtor$7.c)
 *     __lambda_8ba24c4cf53db699b74a350d628b126d_::operator()_::_1_::dtor$0 @ 0x18016A140 (__lambda_8ba24c4cf53db699b74a350d628b126d_--operator()_--_1_--dtor$0.c)
 *     _CSerialWorkQueue::QueueWorkItem_::_1_::dtor$5 @ 0x18016A180 (_CSerialWorkQueue--QueueWorkItem_--_1_--dtor$5.c)
 *     _CSerialWorkQueue::QueueRecurringItem_::_1_::dtor$0 @ 0x18016A1D0 (_CSerialWorkQueue--QueueRecurringItem_--_1_--dtor$0.c)
 *     __WaitTask::Initialize_::_1_::dtor$0 @ 0x18016A276 (__WaitTask--Initialize_--_1_--dtor$0.c)
 *     _std::function_long___cdecl(SystemEffectDescriptor___SystemEffectChainDescriptor__)_::function_long___cdecl(SystemEffectDescriptor___SystemEffectChainDescriptor__)__::_1_::dtor$0 @ 0x18016A2AC (_std--function_long___cdecl(SystemEffectDescriptor___SystemEffectChainDescriptor__)_--function_l.c)
 *     _EffectPack::AugmentOEMSpeechProcessingSupport_::_1_::dtor$3 @ 0x18016A2D0 (_EffectPack--AugmentOEMSpeechProcessingSupport_--_1_--dtor$3.c)
 *     _AudioModeEffectsWatcher::PopulateControllableEffects_::_1_::dtor$1 @ 0x18016A2E2 (_AudioModeEffectsWatcher--PopulateControllableEffects_--_1_--dtor$1.c)
 *     _DeviceGraphStore::GetSubmixesForApplication_::_1_::dtor$0 @ 0x18016A495 (_DeviceGraphStore--GetSubmixesForApplication_--_1_--dtor$0.c)
 *     _EffectPack::CanProcessingModeBeParameterized_::_1_::dtor$4 @ 0x18016A606 (_EffectPack--CanProcessingModeBeParameterized_--_1_--dtor$4.c)
 *     _EffectPack::GetInitializedSystemEffectInterface_::_1_::dtor$49 @ 0x18016A800 (_EffectPack--GetInitializedSystemEffectInterface_--_1_--dtor$49.c)
 *     _SystemEffectChainDescriptor::MarkAsUnresolved_::_1_::dtor$0 @ 0x18016AB6A (_SystemEffectChainDescriptor--MarkAsUnresolved_--_1_--dtor$0.c)
 *     _SystemEffectDescriptor::CreateOverridingChain_::_1_::dtor$0 @ 0x18016AC04 (_SystemEffectDescriptor--CreateOverridingChain_--_1_--dtor$0.c)
 *     _SystemEffectDescriptor::CreateOverridingChain_::_1_::dtor$0_0 @ 0x18016AC3A (_SystemEffectDescriptor--CreateOverridingChain_--_1_--dtor$0_0.c)
 *     _CCompositeSystemEffect::ChainedAposSupportInterface_IApoAuxiliaryInputConfiguration__::_1_::dtor$0 @ 0x18016B378 (_CCompositeSystemEffect--ChainedAposSupportInterface_IApoAuxiliaryInputConfiguration__--_1_--dto.c)
 *     _CWorkFifo::ScheduleWorkItem_::_1_::dtor$0 @ 0x18016BB9C (_CWorkFifo--ScheduleWorkItem_--_1_--dtor$0.c)
 *     _CProcessSubmixManager::GetAppSubmixClientContextHelper_::_1_::dtor$4 @ 0x18016D0FD (_CProcessSubmixManager--GetAppSubmixClientContextHelper_--_1_--dtor$4.c)
 *     _EffectPackConfigurationManager::RemoveEffectPackConfigurationFromEndpoints_::_1_::dtor$0 @ 0x18016DED2 (_EffectPackConfigurationManager--RemoveEffectPackConfigurationFromEndpoints_--_1_--dtor$0.c)
 *     _CBtAudioResourceManagerBase::RegisterCallback_::_1_::dtor$0 @ 0x18016EA70 (_CBtAudioResourceManagerBase--RegisterCallback_--_1_--dtor$0.c)
 *     _EffectPackConfigurationManager::AddEffectPackConfigurationToEndpoints_::_1_::dtor$2 @ 0x18016F9A6 (_EffectPackConfigurationManager--AddEffectPackConfigurationToEndpoints_--_1_--dtor$2.c)
 *     _CEndpointCharacteristics::RuntimeClassInitialize_::_1_::dtor$15 @ 0x1801719F7 (_CEndpointCharacteristics--RuntimeClassInitialize_--_1_--dtor$15.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::_Func_class<void,>::~_Func_class<void,>(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
