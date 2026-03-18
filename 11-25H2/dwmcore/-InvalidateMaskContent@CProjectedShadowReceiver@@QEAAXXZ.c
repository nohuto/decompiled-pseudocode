/*
 * XREFs of ?InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ @ 0x18025B630
 * Callers:
 *     ?OnLayoutChanged@CVisual@@AEAAXXZ @ 0x18014BA20 (-OnLayoutChanged@CVisual@@AEAAXXZ.c)
 *     ?SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z @ 0x18025BC74 (-SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z.c)
 *     ?NotifyOnChanged@CProjectedShadowReceiver@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1802ABAC0 (-NotifyOnChanged@CProjectedShadowReceiver@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnDestroyingReceivingVisual@CProjectedShadowReceiver@@QEAAXXZ @ 0x1802ABB0C (-OnDestroyingReceivingVisual@CProjectedShadowReceiver@@QEAAXXZ.c)
 *     ?ProcessSetMask@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWRECEIVER_SETMASK@@@Z @ 0x1802ABB84 (-ProcessSetMask@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOW.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCShadowMaskProducer@@@WRL@Microsoft@@IEAAKXZ @ 0x18012FE04 (-InternalRelease@-$ComPtr@VCShadowMaskProducer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RequestRedraw@CProjectedShadowReceiver@@QEAAXXZ @ 0x1801B7BAC (-RequestRedraw@CProjectedShadowReceiver@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CProjectedShadowReceiver::InvalidateMaskContent(CEffectIntermediateProducer **this)
{
  Microsoft::WRL::ComPtr<CShadowMaskProducer>::InternalRelease(this + 15);
  if ( !CCommonRegistryData::DisableProjectedShadows )
  {
    (*((void (__fastcall **)(CEffectIntermediateProducer **, _QWORD, CEffectIntermediateProducer **))*this + 10))(
      this,
      0LL,
      this);
    CProjectedShadowReceiver::RequestRedraw((CProjectedShadowReceiver *)this);
  }
}
