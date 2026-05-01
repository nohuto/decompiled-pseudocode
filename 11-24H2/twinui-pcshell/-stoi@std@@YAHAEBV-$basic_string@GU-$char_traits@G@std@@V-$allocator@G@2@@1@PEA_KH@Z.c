/*
 * XREFs of ?stoi@std@@YAHAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@PEA_KH@Z @ 0x18021D790
 * Callers:
 *     ?GetInvokeTypeFromContextAndAnimationProperties@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUhstring@6@UShellViewAnimationProperties@3UI@WindowsUdk@6@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180275210 (-GetInvokeTypeFromContextAndAnimationProperties@DashboardManager@implementation@Shell@Internal@W.c)
 *     _lambda_76f340d5d82a2ae937276f5837d7f307_::operator() @ 0x18046E408 (_lambda_76f340d5d82a2ae937276f5837d7f307_--operator().c)
 *     GetColorFromColorString @ 0x18047138C (GetColorFromColorString.c)
 *     ?GetTargetAppExtensionHelper@CopilotHotkeyManager@@AEAA?AUPropertyDetails@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UPropertySet@Collections@Foundation@Windows@winrt@@@Z @ 0x180625928 (-GetTargetAppExtensionHelper@CopilotHotkeyManager@@AEAA-AUPropertyDetails@@V-$basic_string@GU-$c.c)
 *     ?GetForLaunchUri@LaunchUriData@implementation@Shell@Internal@Windows@winrt@@SA?AV?$unique_ptr@ULaunchUriData@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@ULaunchUriData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@AEBUUri@Foundation@56@@Z @ 0x180666E24 (-GetForLaunchUri@LaunchUriData@implementation@Shell@Internal@Windows@winrt@@SA-AV-$unique_ptr@UL.c)
 * Callees:
 *     <none>
 */

void __fastcall std::stoi(wchar_t *String, wchar_t *a2)
{
  wchar_t *v2; // rbx
  _DWORD *v3; // rax
  _DWORD *v4; // rdi
  wchar_t *EndPtr; // [rsp+38h] [rbp+10h] BYREF

  EndPtr = a2;
  v2 = String;
  v3 = (_DWORD *)_o__errno(String, a2);
  v4 = v3;
  if ( *((_QWORD *)v2 + 3) > 7uLL )
    v2 = *(wchar_t **)v2;
  EndPtr = 0LL;
  *v3 = 0;
  wcstol(v2, &EndPtr, 10);
  if ( v2 == EndPtr )
  {
    std::_Xinvalid_argument("invalid stoi argument");
    __debugbreak();
  }
  if ( *v4 == 34 )
  {
    std::_Xout_of_range("stoi argument out of range");
    __debugbreak();
  }
}
