/*
 * XREFs of ?GetItemForView@CachedDataSource@@QEBAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x180119C4C
 * Callers:
 *     ?Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x180118BB0 (-Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x180040654 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180040900 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ??$cx_safe_cast@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAUIInspectable@@@wil@@YAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$$QEAPEAUIInspectable@@@Z @ 0x180119CF0 (--$cx_safe_cast@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAUIInspectable@@@w.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CachedDataSource::GetItemForView(__int64 **a1, __int64 a2)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  if ( !a2 )
    return 0LL;
  v7 = 0LL;
  v2 = *a1;
  v3 = *v2;
  v7 = 0LL;
  if ( (*(int (__fastcall **)(__int64 *, __int64, GUID *, __int64 *))(v3 + 32))(
         v2,
         a2,
         &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
         &v7) < 0 )
  {
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v7);
    return 0LL;
  }
  v8 = v7;
  v4 = wil::cx_safe_cast<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,IInspectable *>(&v8);
  v8 = v4;
  v5 = __abi_winrt_ptr_ctor(v4);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v4);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v5;
}
