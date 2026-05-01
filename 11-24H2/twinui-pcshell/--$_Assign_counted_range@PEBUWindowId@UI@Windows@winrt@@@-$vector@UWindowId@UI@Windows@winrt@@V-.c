/*
 * XREFs of ??$_Assign_counted_range@PEBUWindowId@UI@Windows@winrt@@@?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@AEAAXPEBUWindowId@UI@Windows@winrt@@_K@Z @ 0x180664F54
 * Callers:
 *     ?ReplaceAll@?$produce@U?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAUstruct_Windows_UI_WindowId@23@@Z @ 0x180665F80 (-ReplaceAll@-$produce@U-$vector_impl@UWindowId@UI@Windows@winrt@@V-$vector@UWindowId@UI@Windows@.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18001D4AC (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@AEBA_K_K@Z @ 0x1801D33BC (-_Calculate_growth@-$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Win.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x1802AFF8C (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     memmove_0 @ 0x1806CA2E8 (memmove_0.c)
 */

char *__fastcall std::vector<winrt::Windows::UI::WindowId>::_Assign_counted_range<winrt::Windows::UI::WindowId const *>(
        void **a1,
        char *a2,
        unsigned __int64 a3)
{
  char *v3; // rdi
  char *v5; // r15
  unsigned __int64 v7; // rbx
  __int64 v8; // r10
  size_t size_of; // rax
  char *v10; // rax
  size_t v11; // rbx
  void *v12; // rcx
  _BYTE *v13; // rbp
  unsigned __int64 v14; // rbp
  char *result; // rax

  v3 = (char *)*a1;
  v5 = a2;
  if ( a3 <= ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3 )
  {
    v13 = a1[1];
    v12 = *a1;
    v14 = (v13 - v3) >> 3;
    if ( a3 <= v14 )
    {
      v11 = 8 * a3;
    }
    else
    {
      memmove_0(v12, a2, 8 * v14);
      v3 = (char *)a1[1];
      a2 = &v5[8 * v14];
      v12 = v3;
      v11 = 8 * (a3 - v14);
    }
  }
  else
  {
    if ( a3 > 0x1FFFFFFFFFFFFFFFLL )
      std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
    v7 = std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>::_Calculate_growth(
           a1,
           a3);
    if ( v3 )
    {
      std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)(8 * v8));
      *a1 = 0LL;
      a1[1] = 0LL;
      a1[2] = 0LL;
    }
    size_of = std::_Get_size_of_n<8>(v7);
    v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    *a1 = v10;
    v3 = v10;
    a1[1] = v10;
    a2 = v5;
    a1[2] = &v10[8 * v7];
    v11 = 8 * a3;
    v12 = v10;
  }
  memmove_0(v12, a2, v11);
  result = &v3[v11];
  a1[1] = &v3[v11];
  return result;
}
