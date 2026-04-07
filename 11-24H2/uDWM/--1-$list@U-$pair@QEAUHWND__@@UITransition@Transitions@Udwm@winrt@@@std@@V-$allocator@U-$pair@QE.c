/*
 * XREFs of ??1?$list@U?$pair@QEAUHWND__@@UITransition@Transitions@Udwm@winrt@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UITransition@Transitions@Udwm@winrt@@@std@@@2@@std@@QEAA@XZ @ 0x1800E6C74
 * Callers:
 *     _winrt::Udwm::Transitions::TransitionManager::TransitionManager_::_1_::dtor$3 @ 0x1800F78EF (_winrt--Udwm--Transitions--TransitionManager--TransitionManager_--_1_--dtor$3.c)
 *     _std::_Hash_std::_Umap_traits_HWND_____winrt::Udwm::Transitions::ITransition_std::_Uhash_compare_HWND_____std::hash_HWND______std::equal_to_HWND________std::allocator_std::pair_HWND_____const_winrt::Udwm::Transitions::ITransition____0___::_Hash_std::_Umap_traits_HWND_____winrt::Udwm::Transitions::ITransition_std::_Uhash_compare_HWND_____std::hash_HWND______std::equal_to_HWND________std::allocator_std::pair_HWND_____const_winrt::Udwm::Transitions::ITransition____0____::_1_::dtor$0 @ 0x1800F7905 (_std--_Hash_std--_Umap_traits_HWND_____winrt--Udwm--Transitions--ITransition_std--__ea_1800F7905.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@UITransition@Transitions@Udwm@winrt@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAUHWND__@@UITransition@Transitions@Udwm@winrt@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@UITransition@Transitions@Udwm@winrt@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800E693C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@QEAUHWND__@@UITransition@Transitions@Udwm@w.c)
 */

void __fastcall std::list<std::pair<HWND__ * const,winrt::Udwm::Transitions::ITransition>>::~list<std::pair<HWND__ * const,winrt::Udwm::Transitions::ITransition>>(
        __int64 *a1)
{
  std::_List_node<std::pair<HWND__ * const,winrt::Udwm::Transitions::ITransition>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<HWND__ * const,winrt::Udwm::Transitions::ITransition>,void *>>>(
    (__int64)a1,
    *a1);
  std::_Deallocate<16,0>((void *)*a1, (const struct std::nothrow_t *)0x20);
}
