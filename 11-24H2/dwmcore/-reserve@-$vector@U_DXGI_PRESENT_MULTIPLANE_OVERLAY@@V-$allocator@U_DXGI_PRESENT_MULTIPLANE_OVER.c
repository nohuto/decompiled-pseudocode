/*
 * XREFs of ?reserve@?$vector@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@V?$allocator@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@std@@@std@@QEAAX_K@Z @ 0x180042370
 * Callers:
 *     ?PresentMPO@CLegacySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180240710 (-PresentMPO@CLegacySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OV.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

unsigned __int64 __fastcall std::vector<_DXGI_PRESENT_MULTIPLANE_OVERLAY>::reserve(
        const void **a1,
        unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 v4; // r14
  unsigned __int64 v5; // rsi
  char *v6; // rdi

  result = 0xF0F0F0F0F0F0F0F1uLL * (((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3);
  if ( a2 > result )
  {
    if ( a2 > 0x1E1E1E1E1E1E1E1LL )
      std::_Xlength_error("vector too long");
    v4 = 136 * a2;
    v5 = 0xF0F0F0F0F0F0F0F1uLL * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3);
    v6 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(136 * a2);
    memmove_0(v6, *a1, (_BYTE *)a1[1] - (_BYTE *)*a1);
    if ( *a1 )
      std::_Deallocate<16,0>(*a1, 8 * (((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3));
    *a1 = v6;
    a1[1] = &v6[136 * v5];
    result = (unsigned __int64)&v6[v4];
    a1[2] = &v6[v4];
  }
  return result;
}
