/*
 * XREFs of ?RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ @ 0x1800E7EBC
 * Callers:
 *     ?RequestRedraw@CProjectedShadowCaster@@QEAAXXZ @ 0x18003BAAC (-RequestRedraw@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ??1CProjectedShadowScene@@UEAA@XZ @ 0x1800E733C (--1CProjectedShadowScene@@UEAA@XZ.c)
 *     ?InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ @ 0x1800E7528 (-InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ?ClearReceivers@CProjectedShadowScene@@AEAAXXZ @ 0x1800E7D78 (-ClearReceivers@CProjectedShadowScene@@AEAAXXZ.c)
 *     ?ProcessAddCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_ADDCASTERS@@PEBXI@Z @ 0x1800E7FAC (-ProcessAddCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOW.c)
 *     ?ClearCasters@CProjectedShadowScene@@AEAAXXZ @ 0x1802469F0 (-ClearCasters@CProjectedShadowScene@@AEAAXXZ.c)
 *     ?SetBlurRadiusMultiplier@CProjectedShadowScene@@AEAAXM@Z @ 0x18024FDFC (-SetBlurRadiusMultiplier@CProjectedShadowScene@@AEAAXM@Z.c)
 *     ?ProcessSetLightSource@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_SETLIGHTSOURCE@@@Z @ 0x1802A224C (-ProcessSetLightSource@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSH.c)
 *     ?SetMaxBlurRadius@CProjectedShadowScene@@AEAAXM@Z @ 0x1802A23BC (-SetMaxBlurRadius@CProjectedShadowScene@@AEAAXM@Z.c)
 *     ?SetMaxOpacity@CProjectedShadowScene@@AEAAXM@Z @ 0x1802A2408 (-SetMaxOpacity@CProjectedShadowScene@@AEAAXM@Z.c)
 *     ?SetMinBlurRadius@CProjectedShadowScene@@AEAAXM@Z @ 0x1802A2470 (-SetMinBlurRadius@CProjectedShadowScene@@AEAAXM@Z.c)
 *     ?SetMinOpacity@CProjectedShadowScene@@AEAAXM@Z @ 0x1802A24BC (-SetMinOpacity@CProjectedShadowScene@@AEAAXM@Z.c)
 *     ?SetOpacityFalloff@CProjectedShadowScene@@AEAAXM@Z @ 0x1802A2524 (-SetOpacityFalloff@CProjectedShadowScene@@AEAAXM@Z.c)
 * Callees:
 *     ?RequestRedraw@CProjectedShadowReceiver@@QEAAXXZ @ 0x1800E7EFC (-RequestRedraw@CProjectedShadowReceiver@@QEAAXXZ.c)
 */

void __fastcall CProjectedShadowScene::RequestRedrawAll(CProjectedShadowScene *this)
{
  __int64 ***v1; // rdi
  __int64 **i; // rbx

  if ( !CCommonRegistryData::DisableProjectedShadows )
  {
    v1 = (__int64 ***)*((_QWORD *)this + 11);
    for ( i = *v1; i != (__int64 **)v1; i = (__int64 **)*i )
      CProjectedShadowReceiver::RequestRedraw((CProjectedShadowReceiver *)i[2]);
  }
}
