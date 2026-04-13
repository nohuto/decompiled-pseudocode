/*
 * XREFs of _CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler::RemoveRule_::_1_::catch$14 @ 0x1800BB008
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180034EF8 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler::RemoveRule_::_1_::catch_14(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 1064),
    (void *)0x58,
    (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\diagtrackrulesethandler.cpp",
    a4);
  return 0LL;
}
