/*
 * XREFs of winrt::Windows::Foundation::EventHandler_winrt::Windows::UI::Xaml::Media::RenderedEventArgs_::EventHandler_winrt::Windows::UI::Xaml::Media::RenderedEventArgs___lambda_6f20433e237056822ca4350483f9bb11___ @ 0x180292CE0
 * Callers:
 *     ?RegisterForEvents@?QXamlBaseViewController@@GuidedSnapAssistViewController@@UE$AAAXAEBUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@PE$AAVSwitcherControlBase@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18011652C (-RegisterForEvents@-QXamlBaseViewController@@GuidedSnapAssistViewController@@UE$AAAXAEBUXamlExpl.c)
 * Callees:
 *     ?InternalRelease@WeakReference@Platform@@AEAAXXZ @ 0x18003FC58 (-InternalRelease@WeakReference@Platform@@AEAAXXZ.c)
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x180293110 (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::EventHandler_winrt::Windows::UI::Xaml::Media::RenderedEventArgs_::EventHandler_winrt::Windows::UI::Xaml::Media::RenderedEventArgs___lambda_6f20433e237056822ca4350483f9bb11___(
        _QWORD *a1,
        Platform::WeakReference *a2)
{
  _QWORD *v4; // r8
  char *v6; // [rsp+38h] [rbp+10h]

  v6 = (char *)operator new(0x18uLL);
  winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v6 + 8));
  v4[2] = *(_QWORD *)a2;
  *(_QWORD *)a2 = 0LL;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *v4 = off_1808C3668;
  *a1 = v4;
  Platform::WeakReference::InternalRelease(a2);
  return a1;
}
