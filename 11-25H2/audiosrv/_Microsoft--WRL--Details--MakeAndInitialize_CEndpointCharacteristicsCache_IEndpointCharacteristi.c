/*
 * XREFs of _Microsoft::WRL::Details::MakeAndInitialize_CEndpointCharacteristicsCache_IEndpointCharacteristicsCache_IPolicyConfigInternal___&_EffectPackConfigurationManager___&_IEndpointResourceManagerProvider___&__tlgProvider_t_const___&__::_1_::dtor$1 @ 0x180163ED8
 * Callers:
 *     <none>
 * Callees:
 *     ?OnEndpointUnavailableForUse@CBaseStreamGroupProxy@@UEAAXPEBG@Z @ 0x180087080 (-OnEndpointUnavailableForUse@CBaseStreamGroupProxy@@UEAAXPEBG@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAndInitialize_CEndpointCharacteristicsCache_IEndpointCharacteristicsCache_IPolicyConfigInternal_____EffectPackConfigurationManager_____IEndpointResourceManagerProvider______tlgProvider_t_const______::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  CBaseStreamGroupProxy::OnEndpointUnavailableForUse(
    *(CBaseStreamGroupProxy **)(a2 + 56),
    *(const unsigned __int16 **)(a2 + 48));
}
