/*
 * XREFs of _Microsoft::WRL::Details::Make_CMonitor_StreamConnectionSettings___bool__::_1_::dtor$2 @ 0x180170BFB
 * Callers:
 *     <none>
 * Callees:
 *     ?ReloadVolumeState@CVolumeControlBase@@UEAAXXZ @ 0x180073F20 (-ReloadVolumeState@CVolumeControlBase@@UEAAXXZ.c)
 */

void __fastcall Microsoft::WRL::Details::Make_CMonitor_StreamConnectionSettings___bool__::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  CVolumeControlBase::ReloadVolumeState(*(CVolumeControlBase **)(a2 + 48));
}
