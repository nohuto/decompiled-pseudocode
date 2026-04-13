/*
 * XREFs of ?Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ @ 0x180069140
 * Callers:
 *     __lambda_f0f613184e0e47442428064dff914436_::operator()_::_1_::catch$12 @ 0x1800B98F8 (__lambda_f0f613184e0e47442428064dff914436_--operator()_--_1_--catch$12.c)
 *     _MobilityExperience::CDPActivityHelper::GetActivityStoresForSupportedWebAccounts_::_1_::catch$14 @ 0x1800B9A56 (_MobilityExperience--CDPActivityHelper--GetActivityStoresForSupportedWebAccounts_--_1_--catch$14.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::GetSubscriptionContainer_::_1_::catch$6 @ 0x1800BC7AB (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--GetSubscriptionCo_ea_1800BC7AB.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveItemsFromCollection_::_1_::catch$23 @ 0x1800BCA21 (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--RetrieveItemsFrom_ea_1800BCA21.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveLayoutAndItems_::_1_::catch$23 @ 0x1800BCAF2 (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--RetrieveLayoutAnd_ea_1800BCAF2.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveLayoutAndItems_::_1_::catch$24 @ 0x1800BCB70 (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--RetrieveLayoutAnd_ea_1800BCB70.c)
 * Callees:
 *     ??$ReportFailure_CaughtExceptionMsg@$01@details@wil@@YAJPEAXIPEBD1101PEAD@Z @ 0x180066144 (--$ReportFailure_CaughtExceptionMsg@$01@details@wil@@YAJPEAXIPEBD1101PEAD@Z.c)
 */

__int64 wil::details::in1diag3::Log_CaughtExceptionMsg(
        wil::details::in1diag3 *this,
        unsigned __int16 *a2,
        int a3,
        const char *a4,
        const char *a5,
        ...)
{
  int v6; // [rsp+20h] [rbp-38h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  return wil::details::ReportFailure_CaughtExceptionMsg<2>(
           (int)this,
           a2,
           a3,
           (__int64)a4,
           v6,
           retaddr,
           (unsigned __int64)a4,
           (char *)&a5);
}
