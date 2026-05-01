/*
 * XREFs of ??0VirtualDesktopBarElementViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIVirtualDesktopDataSource@Multitasking@3Internal@Windows@@PE$AAUIVirtualDesktopController@6378@W4SwitchItemCloseButtonBehavior@1234@VRect@Foundation@8@@Z @ 0x1806A9598
 * Callers:
 *     ?CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1806AAE64 (-CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ @ 0x1806BA7EC (-CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ.c)
 * Callees:
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x180040600 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x180040654 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180040900 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ?__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z @ 0x1802D9918 (-__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     ?CreateInstance@__IVirtualDesktopBarElementViewModelFactory@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAVVirtualDesktopBarElementViewModel@2345@PE$AAUIVirtualDesktopDataSource@Multitasking@4Internal@Windows@@PE$AAUIVirtualDesktopController@849Windows@@W4SwitchItemCloseButtonBehavior@2345@VRect@Foundation@Windows@@@Z @ 0x1806AAC24 (-CreateInstance@__IVirtualDesktopBarElementViewModelFactory@Switcher@Experiences@ComposableShell.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopBarElementViewModel::VirtualDesktopBarElementViewModel(
        __int64 a1,
        int a2,
        int a3,
        void **a4,
        __int128 *a5)
{
  int v5; // ebx
  int ActivationFactoryByPCWSTR; // eax
  __int64 Instance; // rbx
  __int64 v10; // rdi
  __int64 v11; // rbx
  _DWORD v13[4]; // [rsp+30h] [rbp-20h] BYREF
  __int128 v14; // [rsp+40h] [rbp-10h] BYREF
  __int64 v15; // [rsp+60h] [rbp+10h] BYREF

  v5 = (int)a4;
  v13[0] = 567974803;
  v13[1] = 965197782;
  v13[2] = -405099375;
  v13[3] = 1050706698;
  v15 = 0LL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(
                                (__winRT *)L"WindowsInternal.ComposableShell.Experiences.Switcher.VirtualDesktopBarElementViewModel",
                                (struct Platform::Guid *)v13,
                                (void **)&v15,
                                a4);
  __abi_ThrowIfFailed(ActivationFactoryByPCWSTR);
  v14 = *a5;
  Instance = WindowsInternal::ComposableShell::Experiences::Switcher::__IVirtualDesktopBarElementViewModelFactory::CreateInstance(
               v15,
               a2,
               a3,
               v5,
               (__int64)&v14);
  a5 = (__int128 *)Instance;
  v10 = __abi_winrt_ptr_ctor(Instance);
  a5 = (__int128 *)v10;
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(Instance);
  v11 = __abi_winrt_ptr_ctor(v10);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v10);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v15);
  return v11;
}
