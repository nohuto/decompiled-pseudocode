/*
 * XREFs of ??$_Emplace_reallocate@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@QEAAPEAUUserResizeVisual@Transitions@Udwm@winrt@@QEAU2345@AEBU2345@@Z @ 0x180100190
 * Callers:
 *     ??$emplace@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@@1@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@Z @ 0x1801005A8 (--$emplace@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@-$vector@UUserResizeVisual@Transitions@.c)
 *     ?Append@?$produce@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAX@Z @ 0x180100E40 (-Append@-$produce@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUserResize.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18001D1B4 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180020494 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180032448 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@AEBA_K_K@Z @ 0x1800B816C (-_Calculate_growth@-$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V-$allocator@UUserResizeVi.c)
 *     ??$_Uninitialized_move@PEAUUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@YAPEAUUserResizeVisual@Transitions@Udwm@winrt@@QEAU1234@0PEAU1234@AEAV?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@0@@Z @ 0x180100528 (--$_Uninitialized_move@PEAUUserResizeVisual@Transitions@Udwm@winrt@@V-$allocator@UUserResizeVisu.c)
 *     ?_Change_array@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@AEAAXQEAUUserResizeVisual@Transitions@Udwm@winrt@@_K1@Z @ 0x180103890 (-_Change_array@-$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V-$allocator@UUserResizeVisual.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x18010DD40 (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall std::vector<winrt::Udwm::Transitions::UserResizeVisual>::_Emplace_reallocate<winrt::Udwm::Transitions::UserResizeVisual const &>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // rbp
  __int64 v6; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // r12
  unsigned __int64 size_of; // rax
  __int64 v11; // rdi
  winrt::Windows::Foundation::IUnknown *v12; // r14
  __int64 v13; // rdx
  char *v14; // r8
  __int64 v15; // rcx

  v3 = *a1;
  v6 = (a1[1] - *a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Dwm_Xlength_error((const char *)0x1FFFFFFFFFFFFFFFLL);
  v8 = v6 + 1;
  v9 = std::vector<winrt::Udwm::Transitions::UserResizeVisual>::_Calculate_growth(a1, v6 + 1);
  size_of = std::_Get_size_of_n<8>(v9);
  v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = (winrt::Windows::Foundation::IUnknown *)(v11 + 8 * ((a2 - v3) >> 3));
  *(_QWORD *)v12 = *a3;
  winrt::Windows::Foundation::IUnknown::add_ref(v12);
  v13 = a1[1];
  v14 = (char *)v11;
  v15 = *a1;
  if ( a2 != v13 )
  {
    std::_Uninitialized_move<winrt::Udwm::Transitions::UserResizeVisual *>(v15, a2, v11);
    v13 = a1[1];
    v14 = (char *)v12 + 8;
    v15 = a2;
  }
  std::_Uninitialized_move<winrt::Udwm::Transitions::UserResizeVisual *>(v15, v13, v14);
  std::vector<winrt::Udwm::Transitions::UserResizeVisual>::_Change_array(a1, v11, v8, v9);
  return v11 + 8 * ((a2 - v3) >> 3);
}
