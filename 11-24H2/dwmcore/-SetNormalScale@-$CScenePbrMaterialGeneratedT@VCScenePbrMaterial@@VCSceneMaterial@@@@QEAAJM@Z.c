/*
 * XREFs of ?SetNormalScale@?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@QEAAJM@Z @ 0x180278E34
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?OnNormalScaleChanged@CScenePbrMaterial@@QEAAXXZ @ 0x1802A5350 (-OnNormalScaleChanged@CScenePbrMaterial@@QEAAXXZ.c)
 */

__int64 __fastcall CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>::SetNormalScale(float *a1, float a2)
{
  if ( a2 != a1[30] )
  {
    a1[30] = a2;
    CScenePbrMaterial::OnNormalScaleChanged((CScenePbrMaterial *)a1);
  }
  return 0LL;
}
