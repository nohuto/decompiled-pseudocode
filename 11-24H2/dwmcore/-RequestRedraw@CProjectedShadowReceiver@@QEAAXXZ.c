/*
 * XREFs of ?RequestRedraw@CProjectedShadowReceiver@@QEAAXXZ @ 0x1800E7EFC
 * Callers:
 *     ?ProcessAddReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_ADDRECEIVERS@@PEBXI@Z @ 0x1800E7C78 (-ProcessAddReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHAD.c)
 *     ?NotifyOnChanged@CProjectedShadowScene@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800E7E70 (-NotifyOnChanged@CProjectedShadowScene@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ @ 0x1800E7EBC (-RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ.c)
 *     ?InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ @ 0x180250038 (-InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ.c)
 *     ?ProcessSetDrawOrder@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWRECEIVER_SETDRAWORDER@@@Z @ 0x1802A2040 (-ProcessSetDrawOrder@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDS.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CProjectedShadowReceiver::RequestRedraw(CProjectedShadowReceiver *this)
{
  __int64 v1; // rcx

  if ( !CCommonRegistryData::DisableProjectedShadows )
  {
    v1 = *((_QWORD *)this + 9);
    if ( v1 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 80LL))(v1, 1LL);
  }
}
