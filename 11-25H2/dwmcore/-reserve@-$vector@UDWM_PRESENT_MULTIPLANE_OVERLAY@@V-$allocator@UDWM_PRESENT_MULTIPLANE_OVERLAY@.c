/*
 * XREFs of ?reserve@?$vector@UDWM_PRESENT_MULTIPLANE_OVERLAY@@V?$allocator@UDWM_PRESENT_MULTIPLANE_OVERLAY@@@std@@@std@@QEAAX_K@Z @ 0x1801E91D8
 * Callers:
 *     ?PresentMPO@COverlayContext@@IEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@PEAIPEA_N@Z @ 0x1801BFBDC (-PresentMPO@COverlayContext@@IEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@Ut.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

unsigned __int64 __fastcall std::vector<DWM_PRESENT_MULTIPLANE_OVERLAY>::reserve(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 v4; // rdi
  unsigned __int64 v5; // rsi
  char *v6; // rbp
  _QWORD *v7; // rcx
  unsigned __int64 v8; // rdx

  result = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 7;
  if ( a2 > result )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    v4 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
    v5 = a2 << 7;
    v6 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(a2 << 7);
    memmove_0(v6, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    v7 = *(_QWORD **)a1;
    if ( *(_QWORD *)a1 )
    {
      v8 = (*(_QWORD *)(a1 + 16) - (_QWORD)v7) & 0xFFFFFFFFFFFFFF80uLL;
      if ( v8 >= 0x1000 )
      {
        v8 += 39LL;
        if ( (unsigned __int64)v7 - *(v7 - 1) - 8 > 0x1F )
          _invalid_parameter_noinfo_noreturn();
        v7 = (_QWORD *)*(v7 - 1);
      }
      operator delete(v7, v8);
    }
    *(_QWORD *)a1 = v6;
    result = (unsigned __int64)&v6[v5];
    *(_QWORD *)(a1 + 8) = &v6[v4 & 0xFFFFFFFFFFFFFF80uLL];
    *(_QWORD *)(a1 + 16) = &v6[v5];
  }
  return result;
}
