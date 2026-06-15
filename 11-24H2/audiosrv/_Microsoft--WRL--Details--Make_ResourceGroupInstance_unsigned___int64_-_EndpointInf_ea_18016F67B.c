/*
 * XREFs of _Microsoft::WRL::Details::Make_ResourceGroupInstance_unsigned___int64_&_EndpointInfo_&_unsigned_short_(&)[257]_unsigned_long_&__::_1_::dtor$2 @ 0x18016F67B
 * Callers:
 *     <none>
 * Callees:
 *     ?ReloadVolumeState@CVolumeControlBase@@UEAAXXZ @ 0x180073F20 (-ReloadVolumeState@CVolumeControlBase@@UEAAXXZ.c)
 */

void __fastcall Microsoft::WRL::Details::Make_ResourceGroupInstance_unsigned___int64___EndpointInfo___unsigned_short_____257__unsigned_long____::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  CVolumeControlBase::ReloadVolumeState(*(CVolumeControlBase **)(a2 + 72));
}
