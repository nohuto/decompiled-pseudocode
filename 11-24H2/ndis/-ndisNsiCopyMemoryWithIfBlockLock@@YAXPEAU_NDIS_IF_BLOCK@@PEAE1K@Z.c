/*
 * XREFs of ?ndisNsiCopyMemoryWithIfBlockLock@@YAXPEAU_NDIS_IF_BLOCK@@PEAE1K@Z @ 0x140003900
 * Callers:
 *     ndisNsiGetInterfaceRodEnumObject @ 0x14016C5D0 (ndisNsiGetInterfaceRodEnumObject.c)
 *     ndisNsiGetInterfaceRodInformation @ 0x14016CC70 (ndisNsiGetInterfaceRodInformation.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x140010F90 (NdisReferenceWithTag.c)
 *     ?IFBLOCK_DEREFERENCE_MINIPORT_LINK@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140014E70 (-IFBLOCK_DEREFERENCE_MINIPORT_LINK@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1400353A0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 */

void __fastcall ndisNsiCopyMemoryWithIfBlockLock(
        struct _NDIS_IF_BLOCK *a1,
        unsigned __int8 *a2,
        unsigned __int8 *Src,
        size_t Size)
{
  size_t v5; // rbx
  _NDIS_MINIPORT_BLOCK *Miniport; // rsi
  __int64 v9; // rdx
  KIRQL v10; // bp
  KIRQL v11; // dl
  KIRQL v12; // bl
  KIRQL NewIrql; // [rsp+40h] [rbp+8h] BYREF

  v5 = (unsigned int)Size;
  Miniport = 0LL;
  v10 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  NewIrql = v10;
  if ( a1->MiniportAvailable )
  {
    LOBYTE(v9) = 2;
    Miniport = a1->Miniport;
    NdisReferenceWithTag(a1->MpRefCountTracker, v9);
    ++a1->MiniportLinkReference;
  }
  else
  {
    memmove(a2, Src, v5);
  }
  KeReleaseSpinLock(&SpinLock, v10);
  if ( Miniport )
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(Miniport, &NewIrql);
    memmove(a2, Src, v5);
    v11 = NewIrql;
    Miniport->MiniportThread = 0LL;
    KeReleaseSpinLock(&Miniport->Lock, v11);
    v12 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    IFBLOCK_DEREFERENCE_MINIPORT_LINK(a1, MPIFREF_QUERYOBJ);
    KeReleaseSpinLock(&SpinLock, v12);
  }
}
