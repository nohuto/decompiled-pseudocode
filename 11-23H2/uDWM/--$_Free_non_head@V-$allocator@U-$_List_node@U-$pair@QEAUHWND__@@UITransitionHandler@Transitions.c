/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800FBD50
 * Callers:
 *     ??1?$list@U?$pair@$$CBW4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@@std@@V?$allocator@U?$pair@$$CBW4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@@std@@@2@@std@@QEAA@XZ @ 0x1800FC8B0 (--1-$list@U-$pair@$$CBW4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@@std@@V-.c)
 *     ??1?$unordered_map@W4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@U?$hash@W4ShellTransition@Transitions@Udwm@winrt@@@std@@U?$equal_to@W4ShellTransition@Transitions@Udwm@winrt@@@7@V?$allocator@U?$pair@$$CBW4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@@std@@@7@@std@@QEAA@XZ @ 0x1800FC91C (--1-$unordered_map@W4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@U-$hash@W4S.c)
 *     ??1TransitionManager@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800FC96C (--1TransitionManager@implementation@Transitions@Udwm@winrt@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001F154 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800470D0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

_QWORD *__fastcall std::_List_node<std::pair<HWND__ * const,winrt::Udwm::Transitions::ITransitionHandler>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<HWND__ * const,winrt::Udwm::Transitions::ITransitionHandler>,void *>>>(
        __int64 a1,
        __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v3; // rbx
  _QWORD *v4; // rdi

  result = *(_QWORD **)(a2 + 8);
  *result = 0LL;
  v3 = *(_QWORD **)a2;
  if ( *(_QWORD *)a2 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      if ( v3[3] )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)(v3 + 3));
      result = (_QWORD *)std::_Deallocate<16,0>(v3, 0x20uLL);
      v3 = v4;
    }
    while ( v4 );
  }
  return result;
}
