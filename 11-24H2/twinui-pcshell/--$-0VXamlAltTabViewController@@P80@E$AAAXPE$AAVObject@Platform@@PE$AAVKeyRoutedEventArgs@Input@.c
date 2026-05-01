/*
 * XREFs of ??$?0VXamlAltTabViewController@@P80@E$AAAXPE$AAVObject@Platform@@PE$AAVKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z@KeyEventHandler@Input@Xaml@UI@Windows@@QE$AAA@PE$AAVXamlAltTabViewController@@P85@E$AAAXPE$AAVObject@Platform@@PE$AAVKeyRoutedEventArgs@1234@@ZW4CallbackContext@7@_N@Z @ 0x180118858
 * Callers:
 *     ?RegisterForEvents@?QXamlBaseViewController@@XamlAltTabViewController@@UE$AAAXAEBUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@PE$AAVSwitcherControlBase@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180117EBC (-RegisterForEvents@-QXamlBaseViewController@@XamlAltTabViewController@@UE$AAAXAEBUXamlExplorerHo.c)
 * Callees:
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x180118944 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 *     ??0__abi_PointerToMemberWeakRefCapture@?1???$?0VXamlAltTabViewController@@P80@E$AAAXPE$AAVObject@Platform@@PE$AAVKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z@KeyEventHandler@Input@Xaml@UI@Windows@@QE$AAA@PE$AAVXamlAltTabViewController@@P86@E$AAAXPE$AAVObject@Platform@@PE$AAVKeyRoutedEventArgs@2345@@ZW4CallbackContext@8@_N@Z@QEAA@03@Z @ 0x18011897C (--0__abi_PointerToMemberWeakRefCapture@-1---$-0VXamlAltTabViewController@@P80@E$AAAXPE$AAVObject.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall Windows::UI::Xaml::Input::KeyEventHandler::KeyEventHandler(_QWORD *a1, __int64 a2, __int128 *a3)
{
  __int64 v6; // rax
  __int128 v8; // [rsp+30h] [rbp-18h] BYREF

  Platform::Delegate::Delegate(a1 + 2);
  *a1 = &Windows::UI::Xaml::Input::KeyEventHandler::`vftable'{for `__abi_IUnknown'};
  a1[1] = &Windows::UI::Xaml::Input::KeyEventHandler::`vftable'{for `Platform::Object'};
  a1[2] = &Windows::UI::Xaml::Input::KeyEventHandler::`vftable';
  __abi_FTMWeakRefData::__abi_FTMWeakRefData(a1 + 3);
  a1[37] = a1 + 5;
  v6 = 0LL;
  if ( a1 != (_QWORD *)-40LL )
  {
    v8 = *a3;
    v6 = `Windows::UI::Xaml::Input::KeyEventHandler::KeyEventHandler'::`2'::__abi_PointerToMemberWeakRefCapture::__abi_PointerToMemberWeakRefCapture(
           a1 + 5,
           a2,
           &v8);
  }
  a1[37] = v6;
  return a1;
}
