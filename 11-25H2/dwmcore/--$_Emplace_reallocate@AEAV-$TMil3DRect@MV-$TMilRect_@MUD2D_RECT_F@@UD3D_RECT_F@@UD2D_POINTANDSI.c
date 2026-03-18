/*
 * XREFs of ??$_Emplace_reallocate@AEAV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@AEAAPEAV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAV2@AEAV2@@Z @ 0x180299A00
 * Callers:
 *     ?GetContentBounds@CCursorVisual@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18029A220 (-GetContentBounds@CCursorVisual@@UEAAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x1800FED34 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

char *__fastcall std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Emplace_reallocate<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded> &>(
        __int64 a1,
        _BYTE *a2,
        __int64 a3)
{
  unsigned __int64 v4; // rdi
  __int64 v7; // r12
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  char *v13; // rax
  char *v14; // rsi
  char *v15; // rbp
  void *v16; // rcx
  _BYTE *v17; // r8
  _BYTE *v18; // rdx
  size_t v19; // r8
  char *result; // rax

  v4 = 0xAAAAAAAAAAAAAAALL;
  v7 = (__int64)&a2[-*(_QWORD *)a1] / 24;
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
  if ( v8 == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("vector too long");
  v9 = v8 + 1;
  v10 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3);
  v11 = v10 >> 1;
  if ( v10 <= 0xAAAAAAAAAAAAAAALL - (v10 >> 1) )
  {
    v4 = v11 + v10;
    if ( v11 + v10 < v9 )
      v4 = v9;
  }
  size_of = std::_Get_size_of_n<24>(v4);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13;
  v15 = &v13[24 * v7];
  v16 = v13;
  *(_OWORD *)v15 = *(_OWORD *)a3;
  *((_QWORD *)v15 + 2) = *(_QWORD *)(a3 + 16);
  v17 = *(_BYTE **)(a1 + 8);
  v18 = *(_BYTE **)a1;
  if ( a2 == v17 )
  {
    v19 = v17 - v18;
  }
  else
  {
    memmove_0(v13, v18, (size_t)&a2[-*(_QWORD *)a1]);
    v16 = v15 + 24;
    v19 = *(_QWORD *)(a1 + 8) - (_QWORD)a2;
    v18 = a2;
  }
  memmove_0(v16, v18, v19);
  if ( *(_QWORD *)a1 )
    std::_Deallocate<16,0>(*(_QWORD **)a1, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3));
  *(_QWORD *)a1 = v14;
  result = v15;
  *(_QWORD *)(a1 + 8) = &v14[24 * v9];
  *(_QWORD *)(a1 + 16) = &v14[24 * v4];
  return result;
}
