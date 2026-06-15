/*
 * XREFs of _Microsoft::WRL::Details::MakeAndInitialize_CExclusiveModeListener_CExclusiveModeListener__tlgProvider_t_const___&_bool_&__::_1_::dtor$1 @ 0x180168437
 * Callers:
 *     <none>
 * Callees:
 *     ?OnEndpointUnavailableForUse@CBaseStreamGroupProxy@@UEAAXPEBG@Z @ 0x180087080 (-OnEndpointUnavailableForUse@CBaseStreamGroupProxy@@UEAAXPEBG@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAndInitialize_CExclusiveModeListener_CExclusiveModeListener__tlgProvider_t_const_____bool____::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  CBaseStreamGroupProxy::OnEndpointUnavailableForUse(
    *(CBaseStreamGroupProxy **)(a2 + 88),
    *(const unsigned __int16 **)(a2 + 64));
}
