/*
 * XREFs of _Microsoft::WRL::Details::MakeAndInitialize_CAPOWrapperClient_IAudioProcessingObject_unsigned_short_const___&_enum_APO_TYPE_&__GUID_const_&__::_1_::dtor$1 @ 0x180169D54
 * Callers:
 *     <none>
 * Callees:
 *     ?ReloadVolumeState@CVolumeControlBase@@UEAAXXZ @ 0x180073F20 (-ReloadVolumeState@CVolumeControlBase@@UEAAXXZ.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAndInitialize_CAPOWrapperClient_IAudioProcessingObject_unsigned_short_const_____enum_APO_TYPE____GUID_const____::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  CVolumeControlBase::ReloadVolumeState(*(CVolumeControlBase **)(a2 + 40));
}
