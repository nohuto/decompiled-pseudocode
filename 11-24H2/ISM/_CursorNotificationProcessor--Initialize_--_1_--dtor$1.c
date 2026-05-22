/*
 * XREFs of _CursorNotificationProcessor::Initialize_::_1_::dtor$1 @ 0x1801D655A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CursorNotificationProcessor::Initialize_::_1_::dtor_1(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::~unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>(
    (wil::details **)(a2 + 64),
    a2,
    a3);
}
