/*
 * XREFs of ??0FadeNonVisibleItemsInvokePolicy@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUISwitchItemDataSource@Multitasking@3Internal@Windows@@VRect@Foundation@8@@Z @ 0x18023858C
 * Callers:
 *     ?CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ @ 0x1806BA7EC (-CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ.c)
 * Callees:
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x180040600 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x180040654 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180040900 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ?CreateInstance@__IFadeMinimizedAndItemsOnOtherMonitorsDismissPolicyFactory@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAVFadeMinimizedAndItemsOnOtherMonitorsDismissPolicy@2345@PE$AAUIFilterAnimatable@2345@VRect@Foundation@Windows@@@Z @ 0x1802AB88C (-CreateInstance@__IFadeMinimizedAndItemsOnOtherMonitorsDismissPolicyFactory@Switcher@Experiences.c)
 *     ?__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z @ 0x1802D9918 (-__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::FadeNonVisibleItemsInvokePolicy::FadeNonVisibleItemsInvokePolicy(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        void **a4)
{
  int ActivationFactoryByPCWSTR; // eax
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rbx
  _DWORD v11[4]; // [rsp+20h] [rbp-20h] BYREF
  __int128 v12; // [rsp+30h] [rbp-10h] BYREF
  __int64 v13; // [rsp+50h] [rbp+10h] BYREF
  __int64 v14; // [rsp+60h] [rbp+20h]

  v11[0] = -1246407288;
  v11[1] = 821418333;
  v11[2] = -1314985852;
  v11[3] = 615315765;
  v13 = 0LL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(
                                (__winRT *)L"WindowsInternal.ComposableShell.Experiences.Switcher.FadeNonVisibleItemsInvokePolicy",
                                v11,
                                (struct Platform::Guid *)&v13,
                                a4);
  __abi_ThrowIfFailed(ActivationFactoryByPCWSTR);
  v12 = *a3;
  v7 = WindowsInternal::ComposableShell::Experiences::Switcher::__IFadeMinimizedAndItemsOnOtherMonitorsDismissPolicyFactory::CreateInstance(
         v13,
         a2,
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
