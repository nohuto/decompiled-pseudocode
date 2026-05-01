/*
 * XREFs of ??$_Reallocate@$0A@@?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAXAEA_K@Z @ 0x1806A65C0
 * Callers:
 *     ?SetRegions@XamlSnapAssistViewHost@@UEAAJIPEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@ABI@@@Z @ 0x180207770 (-SetRegions@XamlSnapAssistViewHost@@UEAAJIPEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Win.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x18014AECC (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     memmove_0 @ 0x1806CA2E8 (memmove_0.c)
 */

void __fastcall std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::_Reallocate<0>(
        __int64 a1,
        unsigned __int64 *a2)
{
  __int64 v4; // rdi
  size_t size_of; // rax
  void *v6; // rsi

  v4 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 5;
  size_of = std::_Get_size_of_n<32>(*a2);
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  memmove_0(v6, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::_Change_array(
    a1,
    (__int64)v6,
    v4,
    *a2);
}
