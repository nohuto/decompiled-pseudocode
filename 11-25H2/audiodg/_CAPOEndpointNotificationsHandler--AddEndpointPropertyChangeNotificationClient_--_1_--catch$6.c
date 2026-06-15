/*
 * XREFs of _CAPOEndpointNotificationsHandler::AddEndpointPropertyChangeNotificationClient_::_1_::catch$6 @ 0x140092FE8
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14005F4D4 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CAPOEndpointNotificationsHandler::AddEndpointPropertyChangeNotificationClient_::_1_::catch_6(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 40),
    (void *)0x39,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
    a4);
  return 0LL;
}
