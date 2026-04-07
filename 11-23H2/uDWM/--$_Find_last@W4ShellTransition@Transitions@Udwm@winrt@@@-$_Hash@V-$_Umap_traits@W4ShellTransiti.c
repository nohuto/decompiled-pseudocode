/*
 * XREFs of ??$_Find_last@W4ShellTransition@Transitions@Udwm@winrt@@@?$_Hash@V?$_Umap_traits@W4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@V?$_Uhash_compare@W4ShellTransition@Transitions@Udwm@winrt@@U?$hash@W4ShellTransition@Transitions@Udwm@winrt@@@std@@U?$equal_to@W4ShellTransition@Transitions@Udwm@winrt@@@6@@std@@V?$allocator@U?$pair@$$CBW4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@@std@@@7@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBW4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@@std@@PEAX@std@@@1@AEBW4ShellTransition@Transitions@Udwm@winrt@@_K@Z @ 0x18002FD10
 * Callers:
 *     ?GetHandler@TransitionManager@implementation@Transitions@Udwm@winrt@@AEAA?AUITransitionHandler@345@W4ShellTransition@345@@Z @ 0x18002FAC0 (-GetHandler@TransitionManager@implementation@Transitions@Udwm@winrt@@AEAA-AUITransitionHandler@3.c)
 *     ??$_Try_emplace@AEBW4ShellTransition@Transitions@Udwm@winrt@@$$V@?$_Hash@V?$_Umap_traits@W4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@V?$_Uhash_compare@W4ShellTransition@Transitions@Udwm@winrt@@U?$hash@W4ShellTransition@Transitions@Udwm@winrt@@@std@@U?$equal_to@W4ShellTransition@Transitions@Udwm@winrt@@@6@@std@@V?$allocator@U?$pair@$$CBW4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@@std@@@7@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBW4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@@std@@PEAX@std@@_N@1@AEBW4ShellTransition@Transitions@Udwm@winrt@@@Z @ 0x18002FD5C (--$_Try_emplace@AEBW4ShellTransition@Transitions@Udwm@winrt@@$$V@-$_Hash@V-$_Umap_traits@W4Shell.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<enum winrt::Udwm::Transitions::ShellTransition,winrt::Udwm::Transitions::ITransitionHandler,std::_Uhash_compare<enum winrt::Udwm::Transitions::ShellTransition,std::hash<enum winrt::Udwm::Transitions::ShellTransition>,std::equal_to<enum winrt::Udwm::Transitions::ShellTransition>>,std::allocator<std::pair<enum winrt::Udwm::Transitions::ShellTransition const,winrt::Udwm::Transitions::ITransitionHandler>>,0>>::_Find_last<enum winrt::Udwm::Transitions::ShellTransition>(
        _QWORD *a1,
        _QWORD *a2,
        _DWORD *a3,
        __int64 a4)
{
  __int64 v4; // r11
  __int64 v5; // r10
  __int64 v6; // rax
  __int64 v7; // r9

  v4 = a1[3];
  v5 = a1[1];
  v6 = 2 * (a4 & a1[6]);
  v7 = *(_QWORD *)(v4 + 16 * (a4 & a1[6]) + 8);
  if ( v7 == v5 )
  {
    *a2 = v5;
  }
  else
  {
    while ( 1 )
    {
      if ( *a3 == *(_DWORD *)(v7 + 16) )
      {
        *a2 = *(_QWORD *)v7;
        a2[1] = v7;
        return a2;
      }
      if ( v7 == *(_QWORD *)(v4 + 8 * v6) )
        break;
      v7 = *(_QWORD *)(v7 + 8);
    }
    *a2 = v7;
  }
  a2[1] = 0LL;
  return a2;
}
