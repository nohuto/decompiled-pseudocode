/*
 * XREFs of ??$_Emplace_reallocate@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@?$vector@UDWM_PRESENT_MULTIPLANE_OVERLAY@@V?$allocator@UDWM_PRESENT_MULTIPLANE_OVERLAY@@@std@@@std@@AEAAPEAUDWM_PRESENT_MULTIPLANE_OVERLAY@@QEAU2@AEBU2@@Z @ 0x1801EC59C
 * Callers:
 *     ?PresentMPO@COverlayContext@@IEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@PEAIPEA_N@Z @ 0x1801BFBDC (-PresentMPO@COverlayContext@@IEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@Ut.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0IA@@std@@YA_K_K@Z @ 0x1801EC758 (--$_Get_size_of_n@$0IA@@std@@YA_K_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

char *__fastcall std::vector<DWM_PRESENT_MULTIPLANE_OVERLAY>::_Emplace_reallocate<DWM_PRESENT_MULTIPLANE_OVERLAY const &>(
        _QWORD *a1,
        _QWORD *a2,
        _OWORD *a3)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // r14
  __int64 v6; // rsi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  char *v13; // rbp
  char *v14; // r14
  void *v15; // rcx
  _BYTE *v16; // r8
  _QWORD *v17; // rdx
  size_t v18; // r8
  _QWORD *v19; // rcx
  unsigned __int64 v20; // rdx
  char *result; // rax

  v3 = 0x1FFFFFFFFFFFFFFLL;
  v4 = (unsigned __int64)a2 - *a1;
  v6 = (__int64)(a1[1] - *a1) >> 7;
  if ( v6 == 0x1FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v6 + 1;
  v10 = (__int64)(a1[2] - *a1) >> 7;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v9;
  }
  size_of = std::_Get_size_of_n<128>(v3);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = &v13[v4 & 0xFFFFFFFFFFFFFF80uLL];
  v15 = v13;
  *(_OWORD *)v14 = *a3;
  *((_OWORD *)v14 + 1) = a3[1];
  *((_OWORD *)v14 + 2) = a3[2];
  *((_OWORD *)v14 + 3) = a3[3];
  *((_OWORD *)v14 + 4) = a3[4];
  *((_OWORD *)v14 + 5) = a3[5];
  *((_OWORD *)v14 + 6) = a3[6];
  *((_OWORD *)v14 + 7) = a3[7];
  v16 = (_BYTE *)a1[1];
  v17 = (_QWORD *)*a1;
  if ( a2 == (_QWORD *)v16 )
  {
    v18 = v16 - (_BYTE *)v17;
  }
  else
  {
    memmove_0(v13, v17, (size_t)a2 - *a1);
    v15 = v14 + 128;
    v18 = a1[1] - (_QWORD)a2;
    v17 = a2;
  }
  memmove_0(v15, v17, v18);
  v19 = (_QWORD *)*a1;
  if ( *a1 )
  {
    v20 = (a1[2] - (_QWORD)v19) & 0xFFFFFFFFFFFFFF80uLL;
    if ( v20 >= 0x1000 )
    {
      v20 += 39LL;
      if ( (unsigned __int64)v19 - *(v19 - 1) - 8 > 0x1F )
        _invalid_parameter_noinfo_noreturn();
      v19 = (_QWORD *)*(v19 - 1);
    }
    operator delete(v19, v20);
  }
  *a1 = v13;
  result = v14;
  a1[1] = &v13[128 * v9];
  a1[2] = &v13[128 * v3];
  return result;
}
