/*
 * XREFs of ??1vector_iterator@?$vector_range@U?$IVectorView@PEAVTileId@StartScreen@UI@WindowsUdk@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180066E50
 * Callers:
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveItemsFromCollection_::_1_::dtor$7 @ 0x1800B96D3 (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--RetrieveItemsFromCollection_--.c)
 *     _MobilityExperience::CDPActivityHelper::GetActivityStoresForSupportedWebAccounts_::_1_::dtor$2 @ 0x1800B96E5 (_MobilityExperience--CDPActivityHelper--GetActivityStoresForSupportedWebAccounts_--_1_--dtor$2.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ExtractTargetedContentTilesInCollection_::_1_::dtor$2 @ 0x1800BC404 (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--ExtractTargetedContentTilesInC.c)
 *     _StartDocked::GetStartDefaultPins_::_1_::dtor$4 @ 0x1800BC43A (_StartDocked--GetStartDefaultPins_--_1_--dtor$4.c)
 *     _StartDocked::GetStartDefaultPins_::_1_::dtor$5 @ 0x1800BC44C (_StartDocked--GetStartDefaultPins_--_1_--dtor$5.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveItemsFromCollection_::_1_::dtor$8 @ 0x1800BC6EF (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--RetrieveItemsFrom_ea_1800BC6EF.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::vector_range<Windows::Foundation::Collections::IVectorView<WindowsUdk::UI::StartScreen::TileId *>,wil::err_exception_policy>::vector_iterator::~vector_iterator(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 16));
}
