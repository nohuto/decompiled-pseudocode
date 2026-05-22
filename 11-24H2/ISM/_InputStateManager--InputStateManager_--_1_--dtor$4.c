/*
 * XREFs of _InputStateManager::InputStateManager_::_1_::dtor$4 @ 0x1801D273D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall InputStateManager::InputStateManager_::_1_::dtor_4(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::~unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>(
    (wil::details **)(*(_QWORD *)(a2 + 64) + 64LL),
    a2,
    a3);
}
