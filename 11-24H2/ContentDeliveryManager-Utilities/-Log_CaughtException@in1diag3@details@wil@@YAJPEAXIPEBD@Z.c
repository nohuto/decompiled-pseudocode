/*
 * XREFs of ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180034EF8
 * Callers:
 *     __lambda_800e508e6e8d5695e8e6024fa20f4fcf_::operator()_::_1_::catch$26 @ 0x1800B7D3B (__lambda_800e508e6e8d5695e8e6024fa20f4fcf_--operator()_--_1_--catch$26.c)
 *     _Mobility::Pinning::CreateYourPhoneTaskbarIconIfNeeded_::_1_::catch$2 @ 0x1800B7DD2 (_Mobility--Pinning--CreateYourPhoneTaskbarIconIfNeeded_--_1_--catch$2.c)
 *     __lambda_c4f33cd8951f7dbea74fc386c4e48681_::operator()_::_1_::catch$4 @ 0x1800B9228 (__lambda_c4f33cd8951f7dbea74fc386c4e48681_--operator()_--_1_--catch$4.c)
 *     __lambda_69a92d371a2c7508f1f4ce514cd8b1f7_::operator()_::_1_::catch$7 @ 0x1800BAAA9 (__lambda_69a92d371a2c7508f1f4ce514cd8b1f7_--operator()_--_1_--catch$7.c)
 *     _CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler::RemoveRule_::_1_::catch$14 @ 0x1800BB008 (_CreativeFramework--RuleSetHandlers--DiagTrackRuleSetHandler--RemoveRule_--_1_--catch$14.c)
 *     __lambda_de7ca9b0ec13d6a85971aebf8330bbf3_::operator()_::_1_::catch$1 @ 0x1800BB130 (__lambda_de7ca9b0ec13d6a85971aebf8330bbf3_--operator()_--_1_--catch$1.c)
 *     _CreativeFramework::Actions::IsMsaConnected_::_1_::catch$26 @ 0x1800BB550 (_CreativeFramework--Actions--IsMsaConnected_--_1_--catch$26.c)
 *     _CreativeFramework::Actions::SwapStartTileService::EnumerateAliasMap_::_1_::catch$10 @ 0x1800BB9B4 (_CreativeFramework--Actions--SwapStartTileService--EnumerateAliasMap_--_1_--catch$10.c)
 *     _CreativeFramework::Actions::LaunchCortanaService::LaunchCortana_::_1_::catch$19 @ 0x1800BBF79 (_CreativeFramework--Actions--LaunchCortanaService--LaunchCortana_--_1_--catch$19.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ActivateSubscription_::_1_::catch$4 @ 0x1800BC6B4 (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--ActivateSubscription_--_1_--ca.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveLayoutAndItems_::_1_::catch$22 @ 0x1800BCAB5 (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--RetrieveLayoutAnd_ea_1800BCAB5.c)
 * Callees:
 *     ??$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x180026FE8 (--$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException<2>((int)this, (int)a2, a3);
}
