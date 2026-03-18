/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@VCDDisplayCachedScanout@@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1802C7258
 * Callers:
 *     ?FindCachedDesktopScanout@CDDisplaySwapChain@@IEAAJ_NAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x180172728 (-FindCachedDesktopScanout@CDDisplaySwapChain@@IEAAJ_NAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAU.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x1801022BC (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@YAXPEAVCDDisplayCachedScanout@@QEAV1@AEAV?$allocator@VCDDisplayCachedScanout@@@0@@Z @ 0x180174D0C (--$_Destroy_range@V-$allocator@VCDDisplayCachedScanout@@@std@@@std@@YAXPEAVCDDisplayCachedScanou.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@YAPEAVCDDisplayCachedScanout@@PEAV1@_KAEAV?$allocator@VCDDisplayCachedScanout@@@0@@Z @ 0x1802C7474 (--$_Uninitialized_value_construct_n@V-$allocator@VCDDisplayCachedScanout@@@std@@@std@@YAPEAVCDDi.c)
 */

__int64 __fastcall std::vector<CDDisplayCachedScanout>::_Resize_reallocate<std::_Value_init_tag>(
        __int64 *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v5; // r15
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r15
  SIZE_T size_of; // rax
  __int64 v10; // r14
  char *v11; // r10
  __int64 v12; // r9
  char *i; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 result; // rax

  v2 = 0x666666666666666LL;
  if ( a2 > 0x666666666666666LL )
    std::_Xlength_error("vector too long");
  v5 = a1[1] - *a1;
  v6 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[2] - *a1) >> 3);
  v7 = v6 >> 1;
  v8 = 0xCCCCCCCCCCCCCCCDuLL * (v5 >> 3);
  if ( v6 <= 0x666666666666666LL - (v6 >> 1) )
  {
    v2 = v7 + v6;
    if ( v7 + v6 < a2 )
      v2 = a2;
  }
  size_of = std::_Get_size_of_n<40>(v2);
  v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  std::_Uninitialized_value_construct_n<std::allocator<CDDisplayCachedScanout>>((CDDisplayCachedScanout *)(v10 + 40 * v8));
  v11 = (char *)a1[1];
  v12 = v10;
  for ( i = (char *)*a1; i != v11; i += 40 )
  {
    v14 = *((_QWORD *)i + 2);
    *((_QWORD *)i + 2) = 0LL;
    v15 = *((_QWORD *)i + 1);
    *((_QWORD *)i + 1) = 0LL;
    v16 = *(_QWORD *)i;
    *(_QWORD *)i = 0LL;
    *(_QWORD *)v12 = v16;
    *(_QWORD *)(v12 + 8) = v15;
    *(_QWORD *)(v12 + 16) = v14;
    v17 = *((_QWORD *)i + 3);
    *((_QWORD *)i + 3) = 0LL;
    *(_QWORD *)(v12 + 24) = v17;
    *(_DWORD *)(v12 + 32) = *((_DWORD *)i + 8);
    *(_DWORD *)(v12 + 36) = *((_DWORD *)i + 9);
    v12 += 40LL;
  }
  std::_Destroy_range<std::allocator<CDDisplayCachedScanout>>(
    (CDDisplayCachedScanout *)v12,
    (CDDisplayCachedScanout *)v12);
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<CDDisplayCachedScanout>>(
      (CDDisplayCachedScanout *)*a1,
      (CDDisplayCachedScanout *)a1[1]);
    std::_Deallocate<16,0>((_QWORD *)*a1, 8 * ((a1[2] - *a1) >> 3));
  }
  *a1 = v10;
  a1[1] = v10 + 40 * a2;
  result = 5 * v2;
  a1[2] = v10 + 40 * v2;
  return result;
}
