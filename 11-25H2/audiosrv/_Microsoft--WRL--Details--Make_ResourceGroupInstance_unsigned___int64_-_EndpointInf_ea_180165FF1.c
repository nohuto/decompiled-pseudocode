/*
 * XREFs of _Microsoft::WRL::Details::Make_ResourceGroupInstance_unsigned___int64_&_EndpointInfo_&_unsigned_short_(&)[257]_unsigned_long_&__::_1_::dtor$2 @ 0x180165FF1
 * Callers:
 *     <none>
 * Callees:
 *     ?OnEndpointUnavailableForUse@CBaseStreamGroupProxy@@UEAAXPEBG@Z @ 0x180087080 (-OnEndpointUnavailableForUse@CBaseStreamGroupProxy@@UEAAXPEBG@Z.c)
 */

void __fastcall Microsoft::WRL::Details::Make_ResourceGroupInstance_unsigned___int64___EndpointInfo___unsigned_short_____257__unsigned_long____::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  CBaseStreamGroupProxy::OnEndpointUnavailableForUse(
    *(CBaseStreamGroupProxy **)(a2 + 72),
    *(const unsigned __int16 **)(a2 + 64));
}
