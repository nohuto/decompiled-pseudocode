/*
 * XREFs of _Microsoft::WRL::Details::Make_CMonitor_StreamConnectionSettings___bool__::_1_::dtor$2 @ 0x180167659
 * Callers:
 *     <none>
 * Callees:
 *     ?OnEndpointUnavailableForUse@CBaseStreamGroupProxy@@UEAAXPEBG@Z @ 0x180087080 (-OnEndpointUnavailableForUse@CBaseStreamGroupProxy@@UEAAXPEBG@Z.c)
 */

void __fastcall Microsoft::WRL::Details::Make_CMonitor_StreamConnectionSettings___bool__::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  CBaseStreamGroupProxy::OnEndpointUnavailableForUse(
    *(CBaseStreamGroupProxy **)(a2 + 48),
    *(const unsigned __int16 **)(a2 + 40));
}
