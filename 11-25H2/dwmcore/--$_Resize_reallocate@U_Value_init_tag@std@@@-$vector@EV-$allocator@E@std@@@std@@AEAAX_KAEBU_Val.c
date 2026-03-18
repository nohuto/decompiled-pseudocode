/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1802208DC
 * Callers:
 *     ?ComputeCachedHdrMetadata@CDDisplaySwapChain@@IEAAJW4DXGI_HDR_METADATA_TYPE@@PEBX@Z @ 0x1801FF4A4 (-ComputeCachedHdrMetadata@CDDisplaySwapChain@@IEAAJW4DXGI_HDR_METADATA_TYPE@@PEBX@Z.c)
 *     ?ConsumeTipPoints@CInkCanvasScribble@@UEAAJPEAIPEA_K11@Z @ 0x1802A31E0 (-ConsumeTipPoints@CInkCanvasScribble@@UEAAJPEAIPEA_K11@Z.c)
 *     ?CreatePointQueue@CDelegatedInkCanvas@@AEAAJXZ @ 0x1802A33A4 (-CreatePointQueue@CDelegatedInkCanvas@@AEAAJXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@@2@@std@@CAXXZ @ 0x18025984C (-_Xlength@-$vector@V-$unique_ptr@VCBetterCheckMPOCache@@U-$default_delete@VCBetterCheckMPOCache@.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

__int64 __fastcall std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>(
        __int64 a1,
        unsigned __int64 a2)
{
  SIZE_T v2; // rdi
  __int64 v5; // rbp
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  char *v8; // rbx

  v2 = 0x7FFFFFFFFFFFFFFFLL;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    std::vector<std::unique_ptr<CBetterCheckMPOCache>>::_Xlength(a1);
  v5 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  v6 = *(_QWORD *)(a1 + 16) - *(_QWORD *)a1;
  v7 = v6 >> 1;
  if ( v6 <= 0x7FFFFFFFFFFFFFFFLL - (v6 >> 1) )
  {
    v2 = v7 + v6;
    if ( v7 + v6 < a2 )
      v2 = a2;
  }
  v8 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v2);
  memset_0(&v8[v5], 0, a2 - v5);
  memmove_0(v8, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  return std::vector<unsigned char>::_Change_array(a1, (__int64)v8, a2, v2);
}
