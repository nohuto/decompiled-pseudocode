/*
 * XREFs of ??$_Emplace_reallocate@N@?$vector@NV?$allocator@N@std@@@std@@AEAAPEANQEAN$$QEAN@Z @ 0x1801D3260
 * Callers:
 *     ?PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1803572D4 (-PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18001D4AC (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAXQEAPEAX_K1@Z @ 0x1801D3354 (-_Change_array@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAXQEAPEAX_K1@Z.c)
 *     ?_Calculate_growth@?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@AEBA_K_K@Z @ 0x1801D33BC (-_Calculate_growth@-$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Win.c)
 *     ??$_Uninitialized_move@PEANV?$allocator@N@std@@@std@@YAPEANQEAN0PEANAEAV?$allocator@N@0@@Z @ 0x180344578 (--$_Uninitialized_move@PEANV-$allocator@N@std@@@std@@YAPEANQEAN0PEANAEAV-$allocator@N@0@@Z.c)
 */

char *__fastcall std::vector<double>::_Emplace_reallocate<double>(void **a1, _BYTE *a2, _QWORD *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  char *v8; // rsi
  void *v9; // rcx
  __int64 v11; // r12
  unsigned __int64 v12; // r15
  size_t size_of; // rax
  char *v14; // rax
  char *v15; // rdi

  v6 = (a2 - (_BYTE *)*a1) >> 3;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v11 = v7 + 1;
  v12 = std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>::_Calculate_growth(
          a1,
          v7 + 1);
  size_of = std::_Get_size_of_n<8>(v12);
  v14 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v15 = v14;
  v8 = &v14[8 * v6];
  *(_QWORD *)v8 = *a3;
  v9 = *a1;
  if ( a2 != a1[1] )
  {
    std::_Uninitialized_move<double *>(v9);
    v9 = a2;
  }
  std::_Uninitialized_move<double *>(v9);
  std::vector<void *>::_Change_array(a1, v15, v11, v12);
  return v8;
}
