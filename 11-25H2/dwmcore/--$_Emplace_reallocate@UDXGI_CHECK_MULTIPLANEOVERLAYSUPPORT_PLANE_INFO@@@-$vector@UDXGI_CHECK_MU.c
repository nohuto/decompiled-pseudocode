/*
 * XREFs of ??$_Emplace_reallocate@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@?$vector@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V?$allocator@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@std@@@std@@AEAAPEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@QEAU2@$$QEAU2@@Z @ 0x1802D22FC
 * Callers:
 *     ?CheckMultiplaneOverlaySupport@CLegacySwapChain@@UEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x1801720D0 (-CheckMultiplaneOverlaySupport@CLegacySwapChain@@UEBA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0JA@@std@@YA_K_K@Z @ 0x1801725F8 (--$_Get_size_of_n@$0JA@@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V?$allocator@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@std@@@std@@AEAAXQEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@_K1@Z @ 0x180172628 (-_Change_array@-$vector@UDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@V-$allocator@UDXGI_CHEC.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

char *__fastcall std::vector<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO>::_Emplace_reallocate<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO>(
        const void **a1,
        _BYTE *a2,
        _OWORD *a3)
{
  unsigned __int64 v4; // rbx
  __int64 v7; // r15
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  char *v13; // rbp
  void *v14; // rcx
  char *v15; // r15
  _BYTE *v16; // r8
  _BYTE *v17; // rdx
  size_t v18; // r8

  v4 = 0x1C71C71C71C71C7LL;
  v7 = (a2 - (_BYTE *)*a1) / 144;
  v8 = 0x8E38E38E38E38E39uLL * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 4);
  if ( v8 == 0x1C71C71C71C71C7LL )
    std::_Xlength_error("vector too long");
  v9 = v8 + 1;
  v10 = 0x8E38E38E38E38E39uLL * (((_BYTE *)a1[2] - (_BYTE *)*a1) >> 4);
  v11 = v10 >> 1;
  if ( v10 <= 0x1C71C71C71C71C7LL - (v10 >> 1) )
  {
    v4 = v11 + v10;
    if ( v11 + v10 < v9 )
      v4 = v8 + 1;
  }
  size_of = std::_Get_size_of_n<144>(v4);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13;
  v15 = &v13[144 * v7];
  *(_OWORD *)v15 = *a3;
  *((_OWORD *)v15 + 1) = a3[1];
  *((_OWORD *)v15 + 2) = a3[2];
  *((_OWORD *)v15 + 3) = a3[3];
  *((_OWORD *)v15 + 4) = a3[4];
  *((_OWORD *)v15 + 5) = a3[5];
  *((_OWORD *)v15 + 6) = a3[6];
  *((_OWORD *)v15 + 7) = a3[7];
  *((_OWORD *)v15 + 8) = a3[8];
  v16 = a1[1];
  v17 = *a1;
  if ( a2 == v16 )
  {
    v18 = v16 - v17;
  }
  else
  {
    memmove_0(v13, v17, a2 - (_BYTE *)*a1);
    v14 = v15 + 144;
    v18 = (_BYTE *)a1[1] - a2;
    v17 = a2;
  }
  memmove_0(v14, v17, v18);
  std::vector<DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO>::_Change_array((__int64)a1, (__int64)v13, v9, v4);
  return v15;
}
