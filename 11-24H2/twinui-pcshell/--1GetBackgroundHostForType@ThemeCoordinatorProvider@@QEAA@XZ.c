/*
 * XREFs of ??1GetBackgroundHostForType@ThemeCoordinatorProvider@@QEAA@XZ @ 0x180604BB0
 * Callers:
 *     ?GetBackgroundHostForType@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA_KW4BackgroundIdentifier@34567@_N@Z @ 0x180605334 (-GetBackgroundHostForType@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA.c)
 *     _winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::GetBackgroundHostForType_::_1_::dtor$1 @ 0x1806FF1EB (_winrt--Windows--Internal--UI--Themes--implementation--ThemeCoordinator--GetBackgro_ea_1806FF1EB.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VThemeCoordinatorProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18060511C (-Destroy@-$ActivityBase@VThemeCoordinatorProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflector.c)
 */

void __fastcall ThemeCoordinatorProvider::GetBackgroundHostForType::~GetBackgroundHostForType(
        ThemeCoordinatorProvider::GetBackgroundHostForType *this)
{
  *(_QWORD *)this = &ThemeCoordinatorProvider::GetBackgroundHostForType::`vftable';
  wil::ActivityBase<ThemeCoordinatorProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<ThemeCoordinatorProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ThemeCoordinatorProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
