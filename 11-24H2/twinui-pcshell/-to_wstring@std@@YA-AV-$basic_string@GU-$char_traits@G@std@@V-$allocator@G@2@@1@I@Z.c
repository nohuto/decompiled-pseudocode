/*
 * XREFs of ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@I@Z @ 0x18018E184
 * Callers:
 *     ?UpdateShellRunningAnimationInShellPreference@TouchKeyboardExperienceManager@@AEAAXIPEBG_N@Z @ 0x18018DC14 (-UpdateShellRunningAnimationInShellPreference@TouchKeyboardExperienceManager@@AEAAXIPEBG_N@Z.c)
 *     ?GetViewTypesString@KBViewInfo@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x1802B5D44 (-GetViewTypesString@KBViewInfo@@QEBA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@s.c)
 *     ?UpdateViewMovingStateInShellPreference@TouchKeyboardExperienceManager@@AEAAXI_N@Z @ 0x180477F34 (-UpdateViewMovingStateInShellPreference@TouchKeyboardExperienceManager@@AEAAXI_N@Z.c)
 *     ?SetIconBadge@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUhstring@6@@Z @ 0x1805F5D74 (-SetIconBadge@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUhstring@.c)
 *     ?GetLaunchUri@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AUUri@Foundation@56@AEBURemoteDesktopProviderInfo@3456@W4Mode@CloudPCHelpers@@@Z @ 0x18064CA34 (-GetLaunchUri@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA-AU.c)
 *     _lambda_3e3d6084102ea12775201c324e2ccf34_::operator() @ 0x1806591AC (_lambda_3e3d6084102ea12775201c324e2ccf34_--operator().c)
 *     ?Execute@BootDisconnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x18066A100 (-Execute@BootDisconnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV-$shared_pt.c)
 * Callees:
 *     ??$_Construct@$00PEAG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEAG_K@Z @ 0x1800499A0 (--$_Construct@$00PEAG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEAG_K@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

_QWORD *__fastcall std::to_wstring(_QWORD *a1, unsigned int a2)
{
  _WORD *v4; // r9
  _BYTE v6[6]; // [rsp+5Ah] [rbp-1Eh] BYREF

  v4 = v6;
  do
  {
    *--v4 = a2 % 0xA + 48;
    a2 /= 0xAu;
  }
  while ( a2 );
  *(_OWORD *)a1 = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  if ( v4 == (_WORD *)v6 )
  {
    a1[2] = 0LL;
    a1[3] = 7LL;
    *(_WORD *)a1 = 0;
  }
  else
  {
    std::wstring::_Construct<1,unsigned short *>(a1, v4, (v6 - (_BYTE *)v4) >> 1);
  }
  return a1;
}
