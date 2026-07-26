/*
 * XREFs of ?ndisMUpdateHiddenFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z @ 0x14007F010
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x140072EB0 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisIfUpdateIfBlockFromPersistedState @ 0x14015269C (ndisIfUpdateIfBlockFromPersistedState.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x140181730 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x14000E820 (NdisReferenceWithTag.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x14004C210 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     ?ndisIfUpdateInterfaceHiddenFlag@@YAXPEAU_NDIS_IF_BLOCK@@_N@Z @ 0x140172C30 (-ndisIfUpdateInterfaceHiddenFlag@@YAXPEAU_NDIS_IF_BLOCK@@_N@Z.c)
 */

void __fastcall ndisMUpdateHiddenFlag(struct _NDIS_MINIPORT_BLOCK *a1, bool a2)
{
  KIRQL v4; // al
  unsigned int PnPFlags; // edx
  unsigned int v6; // r8d
  unsigned int v7; // edx
  KIRQL v8; // al
  _LIST_ENTRY *Blink; // rbx
  KIRQL v10; // r14
  _LIST_ENTRY *v11; // rdi
  KIRQL v12; // al

  if ( a2 != ((a1->PnPFlags & 0x1000) != 0) )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    PnPFlags = a1->PnPFlags;
    v6 = PnPFlags | 0x1000;
    v7 = PnPFlags & 0xFFFFEFFF;
    if ( !a2 )
      v6 = v7;
    a1->PnPFlags = v6;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v4);
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
    Blink = WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink;
    v10 = v8;
    while ( Blink != (_LIST_ENTRY *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink )
    {
      v11 = Blink - 77;
      if ( BYTE2(Blink[10].Flink) && (struct _NDIS_MINIPORT_BLOCK *)v11[88].Flink[2].Flink == a1 )
      {
        NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v11[89].Blink, 0xEu);
        ++LODWORD(v11[81].Blink);
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v10);
        ndisIfUpdateInterfaceHiddenFlag((struct _NDIS_IF_BLOCK *)&Blink[-77], a2);
        v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
        Blink = Blink->Flink;
        v10 = v12;
        IFBLOCK_DECREMENT_REF((char *)v11, 0xEu);
      }
      else
      {
        Blink = Blink->Flink;
      }
    }
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v10);
    if ( (a1->Flags & 0x100) == 0 )
      IoInvalidateDeviceState(a1->PhysicalDeviceObject);
  }
}
