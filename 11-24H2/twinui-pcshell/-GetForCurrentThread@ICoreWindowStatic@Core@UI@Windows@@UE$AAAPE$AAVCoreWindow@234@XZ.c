/*
 * XREFs of ?GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ @ 0x1806B2FE0
 * Callers:
 *     ?CreateAndAppendTaskGroupVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAU?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@6@@Z @ 0x1806B1C84 (-CreateAndAppendTaskGroupVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUIS.c)
 *     ?CreateVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAU?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@6@@Z @ 0x1806B2058 (-CreateVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitas.c)
 *     ?GetForCurrentThread@CoreWindow@Core@UI@Windows@@SAPE$AAV1234@XZ @ 0x1806B2F30 (-GetForCurrentThread@CoreWindow@Core@UI@Windows@@SAPE$AAV1234@XZ.c)
 *     ?GetVirtualDesktopCollectionForSwitchItem@XamlAllUpViewController@@AE$AAAPE$AAUIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItem@3456@@Z @ 0x1806B3470 (-GetVirtualDesktopCollectionForSwitchItem@XamlAllUpViewController@@AE$AAAPE$AAUIVirtualDesktopCo.c)
 *     ?HandleMoveToCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x1806B36E4 (-HandleMoveToCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableSh.c)
 * Callees:
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x180040600 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x180040654 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180040900 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::UI::Core::ICoreWindowStatic::GetForCurrentThread(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v1 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 48LL))(a1, &v4);
  __abi_ThrowIfFailed(v1);
  v2 = __abi_winrt_ptr_ctor(v4);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v4);
  return v2;
}
