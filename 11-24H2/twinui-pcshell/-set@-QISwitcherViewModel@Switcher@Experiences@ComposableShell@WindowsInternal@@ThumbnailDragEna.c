/*
 * XREFs of ?set@?QISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@ThumbnailDragEnabled@SwitcherViewModelBase@2345@UE$AAAX_N@Z @ 0x1802BB3BC
 * Callers:
 *     ?CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ @ 0x1806BA7EC (-CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ.c)
 * Callees:
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x180040600 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180040900 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall _set__QISwitcherViewModel_Switcher_Experiences_ComposableShell_WindowsInternal__ThumbnailDragEnabled_SwitcherViewModelBase_2345_UE_AAAX_N_Z(
        __int64 (__fastcall ***a1)(_QWORD, void *, __int64 *),
        __int64 a2)
{
  char v2; // bl
  __int64 v3; // rdi
  int v4; // eax
  int v5; // ebx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h]

  v2 = a2;
  v3 = 0LL;
  v6 = 0LL;
  if ( a1 )
  {
    v4 = (**a1)(a1, &_uuidof__AUISwitcherViewModel_Switcher_Experiences_ComposableShell_WindowsInternal__, &v6);
    __abi_ThrowIfFailed(v4);
    v3 = v6;
  }
  v7 = v3;
  LOBYTE(a2) = v2;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 72LL))(v3, a2);
  __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v3);
  __abi_ThrowIfFailed(v5);
}
