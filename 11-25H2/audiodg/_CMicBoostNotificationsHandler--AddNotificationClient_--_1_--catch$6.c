/*
 * XREFs of _CMicBoostNotificationsHandler::AddNotificationClient_::_1_::catch$6 @ 0x140095F02
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14005DFE4 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CMicBoostNotificationsHandler::AddNotificationClient_::_1_::catch_6(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0x7A,
                           (int)"avcore\\audiocore\\server\\audiodg\\exe\\apomicboostnotificationshandler.cpp",
                           a4);
  return 0LL;
}
