/*
 * XREFs of ?_Equal@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_NQEBG@Z @ 0x18018ED94
 * Callers:
 *     ?GetInvokeTypeFromContextAndAnimationProperties@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUhstring@6@UShellViewAnimationProperties@3UI@WindowsUdk@6@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180275210 (-GetInvokeTypeFromContextAndAnimationProperties@DashboardManager@implementation@Shell@Internal@W.c)
 *     ?IsNotificationCenterDisabledByPolicy@CActionCenterExperienceManager@@AEAA_NXZ @ 0x18036E6E4 (-IsNotificationCenterDisabledByPolicy@CActionCenterExperienceManager@@AEAA_NXZ.c)
 *     ?IsControlCenterDisabledByPolicy@CControlCenterExperienceManager@@AEAA_NXZ @ 0x180375118 (-IsControlCenterDisabledByPolicy@CControlCenterExperienceManager@@AEAA_NXZ.c)
 *     _anonymous_namespace_::IsCurrentProcessExplorer @ 0x1803BCBC4 (_anonymous_namespace_--IsCurrentProcessExplorer.c)
 *     ?ShouldShowEmojiTipsOnHotKey@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAE@Z @ 0x180487940 (-ShouldShowEmojiTipsOnHotKey@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAE@Z.c)
 *     ?GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA?AUTargetAppExtensionDetails@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180624D18 (-GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA-AUTargetAppExtensionDetails@@V-$basic_s.c)
 *     ?UpdateTargetAppDetailsCacheIfNecessary@CopilotHotkeyManager@@AEAAXXZ @ 0x1806366E4 (-UpdateTargetAppDetailsCacheIfNecessary@CopilotHotkeyManager@@AEAAXXZ.c)
 *     ?GetLaunchUri@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AUUri@Foundation@56@AEBURemoteDesktopProviderInfo@3456@W4Mode@CloudPCHelpers@@@Z @ 0x18064CA34 (-GetLaunchUri@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA-AU.c)
 *     ?evaluate@_tip_RemoteSessionOnStateChangedTipTest@@QEAAXXZ @ 0x18065D554 (-evaluate@_tip_RemoteSessionOnStateChangedTipTest@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall std::wstring::_Equal(char *a1, char *a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  signed __int64 v4; // rcx
  char v5; // r9

  v2 = -1LL;
  do
    ++v2;
  while ( *(_WORD *)&a2[2 * v2] );
  v3 = *((_QWORD *)a1 + 2);
  if ( *((_QWORD *)a1 + 3) > 7uLL )
    a1 = *(char **)a1;
  if ( v3 != v2 )
    return 0;
  v4 = a1 - a2;
  v5 = 1;
  while ( v3 )
  {
    if ( *(_WORD *)&a2[v4] != *(_WORD *)a2 )
      return 0;
    --v3;
    a2 += 2;
  }
  return v5;
}
