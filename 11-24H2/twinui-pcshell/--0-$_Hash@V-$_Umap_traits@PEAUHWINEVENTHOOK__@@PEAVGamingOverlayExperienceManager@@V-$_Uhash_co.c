/*
 * XREFs of ??0?$_Hash@V?$_Umap_traits@PEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@V?$_Uhash_compare@PEAUHWINEVENTHOOK__@@U?$hash@PEAUHWINEVENTHOOK__@@@std@@U?$equal_to@PEAUHWINEVENTHOOK__@@@3@@std@@V?$allocator@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@@4@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@PEAUHWINEVENTHOOK__@@U?$hash@PEAUHWINEVENTHOOK__@@@std@@U?$equal_to@PEAUHWINEVENTHOOK__@@@3@@1@AEBV?$allocator@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@@1@@Z @ 0x1801F4068
 * Callers:
 *     _dynamic_initializer_for__OwnedHWinEventHook_GamingOverlayExperienceManager_::m_eventHookOwners__ @ 0x18023D9A0 (_dynamic_initializer_for__OwnedHWinEventHook_GamingOverlayExperienceManager_--m_eventHookOwners_.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@std@@@std@@@std@@@2@@Z @ 0x18001D1F4 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_18001D1F4.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
int *__fastcall std::_Hash<std::_Umap_traits<HWINEVENTHOOK__ *,GamingOverlayExperienceManager *,std::_Uhash_compare<HWINEVENTHOOK__ *,std::hash<HWINEVENTHOOK__ *>,std::equal_to<HWINEVENTHOOK__ *>>,std::allocator<std::pair<HWINEVENTHOOK__ * const,GamingOverlayExperienceManager *>>,0>>::_Hash<std::_Umap_traits<HWINEVENTHOOK__ *,GamingOverlayExperienceManager *,std::_Uhash_compare<HWINEVENTHOOK__ *,std::hash<HWINEVENTHOOK__ *>,std::equal_to<HWINEVENTHOOK__ *>>,std::allocator<std::pair<HWINEVENTHOOK__ * const,GamingOverlayExperienceManager *>>,0>>(
        __int64 a1,
        int *a2)
{
  _QWORD *v2; // rax

  OwnedHWinEventHook<GamingOverlayExperienceManager>::m_eventHookOwners = *a2;
  qword_1808CCFF8 = 0LL;
  qword_1808CD000 = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  *v2 = v2;
  v2[1] = v2;
  qword_1808CCFF8 = (__int64)v2;
  qword_1808CD008 = 0LL;
  xmmword_1808CD010 = 0LL;
  qword_1808CD020 = 7LL;
  qword_1808CD028 = 8LL;
  OwnedHWinEventHook<GamingOverlayExperienceManager>::m_eventHookOwners = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<HWINEVENTHOOK__ * const,GamingOverlayExperienceManager *>>>>>>::_Assign_grow(
    (__int64)&qword_1808CD008,
    0x10uLL,
    (unsigned __int64)v2);
  return &OwnedHWinEventHook<GamingOverlayExperienceManager>::m_eventHookOwners;
}
