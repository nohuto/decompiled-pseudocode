/*
 * XREFs of ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@GuidedSnapAssistViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1806BCCE8
 * Callers:
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@GuidedSnapAssistViewController@@WBA@E$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1806BCDF0 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@GuidedSnapAssistViewController@@WBA@E$AAAXP.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x180040654 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180040900 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CreationThreadDispatcher::RunAsync__lambda_6bd17a0f38fc15379b652e4a7dca1691___ @ 0x1806BC2F4 (CreationThreadDispatcher--RunAsync__lambda_6bd17a0f38fc15379b652e4a7dca1691___.c)
 *     _lambda_6bd17a0f38fc15379b652e4a7dca1691_::__lambda_6bd17a0f38fc15379b652e4a7dca1691_ @ 0x1806BC7B8 (_lambda_6bd17a0f38fc15379b652e4a7dca1691_--__lambda_6bd17a0f38fc15379b652e4a7dca1691_.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall _InvokeSwitchItem__QIXamlMultitaskingViewController__GuidedSnapAssistViewController__UE_AAAXPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Z(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 v5; // rbx
  int v6; // eax
  _QWORD v8[3]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v9; // [rsp+38h] [rbp-18h] BYREF
  __int64 v10; // [rsp+40h] [rbp-10h]
  __int64 v11; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]

  v3 = __abi_winrt_ptr_ctor(a2);
  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 384) + 176LL) )
  {
    *(_BYTE *)(a1 + 368) = 1;
    v4 = __abi_winrt_ptr_ctor(a1);
    v9 = __abi_winrt_ptr_ctor(v4);
    v10 = __abi_winrt_ptr_ctor(v3);
    v11 = __abi_winrt_ptr_ctor(a1);
    v5 = *(_QWORD *)(a1 + 88);
    v8[0] = __abi_winrt_ptr_ctor(v9);
    v8[1] = __abi_winrt_ptr_ctor(v10);
    v8[2] = __abi_winrt_ptr_ctor(v11);
    v6 = CreationThreadDispatcher::RunAsync__lambda_6bd17a0f38fc15379b652e4a7dca1691___(v5, (volatile int *)v8);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x72,
        (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\guidedsnapassistviewcontroller.cpp",
        (const char *)(unsigned int)v6,
        v8[0]);
    lambda_6bd17a0f38fc15379b652e4a7dca1691_::__lambda_6bd17a0f38fc15379b652e4a7dca1691_(&v9);
    __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v4);
  }
  return __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v3);
}
