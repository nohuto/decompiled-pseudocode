/*
 * XREFs of ??1?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@QEAA@XZ @ 0x1800A35A8
 * Callers:
 *     _CAudioStream::GetAudioEffects_::_1_::dtor$1 @ 0x18016C455 (_CAudioStream--GetAudioEffects_--_1_--dtor$1.c)
 *     _CMulticastSessionManager::GetCompatibleMulticastProvider_::_1_::dtor$0 @ 0x180170450 (_CMulticastSessionManager--GetCompatibleMulticastProvider_--_1_--dtor$0.c)
 *     _CMulticastSessionManager::GetCompatibleMulticastProvider_::_1_::dtor$2 @ 0x180170462 (_CMulticastSessionManager--GetCompatibleMulticastProvider_--_1_--dtor$2.c)
 *     _EffectPackConfiguration::EffectPackConfiguration_::_1_::dtor$3 @ 0x180171FB5 (_EffectPackConfiguration--EffectPackConfiguration_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::vector<_GUID>::~vector<_GUID>(__int64 a1)
{
  std::vector<std::_Loop_vals_t>::~vector<std::_Loop_vals_t>(a1);
}
