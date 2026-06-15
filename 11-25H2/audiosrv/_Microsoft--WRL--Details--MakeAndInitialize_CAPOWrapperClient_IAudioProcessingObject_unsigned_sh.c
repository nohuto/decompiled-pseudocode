/*
 * XREFs of _Microsoft::WRL::Details::MakeAndInitialize_CAPOWrapperClient_IAudioProcessingObject_unsigned_short_const___&_enum_APO_TYPE_&__GUID_const_&__::_1_::dtor$1 @ 0x180161E19
 * Callers:
 *     <none>
 * Callees:
 *     ?OnEndpointUnavailableForUse@CBaseStreamGroupProxy@@UEAAXPEBG@Z @ 0x180087080 (-OnEndpointUnavailableForUse@CBaseStreamGroupProxy@@UEAAXPEBG@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAndInitialize_CAPOWrapperClient_IAudioProcessingObject_unsigned_short_const_____enum_APO_TYPE____GUID_const____::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  CBaseStreamGroupProxy::OnEndpointUnavailableForUse(
    *(CBaseStreamGroupProxy **)(a2 + 40),
    *(const unsigned __int16 **)(a2 + 32));
}
