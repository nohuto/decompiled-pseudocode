/*
 * XREFs of ??1GameConfigInfo@@QEAA@XZ @ 0x18021AD1C
 * Callers:
 *     _BroadcastDVRComponent::OnApplicationViewChangedTask_::_1_::dtor$2 @ 0x1806CD469 (_BroadcastDVRComponent--OnApplicationViewChangedTask_--_1_--dtor$2.c)
 *     _BroadcastDVRComponent::OnGameModeEnableChangeTask_::_1_::dtor$2 @ 0x1806DF8CA (_BroadcastDVRComponent--OnGameModeEnableChangeTask_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall GameConfigInfo::~GameConfigInfo(HSTRING *this)
{
  Windows::Internal::String::~String(this + 4);
}
