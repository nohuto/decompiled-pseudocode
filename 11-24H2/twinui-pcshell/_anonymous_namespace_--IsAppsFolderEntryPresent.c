/*
 * XREFs of _anonymous_namespace_::IsAppsFolderEntryPresent @ 0x1805E6F0C
 * Callers:
 *     ?IsPinRequestorAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NPEAXV?$shared_ptr@VPinRequestContext@@@std@@_NAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z @ 0x18028FEE4 (-IsPinRequestorAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NPEAXV-$shar.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@AEAAXXZ @ 0x18028FD2C (-unconditional_release_ref@-$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@A.c)
 *     ?TryGetAppsFolderItem@@YA?AU?$com_ptr@UIShellItem@@@winrt@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x180290830 (-TryGetAppsFolderItem@@YA-AU-$com_ptr@UIShellItem@@@winrt@@V-$basic_string_view@GU-$char_traits@.c)
 */

char __fastcall anonymous_namespace_::IsAppsFolderEntryPresent(__int128 *a1)
{
  char v1; // dl
  _QWORD *AppsFolderItem; // rax
  char v3; // bl
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  if ( *((_QWORD *)a1 + 1)
    && (v5 = 0LL,
        v6 = *a1,
        AppsFolderItem = TryGetAppsFolderItem(&v7, (SecondaryTileIdentifierHelpers **)&v6, (__int64)&v5),
        v1 = 1,
        *AppsFolderItem) )
  {
    v3 = 1;
  }
  else
  {
    v3 = 0;
    if ( (v1 & 1) == 0 )
      return v3;
  }
  if ( v7 )
    winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref(&v7);
  return v3;
}
