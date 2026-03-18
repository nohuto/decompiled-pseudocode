/*
 * XREFs of ?InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ @ 0x180250038
 * Callers:
 *     ?OnLayoutChanged@CVisual@@AEAAXXZ @ 0x18010FDE0 (-OnLayoutChanged@CVisual@@AEAAXXZ.c)
 *     ?SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z @ 0x180250644 (-SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z.c)
 *     ?NotifyOnChanged@CProjectedShadowReceiver@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1802A1FA0 (-NotifyOnChanged@CProjectedShadowReceiver@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnDestroyingReceivingVisual@CProjectedShadowReceiver@@QEAAXXZ @ 0x1802A1FEC (-OnDestroyingReceivingVisual@CProjectedShadowReceiver@@QEAAXXZ.c)
 *     ?ProcessSetMask@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWRECEIVER_SETMASK@@@Z @ 0x1802A2064 (-ProcessSetMask@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOW.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCShadowMaskProducer@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@VCShadowMaskProducer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RequestRedraw@CProjectedShadowReceiver@@QEAAXXZ @ 0x1800E7EFC (-RequestRedraw@CProjectedShadowReceiver@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
