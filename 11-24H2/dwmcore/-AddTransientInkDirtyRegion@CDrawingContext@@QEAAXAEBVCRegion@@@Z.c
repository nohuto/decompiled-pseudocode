/*
 * XREFs of ?AddTransientInkDirtyRegion@CDrawingContext@@QEAAXAEBVCRegion@@@Z @ 0x1800A600C
 * Callers:
 *     ?DrawFallback@CSuperWetInkScribbleBase@@UEAAJPEAVCDrawingContext@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A5C50 (-DrawFallback@CSuperWetInkScribbleBase@@UEAAJPEAVCDrawingContext@@PEAV-$TMilRect_@MUD2D_RECT_F@@.c)
 * Callees:
 *     ?AddRectangles@CRegion@@QEAAXPEBUtagRECT@@I@Z @ 0x18002EDA0 (-AddRectangles@CRegion@@QEAAXPEBUtagRECT@@I@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?GetRectangles@CRegion@@QEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x180040560 (-GetRectangles@CRegion@@QEBAIPEAV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@@Z.c)
 *     ?reserve@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAX_K@Z @ 0x180041EB8 (-reserve@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAAX_K@Z.c)
 *     std::transform_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_tagRECT______std::back_insert_iterator_std::vector_tagRECT_std::allocator_tagRECT_______lambda_c3c427167b990826593ca3f677af520c___ @ 0x1800A60E4 (std--transform_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_tagRECT______std--back_.c)
 */

void __fastcall CDrawingContext::AddTransientInkDirtyRegion(struct FastRegion::Internal::CRgnData **this, int **a2)
{
  __int128 v3; // [rsp+30h] [rbp-30h] BYREF
  __int64 v4; // [rsp+40h] [rbp-20h]
  struct tagRECT *v5[2]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v6; // [rsp+58h] [rbp-8h]
  char v7; // [rsp+70h] [rbp+10h] BYREF

  v4 = 0LL;
  v3 = 0LL;
  CRegion::GetRectangles(a2, (const void **)&v3);
  v6 = 0LL;
  *(_OWORD *)v5 = 0LL;
  std::vector<tagRECT>::reserve((const void **)v5, (__int64)(*((_QWORD *)&v3 + 1) - v3) >> 4);
  std::transform_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_tagRECT______std::back_insert_iterator_std::vector_tagRECT_std::allocator_tagRECT_______lambda_c3c427167b990826593ca3f677af520c___(
    (unsigned int)&v7,
    v3,
    DWORD2(v3),
    (unsigned int)v5,
    (char)this);
  CRegion::AddRectangles(this + 999, v5[0], v5[1] - v5[0]);
  if ( v5[0] )
  {
    std::_Deallocate<16,0>(&v5[0]->left, (v6 - (unsigned __int64)v5[0]) & 0xFFFFFFFFFFFFFFF0uLL);
    v6 = 0LL;
    *(_OWORD *)v5 = 0LL;
  }
  if ( (_QWORD)v3 )
    std::_Deallocate<16,0>((_QWORD *)v3, (v4 - v3) & 0xFFFFFFFFFFFFFFF0uLL);
}
