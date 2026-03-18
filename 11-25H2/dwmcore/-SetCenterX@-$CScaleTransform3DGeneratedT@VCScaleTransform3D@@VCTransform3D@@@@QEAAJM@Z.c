/*
 * XREFs of ?SetCenterX@?$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@QEAAJM@Z @ 0x180229AD8
 * Callers:
 *     ?SetProperty@?$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180077B90 (-SetProperty@-$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@MEAAJIW4DCOMPOSITION_E.c)
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 *     ?SetProperty@?$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180284370 (-SetProperty@-$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@MEAAJIW4DCOMPOSI.c)
 *     ?SetProperty@?$CSkewTransformGeneratedT@VCSkewTransform@@VCTransform@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1802846E0 (-SetProperty@-$CSkewTransformGeneratedT@VCSkewTransform@@VCTransform@@@@MEAAJIW4DCOMPOSITION_EXP.c)
 * Callees:
 *     ?OnPropertyChanged@CResource@@IEAAXXZ @ 0x180078FA4 (-OnPropertyChanged@CResource@@IEAAXXZ.c)
 */

__int64 __fastcall CScaleTransform3DGeneratedT<CScaleTransform3D,CTransform3D>::SetCenterX(float *a1, float a2)
{
  if ( a2 != a1[43] )
  {
    a1[43] = a2;
    CResource::OnPropertyChanged((CResource *)a1);
  }
  return 0LL;
}
