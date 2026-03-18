/*
 * XREFs of ?SetScaleX@?$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@QEAAJM@Z @ 0x180077C50
 * Callers:
 *     ?SetProperty@?$CRotateTransform3DGeneratedT@VCRotateTransform3D@@VCTransform3D@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180076F30 (-SetProperty@-$CRotateTransform3DGeneratedT@VCRotateTransform3D@@VCTransform3D@@@@MEAAJIW4DCOMPO.c)
 *     ?SetProperty@?$CTranslateTransformGeneratedT@VCTranslateTransform@@VCTransform@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180077A90 (-SetProperty@-$CTranslateTransformGeneratedT@VCTranslateTransform@@VCTransform@@@@MEAAJIW4DCOMPO.c)
 *     ?SetProperty@?$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180077B90 (-SetProperty@-$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@MEAAJIW4DCOMPOSITION_E.c)
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 *     ?SetProperty@?$CRotateTransformGeneratedT@VCRotateTransform@@VCTransform@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1802320A0 (-SetProperty@-$CRotateTransformGeneratedT@VCRotateTransform@@VCTransform@@@@MEAAJIW4DCOMPOSITION.c)
 *     ?SetProperty@?$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180284370 (-SetProperty@-$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@MEAAJIW4DCOMPOSI.c)
 *     ?SetProperty@?$CSkewTransformGeneratedT@VCSkewTransform@@VCTransform@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1802846E0 (-SetProperty@-$CSkewTransformGeneratedT@VCSkewTransform@@VCTransform@@@@MEAAJIW4DCOMPOSITION_EXP.c)
 *     ?SetProperty@?$CTranslateTransform3DGeneratedT@VCTranslateTransform3D@@VCTransform3D@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1802847E0 (-SetProperty@-$CTranslateTransform3DGeneratedT@VCTranslateTransform3D@@VCTransform3D@@@@MEAAJIW4.c)
 * Callees:
 *     ?OnPropertyChanged@CResource@@IEAAXXZ @ 0x180078FA4 (-OnPropertyChanged@CResource@@IEAAXXZ.c)
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
