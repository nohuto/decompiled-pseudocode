/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@UITransition@Transitions@Udwm@winrt@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAUHWND__@@UITransition@Transitions@Udwm@winrt@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@UITransition@Transitions@Udwm@winrt@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800E693C
 * Callers:
 *     ??1?$_Hash@V?$_Umap_traits@W4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@V?$_Uhash_compare@W4ShellTransitionType@Transitions@Udwm@winrt@@U?$hash@W4ShellTransitionType@Transitions@Udwm@winrt@@@std@@U?$equal_to@W4ShellTransitionType@Transitions@Udwm@winrt@@@6@@std@@V?$allocator@U?$pair@$$CBW4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@@std@@@7@$0A@@std@@@std@@QEAA@XZ @ 0x1800E6C20 (--1-$_Hash@V-$_Umap_traits@W4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@V-$_Uh.c)
 *     ??1?$list@U?$pair@QEAUHWND__@@UITransition@Transitions@Udwm@winrt@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UITransition@Transitions@Udwm@winrt@@@std@@@2@@std@@QEAA@XZ @ 0x1800E6C74 (--1-$list@U-$pair@QEAUHWND__@@UITransition@Transitions@Udwm@winrt@@@std@@V-$allocator@U-$pair@QE.c)
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@PEAUHWND__@@UITransition@Transitions@Udwm@winrt@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@UITransition@Transitions@Udwm@winrt@@@std@@@7@$0A@@std@@@std@@QEAA@XZ @ 0x1800E6CAC (--1_Clear_guard@-$_Hash@V-$_Umap_traits@PEAUHWND__@@UITransition@Transitions@Udwm@winrt@@V-$_Uha.c)
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@W4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@V?$_Uhash_compare@W4ShellTransitionType@Transitions@Udwm@winrt@@U?$hash@W4ShellTransitionType@Transitions@Udwm@winrt@@@std@@U?$equal_to@W4ShellTransitionType@Transitions@Udwm@winrt@@@6@@std@@V?$allocator@U?$pair@$$CBW4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@@std@@@7@$0A@@std@@@std@@QEAA@XZ @ 0x1800E6D28 (--1_Clear_guard@-$_Hash@V-$_Umap_traits@W4ShellTransitionType@Transitions@Udwm@winrt@@UITransiti.c)
 * Callees:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBW4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBW4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBW4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800E6970 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBW4ShellTransitionType@Transitions@Udwm@winrt.c)
 */

_QWORD *__fastcall std::_List_node<std::pair<HWND__ * const,winrt::Udwm::Transitions::ITransition>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<HWND__ * const,winrt::Udwm::Transitions::ITransition>,void *>>>(
        __int64 a1,
        __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v3; // rdx
  _QWORD *v4; // rbx

  result = *(_QWORD **)(a2 + 8);
  *result = 0LL;
  v3 = *(_QWORD **)a2;
  if ( v3 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      result = (_QWORD *)std::_List_node<std::pair<enum winrt::Udwm::Transitions::ShellTransitionType const,winrt::Udwm::Transitions::ITransition>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<enum winrt::Udwm::Transitions::ShellTransitionType const,winrt::Udwm::Transitions::ITransition>,void *>>>();
      v3 = v4;
    }
    while ( v4 );
  }
  return result;
}
