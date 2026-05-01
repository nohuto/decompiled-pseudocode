/*
 * XREFs of std::_Optional_construct_base__anonymous_namespace_::DashboardExtensionVersion_::_Assign__anonymous_namespace_::DashboardExtensionVersion_ @ 0x1805C3798
 * Callers:
 *     ?IsDashboardExtensionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NXZ @ 0x180275678 (-IsDashboardExtensionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NX.c)
 *     ?IsDashboardExtensionVersionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180275788 (-IsDashboardExtensionVersionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ShowDashboardAsync$_ResumeCoro$1 @ 0x180281A80 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ShowDashboardAsync$_ResumeCor.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x180282D70 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 *     _lambda_7099901f832ab090231de188016256f4_::operator() @ 0x1805CBC6C (_lambda_7099901f832ab090231de188016256f4_--operator().c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::DismissDashboardAsync$_ResumeCoro$1 @ 0x1805CE4F0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--DismissDashboardAsync$_Resume.c)
 *     ?ToggleDashboardVisibility@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4DashboardInvokeType@Dashboard@3UI@WindowsUdk@6@URect@Foundation@56@@Z @ 0x1805D8144 (-ToggleDashboardVisibility@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync$_ResumeCoro$1 @ 0x1805D9CB0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--UpdateWidgetsTel_ea_1805D9CB0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Optional_construct_base__anonymous_namespace_::DashboardExtensionVersion_::_Assign__anonymous_namespace_::DashboardExtensionVersion_(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 56) )
    return anonymous_namespace_::DashboardExtensionVersion::operator_(a1, a2, a1, a2);
  v4 = *(_QWORD *)(a2 + 16);
  v5 = *(_QWORD *)(a2 + 8);
  result = *(_QWORD *)a2;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)a1 = result;
  *(_QWORD *)(a1 + 8) = v5;
  *(_QWORD *)(a1 + 16) = v4;
  *(_OWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 24);
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_QWORD *)(a2 + 48) = 7LL;
  *(_WORD *)(a2 + 24) = 0;
  *(_BYTE *)(a1 + 56) = 1;
  return result;
}
