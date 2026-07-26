/*
 * XREFs of ?ndisInvokeDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_INVOKE_DEVICE_RESET@@W4_NDIS_MP_REFTAG@@@Z @ 0x140095630
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x14017F9C0 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140010D00 (-ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140011280 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140014380 (-ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG.c)
 *     ?ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z @ 0x14002A780 (-ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z.c)
 *     ?NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140038840 (-NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisInvokeDeviceReset(
        struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *a1,
        unsigned int a2,
        union _NET_LUID_LH *a3,
        enum _NDIS_MP_REFTAG a4)
{
  unsigned int v5; // ebx
  KIRQL v6; // bl
  struct _NDIS_IF_BLOCK *InterfaceByNetLuid; // rax
  struct _NDIS_IF_BLOCK *v8; // rsi
  struct _NDIS_MINIPORT_BLOCK *v9; // rax
  struct _NDIS_MINIPORT_BLOCK *v10; // rdx
  struct _NDIS_MINIPORT_BLOCK *v11; // rdi
  struct _NDIS_WDF_CX_DRIVER_BLOCK *CxBlockFromMiniport; // rax

  if ( *(_BYTE *)a1 )
  {
    if ( a2 >= 0x14 )
    {
      v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
      InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid(a3[1]);
      v8 = InterfaceByNetLuid;
      if ( InterfaceByNetLuid && (v9 = ndisIfReferenceMiniport(InterfaceByNetLuid, 0x19u), (v11 = v9) != 0LL) )
      {
        if ( (v9->PnPFlags & 0x1080110) == 0
          && v9->PnPDeviceState == NdisPnPDeviceStarted
          && (unsigned __int8)ndisReferenceMiniport(v9, 0x6Bu) )
        {
          ndisIfDereferenceMiniport(v8, v10, 0x19u);
          KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v6);
          if ( (v11->Flags & 0x80u) == 0 || (v11->Flags & 0x100) != 0 )
          {
            v5 = -1073741637;
          }
          else
          {
            CxBlockFromMiniport = NdisWdfGetCxBlockFromMiniport(v11);
            v5 = CxBlockFromMiniport->Chars.EvtCxMiniportDeviceReset(v11->MiniportAdapterContext, a3[2].Value);
          }
          ndisDereferenceMiniport(v11, 0x6Bu);
        }
        else
        {
          ndisIfDereferenceMiniport(v8, v10, 0x19u);
          KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v6);
          return (unsigned int)-1073741436;
        }
      }
      else
      {
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v6);
        return (unsigned int)-1071448058;
      }
    }
    else
    {
      return (unsigned int)-1073741789;
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v5;
}
