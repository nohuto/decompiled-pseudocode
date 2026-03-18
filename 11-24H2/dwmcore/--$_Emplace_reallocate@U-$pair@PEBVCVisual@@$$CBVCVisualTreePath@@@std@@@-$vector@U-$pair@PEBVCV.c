/*
 * XREFs of ??$_Emplace_reallocate@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@?$vector@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@AEAAPEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@1@QEAU21@$$QEAU21@@Z @ 0x180008EAC
 * Callers:
 *     ?push_back@?$vector@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@QEAAX$$QEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@2@@Z @ 0x180008100 (-push_back@-$vector@U-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V-$allocator@U-$pair@PEBVCV.c)
 *     ?EnsureAncestorList@CBackdropVisualImage@@AEAAXXZ @ 0x180008640 (-EnsureAncestorList@CBackdropVisualImage@@AEAAXXZ.c)
 * Callees:
 *     ??$construct@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@U12@@?$_Default_allocator_traits@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@std@@@std@@SAXAEAV?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@1@QEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@1@$$QEAU31@@Z @ 0x180007C2C (--$construct@U-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@U12@@-$_Default_allocator_traits@V.c)
 *     ?reserve_region@?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUVisualTreePathUnit@CVisualTreePath@@_K0@Z @ 0x180009080 (-reserve_region@-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreeP.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@std@@@std@@YAXPEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@0@QEAU10@AEAV?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@0@@Z @ 0x1801C7AD0 (--$_Destroy_range@V-$allocator@U-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@std@@@std@@YAXP.c)
 *     ??$_Get_size_of_n@$0EA@@std@@YA_K_K@Z @ 0x1801FFA08 (--$_Get_size_of_n@$0EA@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@YAPEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@0@QEAU10@0PEAU10@AEAV?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@0@@Z @ 0x18024EC3C (--$_Uninitialized_move@PEAU-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V-$allocator@U-$pair@.c)
 */

_QWORD *__fastcall std::vector<std::pair<CVisual const *,CVisualTreePath const>>::_Emplace_reallocate<std::pair<CVisual const *,CVisualTreePath const>>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 v6; // rbp
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // rax
  _QWORD *v14; // rbx
  _QWORD *v15; // r14
  detail::liberal_expansion_policy *v16; // rcx
  __int64 v17; // r9
  _QWORD *v18; // rax
  _QWORD *v19; // r15
  _QWORD *v20; // r12
  _QWORD *v21; // r13
  _QWORD *v22; // rbp
  __int128 *v23; // rbx
  _OWORD *v24; // rcx
  __int128 *i; // rax
  __int128 v26; // xmm0
  _QWORD *result; // rax
  __int128 *v28; // [rsp+60h] [rbp+8h]
  unsigned __int64 v29; // [rsp+68h] [rbp+10h]
  _QWORD *v30; // [rsp+78h] [rbp+20h]

  v3 = 0x3FFFFFFFFFFFFFFLL;
  v4 = (__int64)a2 - *a1;
  v6 = (__int64)(a1[1] - *a1) >> 6;
  if ( v6 == 0x3FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v6 + 1;
  v10 = (__int64)(a1[2] - *a1) >> 6;
  v29 = v9;
  v11 = v10 >> 1;
  if ( v10 <= 0x3FFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v9;
  }
  size_of = std::_Get_size_of_n<64>(v3);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = (_QWORD *)(v13 + (v4 & 0xFFFFFFFFFFFFFFC0uLL));
  v15 = (_QWORD *)v13;
  v30 = v14;
  std::_Default_allocator_traits<std::allocator<std::pair<CVisual const *,CVisualTreePath const>>>::construct<std::pair<CVisual const *,CVisualTreePath const>,std::pair<CVisual const *,CVisualTreePath const>>(
    v16,
    v14,
    a3);
  v18 = (_QWORD *)a1[1];
  v19 = (_QWORD *)*a1;
  if ( a2 == v18 )
  {
    v20 = v15;
    if ( v19 != v18 )
    {
      v21 = v15 + 8;
      v22 = (_QWORD *)a1[1];
      do
      {
        *v20 = *v19;
        *(v21 - 5) = v21;
        *(__m128i *)(v21 - 7) = _mm_unpacklo_epi64(
                                  (__m128i)(unsigned __int64)(v21 - 4),
                                  (__m128i)(unsigned __int64)(v21 - 4));
        v23 = (__int128 *)v19[2];
        v28 = (__int128 *)v19[1];
        v24 = (_OWORD *)detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::reserve_region(
                          v21 - 7,
                          0LL,
                          v23 - v28,
                          v17);
        for ( i = v28; i != v23; ++i )
        {
          v26 = *i;
          *v24++ = v26;
        }
        v20 += 8;
        v21 += 8;
        v19 += 8;
      }
      while ( v19 != v22 );
      v9 = v29;
      v14 = v30;
    }
    std::_Destroy_range<std::allocator<std::pair<CVisual const *,CVisualTreePath const>>>(v20, v20);
  }
  else
  {
    std::_Uninitialized_move<std::pair<CVisual const *,CVisualTreePath const> *,std::allocator<std::pair<CVisual const *,CVisualTreePath const>>>(
      *a1,
      a2,
      v15);
    std::_Uninitialized_move<std::pair<CVisual const *,CVisualTreePath const> *,std::allocator<std::pair<CVisual const *,CVisualTreePath const>>>(
      a2,
      a1[1],
      v14 + 8);
  }
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<std::pair<CVisual const *,CVisualTreePath const>>>(*a1, a1[1]);
    std::_Deallocate<16,0>(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFC0uLL);
  }
  result = v14;
  *a1 = v15;
  a1[1] = &v15[8 * v9];
  a1[2] = &v15[8 * v3];
  return result;
}
