/*
 * XREFs of ??$_Emplace_reallocate@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@?$vector@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@V?$allocator@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@std@@@std@@AEAAPEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@QEAU2@$$QEAU2@@Z @ 0x1801E2304
 * Callers:
 *     ?PresentMPO@CLegacySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1800843A0 (-PresentMPO@CLegacySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OV.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@V?$allocator@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@std@@@std@@AEAAXQEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@_K1@Z @ 0x1801E24BC (-_Change_array@-$vector@U_DXGI_PRESENT_MULTIPLANE_OVERLAY@@V-$allocator@U_DXGI_PRESENT_MULTIPLAN.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180250B48 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

char *__fastcall std::vector<_DXGI_PRESENT_MULTIPLANE_OVERLAY>::_Emplace_reallocate<_DXGI_PRESENT_MULTIPLANE_OVERLAY>(
        const void **a1,
        _BYTE *a2,
        __int64 a3)
{
  __int64 v6; // r12
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  char *v12; // rsi
  char *v13; // r13
  void *v14; // rcx
  _BYTE *v15; // r8
  _BYTE *v16; // rdx
  size_t v17; // r8

  v6 = (a2 - (_BYTE *)*a1) / 136;
  v7 = 0xF0F0F0F0F0F0F0F1uLL * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3);
  if ( v7 == 0x1E1E1E1E1E1E1E1LL )
    std::_Xlength_error("vector too long");
  v8 = v7 + 1;
  v9 = 0xF0F0F0F0F0F0F0F1uLL * (((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3);
  v10 = v9 >> 1;
  if ( v9 <= 0x1E1E1E1E1E1E1E1LL - (v9 >> 1) )
  {
    v11 = v7 + 1;
    if ( v10 + v9 >= v8 )
      v11 = v10 + v9;
    if ( v11 > 0x1E1E1E1E1E1E1E1LL )
      std::_Throw_bad_array_new_length();
  }
  else
  {
    v11 = 0x1E1E1E1E1E1E1E1LL;
  }
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(136 * v11);
  v13 = &v12[136 * v6];
  *(_OWORD *)v13 = *(_OWORD *)a3;
  *((_OWORD *)v13 + 1) = *(_OWORD *)(a3 + 16);
  *((_OWORD *)v13 + 2) = *(_OWORD *)(a3 + 32);
  *((_OWORD *)v13 + 3) = *(_OWORD *)(a3 + 48);
  *((_OWORD *)v13 + 4) = *(_OWORD *)(a3 + 64);
  *((_OWORD *)v13 + 5) = *(_OWORD *)(a3 + 80);
  *((_OWORD *)v13 + 6) = *(_OWORD *)(a3 + 96);
  *((_OWORD *)v13 + 7) = *(_OWORD *)(a3 + 112);
  *((_QWORD *)v13 + 16) = *(_QWORD *)(a3 + 128);
  v14 = v12;
  v15 = a1[1];
  v16 = *a1;
  if ( a2 == v15 )
  {
    v17 = v15 - v16;
  }
  else
  {
    memmove_0(v12, v16, a2 - (_BYTE *)*a1);
    v14 = v13 + 136;
    v17 = (_BYTE *)a1[1] - a2;
    v16 = a2;
  }
  memmove_0(v14, v16, v17);
  std::vector<_DXGI_PRESENT_MULTIPLANE_OVERLAY>::_Change_array(a1, v12, v8, v11);
  return &v12[136 * v6];
}
