/*
 * XREFs of _anonymous_namespace_::DashboardExtensionVersion::operator__ @ 0x1802112E0
 * Callers:
 *     ?IsDashboardExtensionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NXZ @ 0x180275678 (-IsDashboardExtensionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NX.c)
 *     ?IsDashboardExtensionVersionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180275788 (-IsDashboardExtensionVersionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x180282D70 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 * Callees:
 *     <none>
 */

bool __fastcall anonymous_namespace_::DashboardExtensionVersion::operator__(_DWORD **a1, __int64 a2)
{
  _DWORD *v2; // r8
  _DWORD *v3; // rax
  _DWORD *i; // rdx

  v2 = *(_DWORD **)(a2 + 8);
  v3 = *(_DWORD **)a2;
  for ( i = *a1; i != a1[1]; ++i )
  {
    if ( v3 == v2 )
      return 1;
    if ( *i < *v3 )
      return 0;
    if ( *i > *v3 )
      return 1;
    ++v3;
  }
  return v3 == v2;
}
