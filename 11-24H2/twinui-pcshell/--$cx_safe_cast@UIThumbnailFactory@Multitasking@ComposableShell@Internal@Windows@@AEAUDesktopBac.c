/*
 * XREFs of ??$cx_safe_cast@UIThumbnailFactory@Multitasking@ComposableShell@Internal@Windows@@AEAUDesktopBackgroundThumbnailFactory@Desktop@2Shell@45winrt@@@wil@@YAPE$AAUIThumbnailFactory@Multitasking@ComposableShell@Internal@Windows@@AEAUDesktopBackgroundThumbnailFactory@Desktop@2Shell@45winrt@@@Z @ 0x1802B40B4
 * Callers:
 *     ?CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@ComposableShell@WindowsInternal@@AEBURect@Foundation@Windows@winrt@@PEAUIImmersiveMonitor@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18011D884 (-CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@Compo.c)
 * Callees:
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x180040600 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x180040654 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180040900 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall wil::cx_safe_cast<Windows::Internal::ComposableShell::Multitasking::IThumbnailFactory,winrt::Windows::Internal::Shell::Multitasking::Desktop::DesktopBackgroundThumbnailFactory &>(
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
    v4 = (**v1)(v1, &_uuidof__AUIThumbnailFactory_Multitasking_ComposableShell_Internal_Windows__, &v7);
    __abi_ThrowIfFailed(v4);
    v3 = v7;
  }
  v9 = v3;
  v5 = __abi_winrt_ptr_ctor(v3);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v3);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v2);
  return v5;
}
