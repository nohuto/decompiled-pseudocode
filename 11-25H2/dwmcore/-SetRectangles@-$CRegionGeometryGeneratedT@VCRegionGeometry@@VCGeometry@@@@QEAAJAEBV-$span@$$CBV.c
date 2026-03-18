/*
 * XREFs of ?SetRectangles@?$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@QEAAJAEBV?$span@$$CBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@$0?0@gsl@@@Z @ 0x180078D0C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180061220 (-IsEmpty@-$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??$_Insert_counted_range@PEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@?$vector@V?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@V?$allocator@V?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@std@@@std@@@1@PEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@_K@Z @ 0x180078D94 (--$_Insert_counted_range@PEBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRect.c)
 *     ?OnPropertyChanged@CResource@@IEAAXXZ @ 0x180078FA4 (-OnPropertyChanged@CResource@@IEAAXXZ.c)
 */

__int64 __fastcall CRegionGeometryGeneratedT<CRegionGeometry,CGeometry>::SetRectangles(CResource *this, _QWORD *a2)
{
  char *v2; // rdi
  __int64 v4; // rax
  _DWORD *v5; // rcx
  _DWORD *v6; // rdx
  __int64 v7; // rcx

  v2 = (char *)this + 136;
  v4 = *((_QWORD *)this + 17);
  if ( v4 != *((_QWORD *)this + 18) )
    *((_QWORD *)this + 18) = v4;
  std::vector<TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>>::_Insert_counted_range<TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_> const *>(
    (char *)this + 136,
    *((_QWORD *)this + 18),
    a2[1],
    (16LL * *a2) >> 4);
  *((_BYTE *)this + 160) = 1;
  v5 = *(_DWORD **)v2;
  v6 = (_DWORD *)*((_QWORD *)v2 + 1);
  while ( v5 != v6 )
  {
    if ( !TMilRect<int,tagRECT,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::IsEmpty(v5) )
    {
      *((_BYTE *)this + 160) = 0;
      break;
    }
    v5 = (_DWORD *)(v7 + 16);
  }
  CResource::OnPropertyChanged(this);
  return 0LL;
}
