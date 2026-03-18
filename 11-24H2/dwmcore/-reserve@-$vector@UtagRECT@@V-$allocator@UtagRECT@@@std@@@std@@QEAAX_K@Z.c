/*
 * XREFs of ?reserve@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAX_K@Z @ 0x180041EB8
 * Callers:
 *     ?AddTransientInkDirtyRegion@CDrawingContext@@QEAAXAEBVCRegion@@@Z @ 0x1800A600C (-AddTransientInkDirtyRegion@CDrawingContext@@QEAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180041D70 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@@2@@std@@CAXXZ @ 0x18024E37C (-_Xlength@-$vector@V-$unique_ptr@VCBetterCheckMPOCache@@U-$default_delete@VCBetterCheckMPOCache@.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

void __fastcall std::vector<tagRECT>::reserve(const void **a1, unsigned __int64 a2)
{
  signed __int64 v4; // rsi
  SIZE_T size_of; // rax
  char *v6; // rbp

  if ( a2 > ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 4 )
  {
    if ( a2 > 0xFFFFFFFFFFFFFFFLL )
      std::vector<std::unique_ptr<CBetterCheckMPOCache>>::_Xlength();
    v4 = (_BYTE *)a1[1] - (_BYTE *)*a1;
    size_of = std::_Get_size_of_n<16>(a2);
    v6 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    memmove_0(v6, *a1, (_BYTE *)a1[1] - (_BYTE *)*a1);
    if ( *a1 )
      std::_Deallocate<16,0>(*a1, ((_BYTE *)a1[2] - (_BYTE *)*a1) & 0xFFFFFFFFFFFFFFF0uLL);
    *a1 = v6;
    a1[1] = &v6[v4 & 0xFFFFFFFFFFFFFFF0uLL];
    a1[2] = &v6[16 * a2];
  }
}
