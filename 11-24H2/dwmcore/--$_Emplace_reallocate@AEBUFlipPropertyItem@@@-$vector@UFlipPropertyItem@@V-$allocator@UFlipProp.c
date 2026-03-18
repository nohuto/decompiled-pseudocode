/*
 * XREFs of ??$_Emplace_reallocate@AEBUFlipPropertyItem@@@?$vector@UFlipPropertyItem@@V?$allocator@UFlipPropertyItem@@@std@@@std@@AEAAPEAUFlipPropertyItem@@QEAU2@AEBU2@@Z @ 0x1801F6454
 * Callers:
 *     ?CommitRecordedStatistics@CCompositionSwapchainStatistics@@UEAAJPEAVIOverlaySwapChain@@@Z @ 0x180242390 (-CommitRecordedStatistics@CCompositionSwapchainStatistics@@UEAAJPEAVIOverlaySwapChain@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@UFlipPropertyItem@@V?$allocator@UFlipPropertyItem@@@std@@@std@@AEAAXQEAUFlipPropertyItem@@_K1@Z @ 0x1801F6560 (-_Change_array@-$vector@UFlipPropertyItem@@V-$allocator@UFlipPropertyItem@@@std@@@std@@AEAAXQEAU.c)
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x1801F65D0 (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$vector@UFlipPropertyItem@@V?$allocator@UFlipPropertyItem@@@std@@@std@@AEBA_K_K@Z @ 0x1801F65FC (-_Calculate_growth@-$vector@UFlipPropertyItem@@V-$allocator@UFlipPropertyItem@@@std@@@std@@AEBA_.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

char *__fastcall std::vector<FlipPropertyItem>::_Emplace_reallocate<FlipPropertyItem const &>(
        _QWORD *a1,
        _BYTE *a2,
        _OWORD *a3)
{
  _BYTE *v3; // rbp
  __int64 v6; // rax
  __int64 v8; // r14
  __int64 v9; // r15
  SIZE_T size_of; // rax
  char *v11; // rax
  char *v12; // rsi
  char *v13; // rbp
  void *v14; // rcx
  _BYTE *v15; // r8
  _BYTE *v16; // rdx
  size_t v17; // r8

  v3 = (_BYTE *)*a1;
  v6 = (__int64)(a1[1] - *a1) >> 5;
  if ( v6 == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = std::vector<FlipPropertyItem>::_Calculate_growth(a1, v6 + 1);
  size_of = std::_Get_size_of_n<32>(v9);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = v11;
  v13 = &v11[(a2 - v3) & 0xFFFFFFFFFFFFFFE0uLL];
  v14 = v11;
  *(_OWORD *)v13 = *a3;
  *((_OWORD *)v13 + 1) = a3[1];
  v15 = (_BYTE *)a1[1];
  v16 = (_BYTE *)*a1;
  if ( a2 == v15 )
  {
    v17 = v15 - v16;
  }
  else
  {
    memmove_0(v11, v16, (size_t)&a2[-*a1]);
    v14 = v13 + 32;
    v17 = a1[1] - (_QWORD)a2;
    v16 = a2;
  }
  memmove_0(v14, v16, v17);
  std::vector<FlipPropertyItem>::_Change_array(a1, v12, v8, v9);
  return v13;
}
