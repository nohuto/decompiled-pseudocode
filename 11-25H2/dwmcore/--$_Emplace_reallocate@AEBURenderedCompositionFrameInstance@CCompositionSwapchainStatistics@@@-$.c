/*
 * XREFs of ??$_Emplace_reallocate@AEBURenderedCompositionFrameInstance@CCompositionSwapchainStatistics@@@?$vector@URenderedCompositionFrameInstance@CCompositionSwapchainStatistics@@V?$allocator@URenderedCompositionFrameInstance@CCompositionSwapchainStatistics@@@std@@@std@@AEAAPEAURenderedCompositionFrameInstance@CCompositionSwapchainStatistics@@QEAU23@AEBU23@@Z @ 0x18020BC00
 * Callers:
 *     ?RecordCompositionStats@CCompositionSwapchainStatistics@@UEAA_N_NW4BufferCompositionMode@@0AEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@PEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x18010A820 (-RecordCompositionStats@CCompositionSwapchainStatistics@@UEAA_N_NW4BufferCompositionMode@@0AEBVC.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0EA@@std@@YA_K_K@Z @ 0x18020BD38 (--$_Get_size_of_n@$0EA@@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@URenderedCompositionFrameInstance@CCompositionSwapchainStatistics@@V?$allocator@URenderedCompositionFrameInstance@CCompositionSwapchainStatistics@@@std@@@std@@AEAAXQEAURenderedCompositionFrameInstance@CCompositionSwapchainStatistics@@_K1@Z @ 0x18020BD64 (-_Change_array@-$vector@URenderedCompositionFrameInstance@CCompositionSwapchainStatistics@@V-$al.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

char *__fastcall std::vector<CCompositionSwapchainStatistics::RenderedCompositionFrameInstance>::_Emplace_reallocate<CCompositionSwapchainStatistics::RenderedCompositionFrameInstance const &>(
        const void **a1,
        _BYTE *a2,
        _OWORD *a3)
{
  __int64 v3; // rbx
  signed __int64 v4; // rsi
  __int64 v6; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  char *v13; // r14
  char *v14; // rsi
  void *v15; // rcx
  _BYTE *v16; // r8
  _BYTE *v17; // rdx
  size_t v18; // r8

  v3 = 0x3FFFFFFFFFFFFFFLL;
  v4 = a2 - (_BYTE *)*a1;
  v6 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 6;
  if ( v6 == 0x3FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v6 + 1;
  v10 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 6;
  v11 = v10 >> 1;
  if ( v10 <= 0x3FFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<64>(v3);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = &v13[v4 & 0xFFFFFFFFFFFFFFC0uLL];
  v15 = v13;
  *(_OWORD *)v14 = *a3;
  *((_OWORD *)v14 + 1) = a3[1];
  *((_OWORD *)v14 + 2) = a3[2];
  *((_OWORD *)v14 + 3) = a3[3];
  v16 = a1[1];
  v17 = *a1;
  if ( a2 == v16 )
  {
    v18 = v16 - v17;
  }
  else
  {
    memmove_0(v13, v17, a2 - (_BYTE *)*a1);
    v15 = v14 + 64;
    v18 = (_BYTE *)a1[1] - a2;
    v17 = a2;
  }
  memmove_0(v15, v17, v18);
  std::vector<CCompositionSwapchainStatistics::RenderedCompositionFrameInstance>::_Change_array(a1, v13, v9, v3);
  return v14;
}
