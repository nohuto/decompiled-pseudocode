/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800299AC
 * Callers:
 *     _Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_c9532b930f253e78667049fecbd894a6____::_1_::dtor$2 @ 0x1800B76FF (_Windows--Internal--MakeOpLambda_0_Windows--Internal--CNoResult__lambda_c9532b930f253e78667049fe.c)
 *     _ContentManagement::ContentManagementService::ResolveLayoutBindingsAsync_::_1_::dtor$0 @ 0x1800B7A7C (_ContentManagement--ContentManagementService--ResolveLayoutBindingsAsync_--_1_--dtor$0.c)
 *     _ContentManagement::ContentManagementService::ProcessCreativeEventAsync_::_1_::dtor$3 @ 0x1800B7A8E (_ContentManagement--ContentManagementService--ProcessCreativeEventAsync_--_1_--dtor$3.c)
 *     _ContentManagement::ContentManagementService::ProcessCreativeEventAsync_::_1_::dtor$0 @ 0x1800B8890 (_ContentManagement--ContentManagementService--ProcessCreativeEventAsync_--_1_--dtor$0.c)
 *     _ContentManagement::ContentManagementService::ProcessCreativeEventAsync_::_1_::dtor$1 @ 0x1800B88A2 (_ContentManagement--ContentManagementService--ProcessCreativeEventAsync_--_1_--dtor$1.c)
 *     _Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::GetTriggeredItemsForStateAsync_::_1_::dtor$2 @ 0x1800B9F62 (_Windows--Services--TargetedContent--Internal--TargetedContentTriggerManagerStatics_ea_1800B9F62.c)
 *     _Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::GetTriggeredItemsForStateAsync_::_1_::dtor$3 @ 0x1800B9F74 (_Windows--Services--TargetedContent--Internal--TargetedContentTriggerManagerStatics_ea_1800B9F74.c)
 *     _MobilityExperienceManager::GetHasMobilityAccount_::_1_::dtor$7 @ 0x1800BC1BC (_MobilityExperienceManager--GetHasMobilityAccount_--_1_--dtor$7.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>(
        Windows::Internal::String *a1)
{
  Windows::Internal::String::~String(a1);
}
