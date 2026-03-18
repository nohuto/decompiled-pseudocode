/*
 * XREFs of ?SetScaleX@?$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z @ 0x1802029C0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 *     ?SetProperty@?$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180202900 (-SetProperty@-$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@MEAAJIW4DCOMPOSITION_E.c)
 *     ?SetProperty@?$CTranslateTransformGeneratedT@VCTranslateTransform@@VCTransform@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18020AC90 (-SetProperty@-$CTranslateTransformGeneratedT@VCTranslateTransform@@VCTransform@@@@MEAAJIW4DCOMPO.c)
 *     ?SetProperty@?$CRotateTransform3DGeneratedT@VCRotateTransform3D@@VCTransform3D@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180211EB0 (-SetProperty@-$CRotateTransform3DGeneratedT@VCRotateTransform3D@@VCTransform3D@@@@MEAAJIW4DCOMPO.c)
 *     ?SetProperty@?$CRotateTransformGeneratedT@VCRotateTransform@@VCTransform@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180226430 (-SetProperty@-$CRotateTransformGeneratedT@VCRotateTransform@@VCTransform@@@@MEAAJIW4DCOMPOSITION.c)
 *     ?SetProperty@?$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180279750 (-SetProperty@-$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@MEAAJIW4DCOMPOSI.c)
 *     ?SetProperty@?$CSkewTransformGeneratedT@VCSkewTransform@@VCTransform@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180279AC0 (-SetProperty@-$CSkewTransformGeneratedT@VCSkewTransform@@VCTransform@@@@MEAAJIW4DCOMPOSITION_EXP.c)
 *     ?SetProperty@?$CTranslateTransform3DGeneratedT@VCTranslateTransform3D@@VCTransform3D@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180279BC0 (-SetProperty@-$CTranslateTransform3DGeneratedT@VCTranslateTransform3D@@VCTransform3D@@@@MEAAJIW4.c)
 * Callees:
 *     ?OnPropertyChanged@CResource@@IEAAXXZ @ 0x180027994 (-OnPropertyChanged@CResource@@IEAAXXZ.c)
 */

__int64 __fastcall CScaleTransformGeneratedT<CScaleTransform,CTransform>::SetScaleX(float *a1, float a2)
{
  if ( a2 != a1[40] )
  {
    a1[40] = a2;
    CResource::OnPropertyChanged((CResource *)a1);
  }
  return 0LL;
}
