/*
 * XREFs of ??$cx_safe_cast@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAUIInspectable@@@wil@@YAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$$QEAPEAUIInspectable@@@Z @ 0x180119CF0
 * Callers:
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlAltTabViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18007CCC0 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlAltTabViewController@@UE$AAAXPE$AAUISwi.c)
 *     ?GetItemForView@CachedDataSource@@QEBAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x180119C4C (-GetItemForView@CachedDataSource@@QEBAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Wi.c)
 * Callees:
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x180040600 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x180040654 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180040900 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall wil::cx_safe_cast<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,IInspectable *>(
        __int64 *a1)
{
  __int64 (__fastcall ***v1)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v2; // rsi
  __int64 v3; // rdi
  int v4; // eax
  __int64 v5; // rbx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 (__fastcall ***v8)(_QWORD, _QWORD, _QWORD); // [rsp+48h] [rbp+10h]
  __int64 v9; // [rsp+50h] [rbp+18h]

  v1 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))__abi_winrt_ptr_ctor(*a1);
  v2 = (__int64)v1;
  v8 = v1;
  v3 = 0LL;
  v7 = 0LL;
  if ( v1 )
  {
    v4 = (**v1)(v1, &GUID_76593595_88f6_40c9_bd90_6f1a79aec5b8, &v7);
    __abi_ThrowIfFailed(v4);
    v3 = v7;
  }
  v9 = v3;
  v5 = __abi_winrt_ptr_ctor(v3);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v3);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v2);
  return v5;
}
