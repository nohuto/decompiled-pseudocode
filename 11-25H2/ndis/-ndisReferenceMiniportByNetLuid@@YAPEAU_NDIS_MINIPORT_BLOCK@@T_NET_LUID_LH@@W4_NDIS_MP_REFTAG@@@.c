/*
 * XREFs of ?ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@Z @ 0x14004AF60
 * Callers:
 *     ?ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@@EW4_NDIS_MP_REFTAG@@PEAJPEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14004AD60 (-ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@.c)
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x14018C2D0 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x14000E820 (NdisReferenceWithTag.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000E960 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z @ 0x14004B090 (-ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z.c)
 *     ?ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x14004B0D0 (-ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG.c)
 */

struct _NDIS_MINIPORT_BLOCK *__fastcall ndisReferenceMiniportByNetLuid(union _NET_LUID_LH a1, unsigned __int8 a2)
{
  KIRQL v4; // si
  struct _NDIS_IF_BLOCK *InterfaceByNetLuid; // rbx
  _NDIS_MINIPORT_BLOCK *Miniport; // rdi
  KIRQL v7; // r14
  struct _NDIS_MINIPORT_BLOCK *v8; // rdx

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid(a1);
  if ( InterfaceByNetLuid )
  {
    Miniport = 0LL;
    v7 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    if ( InterfaceByNetLuid->MiniportAvailable )
    {
      Miniport = InterfaceByNetLuid->Miniport;
      NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)InterfaceByNetLuid->MpRefCountTracker, 1u);
      ++InterfaceByNetLuid->MiniportLinkReference;
    }
    KeReleaseSpinLock(&SpinLock, v7);
    if ( Miniport )
    {
      if ( (Miniport->PnPFlags & 0x1080110) == 0
        && Miniport->PnPDeviceState == NdisPnPDeviceStarted
        && (unsigned __int8)ndisReferenceMiniport(Miniport, a2) )
      {
        ndisIfDereferenceMiniport(InterfaceByNetLuid, v8, MPIFREF_AOAC);
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v4);
        return Miniport;
      }
      ndisIfDereferenceMiniport(InterfaceByNetLuid, v8, MPIFREF_AOAC);
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v4);
  return 0LL;
}
