/*
 * XREFs of ?SetRectangles@?$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@QEAAJAEBV?$span@$$CBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@$0?0@gsl@@@Z @ 0x1800276FC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??$_Insert_counted_range@PEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@?$vector@V?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@V?$allocator@V?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@std@@@std@@@1@PEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@_K@Z @ 0x180027784 (--$_Insert_counted_range@PEBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRect.c)
 *     ?OnPropertyChanged@CResource@@IEAAXXZ @ 0x180027994 (-OnPropertyChanged@CResource@@IEAAXXZ.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180027EE0 (-IsEmpty@-$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 */

__int64 __fastcall CRegionGeometryGeneratedT<CRegionGeometry,CGeometry>::SetRectangles(CResource *this, _QWORD *a2)
{
  __int64 *v2; // rdi
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx

  v2 = (__int64 *)((char *)this + 136);
  v4 = *((_QWORD *)this + 17);
  if ( v4 != *((_QWORD *)this + 18) )
    *((_QWORD *)this + 18) = v4;
  std::vector<TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>>::_Insert_counted_range<TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_> const *>(
    (char *)this + 136,
    *((_QWORD *)this + 18),
    a2[1],
    (16LL * *a2) >> 4);
  *((_BYTE *)this + 160) = 1;
  v5 = *v2;
  v6 = v2[1];
  while ( v5 != v6 )
  {
    if ( !(unsigned __int8)TMilRect<int,tagRECT,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::IsEmpty(v5) )
    {
      *((_BYTE *)this + 160) = 0;
      break;
    }
    v5 = v7 + 16;
  }
  CResource::OnPropertyChanged(this);
  return 0LL;
}
