/*
 * XREFs of ??$_Insert_counted_range@PEBUD2D_RECT_F@@@?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UD2D_RECT_F@@@std@@@std@@@1@PEBUD2D_RECT_F@@_K@Z @ 0x180078700
 * Callers:
 *     ?SetDestinationRectangles@?$CAtlasedRectsMeshGeneratedT@VCAtlasedRectsMesh@@VCResource@@@@QEAAJAEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@@Z @ 0x18007811C (-SetDestinationRectangles@-$CAtlasedRectsMeshGeneratedT@VCAtlasedRectsMesh@@VCResource@@@@QEAAJA.c)
 *     ?SetSourceRectangles@?$CAtlasedRectsMeshGeneratedT@VCAtlasedRectsMesh@@VCResource@@@@QEAAJAEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@@Z @ 0x180078650 (-SetSourceRectangles@-$CAtlasedRectsMeshGeneratedT@VCAtlasedRectsMesh@@VCResource@@@@QEAAJAEBV-$.c)
 *     ??$insert@PEBUD2D_RECT_F@@$0A@@?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UD2D_RECT_F@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UD2D_RECT_F@@@std@@@std@@@1@PEBUD2D_RECT_F@@1@Z @ 0x1800786A4 (--$insert@PEBUD2D_RECT_F@@$0A@@-$vector@UD2D_RECT_F@@V-$allocator@UD2D_RECT_F@@@std@@@std@@QEAA-.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x18006BBB0 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAXQEAUtagRECT@@_K1@Z @ 0x180078058 (-_Change_array@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAXQEAUtagRECT@@_K1@Z.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

void __fastcall std::vector<D2D_RECT_F>::_Insert_counted_range<D2D_RECT_F const *>(
        __int64 a1,
        _BYTE *a2,
        const void *a3,
        unsigned __int64 a4)
{
  _BYTE *v4; // rdi
  __int64 v6; // rdx
  _BYTE *v8; // r14
  size_t v11; // r14
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rsi
  __int64 v14; // rcx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  SIZE_T size_of; // rax
  char *v19; // r13
  size_t v20; // r8
  const void *v21; // rdx
  char *v22; // rcx
  __int64 v24; // [rsp+88h] [rbp+20h]

  if ( a4 )
  {
    v4 = *(_BYTE **)(a1 + 8);
    v6 = *(_QWORD *)(a1 + 16);
    v8 = *(_BYTE **)a1;
    if ( a4 > (v6 - (__int64)v4) >> 4 )
    {
      v13 = 0xFFFFFFFFFFFFFFFLL;
      v14 = (v4 - v8) >> 4;
      if ( a4 > 0xFFFFFFFFFFFFFFFLL - v14 )
        std::_Xlength_error("vector too long");
      v15 = v14 + a4;
      v16 = (v6 - (__int64)v8) >> 4;
      v24 = v14 + a4;
      v17 = v16 >> 1;
      if ( v16 <= 0xFFFFFFFFFFFFFFFLL - (v16 >> 1) )
      {
        v13 = v17 + v16;
        if ( v17 + v16 < v15 )
          v13 = v15;
      }
      size_of = std::_Get_size_of_n<16>(v13);
      v19 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
      memmove_0(&v19[16 * ((a2 - v8) >> 4)], a3, 16 * a4);
      if ( a4 == 1 && a2 == v4 )
      {
        v20 = v4 - v8;
        v21 = v8;
        v22 = v19;
      }
      else
      {
        memmove_0(v19, v8, a2 - v8);
        v20 = v4 - a2;
        v21 = a2;
        v22 = &v19[16 * a4 + 16 * ((a2 - v8) >> 4)];
      }
      memmove_0(v22, v21, v20);
      std::vector<tagRECT>::_Change_array(a1, (__int64)v19, v24, v13);
    }
    else
    {
      v11 = 16 * a4;
      v12 = (v4 - a2) >> 4;
      if ( a4 < v12 )
      {
        memmove_0(*(void **)(a1 + 8), &v4[-v11], 16 * a4);
        *(_QWORD *)(a1 + 8) = &v4[v11];
        memmove_0(&a2[16 * a4], a2, (size_t)&v4[-16LL * a4 - (_QWORD)a2]);
      }
      else
      {
        memmove_0(&a2[v11], a2, v4 - a2);
        *(_QWORD *)(a1 + 8) = &a2[16 * v12 + v11];
      }
      memmove_0(a2, a3, v11);
    }
  }
}
