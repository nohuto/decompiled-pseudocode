/*
 * XREFs of ??$_Assign_counted_range@PEBUUserResizeVisual@Transitions@Udwm@winrt@@@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@AEAAXPEBUUserResizeVisual@Transitions@Udwm@winrt@@_K@Z @ 0x1800E7AD4
 * Callers:
 *     ?ReplaceAll@?$vector_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@@winrt@@QEAAXU?$array_view@$$CBUUserResizeVisual@Transitions@Udwm@winrt@@@2@@Z @ 0x1800E9D8C (-ReplaceAll@-$vector_base@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUs.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800398F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180039930 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x18004BD48 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18004D03C (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x180096728 (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Calculate_growth@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@AEBA_K_K@Z @ 0x180096CA4 (-_Calculate_growth@-$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V-$allocator@UUserResizeVi.c)
 *     ??$_Destroy_range@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@YAXPEAUUserResizeVisual@Transitions@Udwm@winrt@@QEAU1234@AEAV?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@0@@Z @ 0x1800E7C1C (--$_Destroy_range@V-$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@YAXPEAUUser.c)
 *     ??$_Uninitialized_copy_n@PEBUUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@YAPEAUUserResizeVisual@Transitions@Udwm@winrt@@PEBU1234@_KPEAU1234@AEAV?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@0@@Z @ 0x1800E7ED8 (--$_Uninitialized_copy_n@PEBUUserResizeVisual@Transitions@Udwm@winrt@@V-$allocator@UUserResizeVi.c)
 */

__int64 __fastcall std::vector<winrt::Udwm::Transitions::UserResizeVisual>::_Assign_counted_range<winrt::Udwm::Transitions::UserResizeVisual const *>(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2,
        unsigned __int64 a3)
{
  winrt::Udwm::Transitions::AnimationCompletedHandler *v3; // rbx
  unsigned __int64 v4; // rsi
  unsigned __int64 v7; // r14
  unsigned __int64 size_of; // rax
  const struct std::nothrow_t *v9; // rdx
  winrt::Udwm::Transitions::AnimationCompletedHandler *v10; // rax
  winrt::Udwm::Transitions::AnimationCompletedHandler *v11; // r8
  unsigned __int64 v12; // r14
  winrt::Udwm::Transitions::AnimationCompletedHandler *i; // r14
  __int64 result; // rax

  v3 = *(winrt::Udwm::Transitions::AnimationCompletedHandler **)a1;
  v4 = a3;
  if ( a3 > (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3 )
  {
    if ( a3 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Dwm_Xlength_error((const char *)a1);
    v7 = std::vector<winrt::Udwm::Transitions::UserResizeVisual>::_Calculate_growth((_QWORD *)a1, a3);
    if ( v3 )
    {
      std::_Destroy_range<std::allocator<winrt::Udwm::Transitions::UserResizeVisual>>(v3);
      std::_Deallocate<16,0>(
        *(void **)a1,
        (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL));
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_QWORD *)(a1 + 16) = 0LL;
    }
    size_of = std::_Get_size_of_n<8>(v7);
    v10 = (winrt::Udwm::Transitions::AnimationCompletedHandler *)std::_Allocate<16,std::_Default_allocate_traits,0>(
                                                                   size_of,
                                                                   v9);
    *(_QWORD *)a1 = v10;
    v11 = v10;
    *(_QWORD *)(a1 + 8) = v10;
    *(_QWORD *)(a1 + 16) = (char *)v10 + 8 * v7;
    goto LABEL_14;
  }
  v11 = *(winrt::Udwm::Transitions::AnimationCompletedHandler **)(a1 + 8);
  v12 = (v11 - v3) >> 3;
  if ( v4 > v12 )
  {
    while ( v3 != v11 )
    {
      winrt::Windows::Foundation::IUnknown::operator=(v3, a2);
      v11 = *(winrt::Udwm::Transitions::AnimationCompletedHandler **)(a1 + 8);
      v3 = (winrt::Udwm::Transitions::AnimationCompletedHandler *)((char *)v3 + 8);
      a2 = (winrt::Windows::Foundation::IUnknown *)((char *)a2 + 8);
    }
    v4 -= v12;
LABEL_14:
    result = std::_Uninitialized_copy_n<winrt::Udwm::Transitions::UserResizeVisual const *>(a2, v4, v11);
    *(_QWORD *)(a1 + 8) = result;
    return result;
  }
  for ( i = (winrt::Udwm::Transitions::AnimationCompletedHandler *)((char *)v3 + 8 * v4); v4; --v4 )
  {
    winrt::Windows::Foundation::IUnknown::operator=(v3, a2);
    v3 = (winrt::Udwm::Transitions::AnimationCompletedHandler *)((char *)v3 + 8);
    a2 = (winrt::Windows::Foundation::IUnknown *)((char *)a2 + 8);
  }
  result = std::_Destroy_range<std::allocator<winrt::Udwm::Transitions::UserResizeVisual>>(i);
  *(_QWORD *)(a1 + 8) = i;
  return result;
}
