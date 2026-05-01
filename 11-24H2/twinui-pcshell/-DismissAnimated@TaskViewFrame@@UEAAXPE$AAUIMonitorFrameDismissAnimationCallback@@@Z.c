/*
 * XREFs of ?DismissAnimated@TaskViewFrame@@UEAAXPE$AAUIMonitorFrameDismissAnimationCallback@@@Z @ 0x1801BA9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x180040600 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x180040654 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180040900 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800D6010 (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     ?DismissAnimated@?Q__ISwitcherControlBasePublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@SwitcherControlBase@2345@UE$AAAXPE$AAVAnimationCompletedEventHandler@2345@@Z @ 0x1801BABC8 (-DismissAnimated@-Q__ISwitcherControlBasePublicNonVirtuals@Switcher@Experiences@ComposableShell@.c)
 *     WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::AnimationCompletedEventHandler__lambda_c4c5c4b54f46ee55e98247dc2d6953d1___ @ 0x1801BAC40 (WindowsInternal--ComposableShell--Experiences--Switcher--AnimationCompletedEventHandler--Animati.c)
 *     ?PrepareDismissAnimation@?Q__ISwitcherControlBasePublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@SwitcherControlBase@2345@UE$AAAXXZ @ 0x1802B4900 (-PrepareDismissAnimation@-Q__ISwitcherControlBasePublicNonVirtuals@Switcher@Experiences@Composab.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall TaskViewFrame::DismissAnimated(_QWORD *a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rdi
  void *v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // r15
  __int64 v8; // rsi
  __int64 v9; // r12
  __int64 (__fastcall ***v10)(_QWORD, void *, void **); // rcx
  __int64 v11; // rsi
  int v12; // eax
  __int64 (__fastcall ***v13)(_QWORD, void *, void **); // rcx
  int v14; // eax
  const char *v15; // r9
  _QWORD v17[3]; // [rsp+30h] [rbp-48h] BYREF
  char v18; // [rsp+48h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v20; // [rsp+88h] [rbp+10h]
  __int64 v22; // [rsp+90h] [rbp+18h] BYREF
  _QWORD *v23; // [rsp+98h] [rbp+20h]

  try
  {
    v3 = __abi_winrt_ptr_ctor(a2);
    v20 = v3;
    v23 = a1;
    v4 = 0LL;
    if ( a1 )
      (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
    v5 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
    v22 = (__int64)v5;
    wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
      v17,
      (__int64)a1);
    v17[1] = __abi_winrt_ptr_ctor(v3);
    v6 = WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::AnimationCompletedEventHandler__lambda_c4c5c4b54f46ee55e98247dc2d6953d1___(
           v5,
           v17);
    v22 = v6;
    v7 = __abi_winrt_ptr_ctor(v6);
    __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v6);
    v8 = __abi_winrt_ptr_ctor(v7);
    v9 = __abi_winrt_ptr_ctor(v8);
    v17[2] = v9;
    v18 = 1;
    __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v8);
    v10 = (__int64 (__fastcall ***)(_QWORD, void *, void **))a1[18];
    v11 = 0LL;
    v22 = 0LL;
    if ( v10 )
    {
      v12 = (**v10)(
              v10,
              &_uuidof__AU__ISwitcherControlBasePublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__,
              (void **)&v22);
      __abi_ThrowIfFailed(v12);
      v11 = v22;
    }
    _PrepareDismissAnimation__Q__ISwitcherControlBasePublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__SwitcherControlBase_2345_UE_AAAXXZ(v11);
    __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v11);
    v13 = (__int64 (__fastcall ***)(_QWORD, void *, void **))a1[18];
    v22 = 0LL;
    if ( v13 )
    {
      v14 = (**v13)(
              v13,
              &_uuidof__AU__ISwitcherControlBasePublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__,
              (void **)&v22);
      __abi_ThrowIfFailed(v14);
      v4 = v22;
    }
    _DismissAnimated__Q__ISwitcherControlBasePublicNonVirtuals_Switcher_Experiences_ComposableShell_WindowsInternal__SwitcherControlBase_2345_UE_AAAXPE_AAVAnimationCompletedEventHandler_2345__Z(
      v4,
      v7);
    __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v4);
    __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v9);
    __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v7);
    (*(void (__fastcall **)(_QWORD *))(*a1 + 16LL))(a1);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xE3,
      (unsigned int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewframe.cpp",
      v15);
    v3 = v20;
  }
  return __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v3);
}
