/*
 * XREFs of ?CreateDesktopInvokeAnimationProvider@SnapAssistAnimationProviderFactory@Switcher@Experiences@ComposableShell@WindowsInternal@@SAPE$AAUIAnimationProvider@2345@PE$AAUIInvokeAnimationPolicy@2345@VAnimationProviderArgs@2345@@Z @ 0x18011E1DC
 * Callers:
 *     ?CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@ComposableShell@WindowsInternal@@AEBURect@Foundation@Windows@winrt@@PEAUIImmersiveMonitor@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18011D884 (-CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@Compo.c)
 * Callees:
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x180040600 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x180040654 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180040900 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ?CreateInstance@__IFadeMinimizedAndItemsOnOtherMonitorsDismissPolicyFactory@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAVFadeMinimizedAndItemsOnOtherMonitorsDismissPolicy@2345@PE$AAUIFilterAnimatable@2345@VRect@Foundation@Windows@@@Z @ 0x1802AB88C (-CreateInstance@__IFadeMinimizedAndItemsOnOtherMonitorsDismissPolicyFactory@Switcher@Experiences.c)
 *     ?__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z @ 0x1802D9918 (-__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::SnapAssistAnimationProviderFactory::CreateDesktopInvokeAnimationProvider(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        void **a4)
{
  int ActivationFactoryByPCWSTR; // eax
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rbx
  _DWORD v11[4]; // [rsp+20h] [rbp-20h] BYREF
  __int128 v12; // [rsp+30h] [rbp-10h] BYREF
  __int64 v13; // [rsp+58h] [rbp+18h] BYREF
  __int64 v14; // [rsp+60h] [rbp+20h]

  v11[0] = 933236998;
  v11[1] = 809016145;
  v11[2] = 1730322588;
  v11[3] = 609234229;
  v13 = 0LL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(
                                (__winRT *)L"WindowsInternal.ComposableShell.Experiences.Switcher.SnapAssistAnimationProviderFactory",
                                v11,
                                (struct Platform::Guid *)&v13,
                                a4);
  __abi_ThrowIfFailed(ActivationFactoryByPCWSTR);
  v12 = *a2;
  v7 = WindowsInternal::ComposableShell::Experiences::Switcher::__IFadeMinimizedAndItemsOnOtherMonitorsDismissPolicyFactory::CreateInstance(
         v13,
         a1,
         &v12);
  v14 = v7;
  v8 = __abi_winrt_ptr_ctor(v7);
  v14 = v8;
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v7);
  v9 = __abi_winrt_ptr_ctor(v8);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v8);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v13);
  return v9;
}
