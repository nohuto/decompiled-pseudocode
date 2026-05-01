/*
 * XREFs of _XamlGamingTaskViewHost::CreateGamingTaskBarViewModelAsync$_ResumeCoro$1_::_1_::dtor$5 @ 0x180704B8C
 * Callers:
 *     <none>
 * Callees:
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180040900 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 */

__int64 __fastcall XamlGamingTaskViewHost::CreateGamingTaskBarViewModelAsync__ResumeCoro_1_::_1_::dtor_5(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rcx

  a2[14] = a2[26] + 88LL;
  v2 = *(_QWORD *)a2[14];
  a2[15] = a2[26] + 88LL;
  a2[16] = v2;
  *(_QWORD *)a2[15] = a2[16];
  a2[17] = a2[26] + 88LL;
  a2[18] = *(_QWORD *)a2[17];
  return __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(a2[18]);
}
