/*
 * XREFs of ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x180180410
 * Callers:
 *     ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x18017DD60 (-Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z.c)
 *     ?ProcessSetPath@CPathGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PATHGEOMETRY_SETPATH@@@Z @ 0x1801807C4 (-ProcessSetPath@CPathGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PATHGEOMETRY_SETPATH@@@Z.c)
 *     ?ProcessSetPathData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETPATHDATA@@PEBXI@Z @ 0x180180DBC (-ProcessSetPathData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION.c)
 *     ?GetSimplifiedPathDataInternal@CShape@@MEBAJPEAPEAVCPathData@@@Z @ 0x1801ABA00 (-GetSimplifiedPathDataInternal@CShape@@MEBAJPEAPEAVCPathData@@@Z.c)
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x18023D924 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMA.c)
 *     ?GetShapeDataCore@CLineGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18029F4C0 (-GetShapeDataCore@CLineGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Simplify@CPathData@@QEBAJPEAPEAV1@@Z @ 0x1802B6440 (-Simplify@CPathData@@QEBAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0?$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ @ 0x18002465C (--0-$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ.c)
 *     ??$_Insert_counted_range@PEBE@?$vector@EV?$allocator@E@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@PEBE_K@Z @ 0x18017E53C (--$_Insert_counted_range@PEBE@-$vector@EV-$allocator@E@std@@@std@@AEAAXV-$_Vector_const_iterator.c)
 *     ?reserve@?$vector@EV?$allocator@E@std@@@std@@QEAAX_K@Z @ 0x1801804C8 (-reserve@-$vector@EV-$allocator@E@std@@@std@@QEAAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPathData::CPathData(__int64 a1, __int64 a2, size_t *a3)
{
  __int64 v5; // rdx
  size_t v6; // rsi
  char *v7; // r8

  CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>::CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>(a1);
  *(_QWORD *)a1 = &CPathData::`vftable';
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_BYTE *)(a1 + 66) = 0;
  v6 = *a3;
  std::vector<unsigned char>::reserve(a1 + 16, *a3);
  v7 = (char *)a3[1];
  if ( v7 > &v7[v6] )
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
  std::vector<unsigned char>::_Insert_counted_range<unsigned char const *>(a1 + 16, *(_BYTE **)(a1 + 24), v7, v6);
  return a1;
}
