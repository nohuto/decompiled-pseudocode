/*
 * XREFs of ?RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ @ 0x1801B7B6C
 * Callers:
 *     ?RequestRedraw@CProjectedShadowCaster@@QEAAXXZ @ 0x18012FDC4 (-RequestRedraw@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ??1CProjectedShadowScene@@UEAA@XZ @ 0x1801B704C (--1CProjectedShadowScene@@UEAA@XZ.c)
 *     ?InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ @ 0x1801B7238 (-InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ?ClearReceivers@CProjectedShadowScene@@AEAAXXZ @ 0x1801B7A24 (-ClearReceivers@CProjectedShadowScene@@AEAAXXZ.c)
 *     ?ProcessAddCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_ADDCASTERS@@PEBXI@Z @ 0x1801B7C5C (-ProcessAddCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOW.c)
 *     ?ClearCasters@CProjectedShadowScene@@AEAAXXZ @ 0x18025191C (-ClearCasters@CProjectedShadowScene@@AEAAXXZ.c)
 *     ?SetBlurRadiusMultiplier@CProjectedShadowScene@@AEAAXM@Z @ 0x18025B32C (-SetBlurRadiusMultiplier@CProjectedShadowScene@@AEAAXM@Z.c)
 *     ?ProcessSetLightSource@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_SETLIGHTSOURCE@@@Z @ 0x1802ABD6C (-ProcessSetLightSource@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSH.c)
 *     ?SetMaxBlurRadius@CProjectedShadowScene@@AEAAXM@Z @ 0x1802ABEDC (-SetMaxBlurRadius@CProjectedShadowScene@@AEAAXM@Z.c)
 *     ?SetMaxOpacity@CProjectedShadowScene@@AEAAXM@Z @ 0x1802ABF28 (-SetMaxOpacity@CProjectedShadowScene@@AEAAXM@Z.c)
 *     ?SetMinBlurRadius@CProjectedShadowScene@@AEAAXM@Z @ 0x1802ABF90 (-SetMinBlurRadius@CProjectedShadowScene@@AEAAXM@Z.c)
 *     ?SetMinOpacity@CProjectedShadowScene@@AEAAXM@Z @ 0x1802ABFDC (-SetMinOpacity@CProjectedShadowScene@@AEAAXM@Z.c)
 *     ?SetOpacityFalloff@CProjectedShadowScene@@AEAAXM@Z @ 0x1802AC044 (-SetOpacityFalloff@CProjectedShadowScene@@AEAAXM@Z.c)
 * Callees:
 *     ?RequestRedraw@CProjectedShadowReceiver@@QEAAXXZ @ 0x1801B7BAC (-RequestRedraw@CProjectedShadowReceiver@@QEAAXXZ.c)
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
