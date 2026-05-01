/*
 * XREFs of ??1?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@QEAA@XZ @ 0x1802CD378
 * Callers:
 *     _BroadcastDVRComponent::GetNonServiceProcessListAndIds_::_1_::dtor$0 @ 0x1806CF492 (_BroadcastDVRComponent--GetNonServiceProcessListAndIds_--_1_--dtor$0.c)
 *     _BroadcastDVRComponent::EvaluateAppForGameMode_::_1_::dtor$6 @ 0x1806CF50B (_BroadcastDVRComponent--EvaluateAppForGameMode_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::vector<std::pair<unsigned long,Windows::Internal::String>>::~vector<std::pair<unsigned long,Windows::Internal::String>>(
        __int64 a1)
{
  std::vector<std::pair<unsigned long,Windows::Internal::String>>::_Tidy(a1);
}
