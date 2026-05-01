/*
 * XREFs of ??R_lambda_15c97bd425bccf1dc952b5ea6cd80dbc_@@QEBA@XZ @ 0x18069EEA4
 * Callers:
 *     ?reset@?$unique_winrt_event_token_cx@VGamingTaskView@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAAXXZ @ 0x1806A2DE8 (-reset@-$unique_winrt_event_token_cx@VGamingTaskView@Switcher@Experiences@ComposableShell@Window.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x180040654 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180040900 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _lambda_15c97bd425bccf1dc952b5ea6cd80dbc_::operator()(_QWORD *a1)
{
  __int64 v1; // rdi
  __int64 result; // rax
  __int64 v3; // [rsp+30h] [rbp+8h]

  try
  {
    v3 = Platform::Details::ResolveWeakReference(
           &_uuidof__AVGamingTaskView_Switcher_Experiences_ComposableShell_WindowsInternal__,
           *a1 + 8LL);
    v1 = __abi_winrt_ptr_ctor(v3);
    __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v3);
    result = v1;
  }
  catch ( ... )
  {
    return 0LL;
  }
  return result;
}
