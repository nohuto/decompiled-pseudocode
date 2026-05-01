/*
 * XREFs of ??1?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@QEAA@XZ @ 0x18023B384
 * Callers:
 *     _BroadcastDVRComponent::EvaluateAppForGameMode_::_1_::dtor$1 @ 0x1806CF51D (_BroadcastDVRComponent--EvaluateAppForGameMode_--_1_--dtor$1.c)
 *     _BroadcastDVRComponent::GetSortedUniqueProcessList_::_1_::dtor$0 @ 0x1806CF584 (_BroadcastDVRComponent--GetSortedUniqueProcessList_--_1_--dtor$0.c)
 *     _BroadcastDVRComponent::BroadcastDVRComponent_::_1_::dtor$7 @ 0x1806DEB3F (_BroadcastDVRComponent--BroadcastDVRComponent_--_1_--dtor$7.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::vector<Windows::Internal::String>::~vector<Windows::Internal::String>(__int64 a1)
{
  std::vector<Windows::Internal::String>::_Tidy(a1);
}
