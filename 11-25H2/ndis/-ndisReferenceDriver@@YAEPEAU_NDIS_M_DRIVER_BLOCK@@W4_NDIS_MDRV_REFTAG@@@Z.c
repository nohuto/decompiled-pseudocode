/*
 * XREFs of ?ndisReferenceDriver@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@W4_NDIS_MDRV_REFTAG@@@Z @ 0x14000E620
 * Callers:
 *     ?ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x14017F110 (-ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z.c)
 *     ?ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140183D40 (-ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x140186B80 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x14000E820 (NdisReferenceWithTag.c)
 */

bool __fastcall ndisReferenceDriver(struct _NDIS_M_DRIVER_BLOCK *a1, unsigned __int8 a2)
{
  _REFERENCE_EX *p_Ref; // rbx
  int v4; // edi
  KIRQL v5; // si
  unsigned __int16 ReferenceCount; // cx

  p_Ref = &a1->Ref;
  v4 = 1;
  v5 = KeAcquireSpinLockRaiseToDpc(&a1->Ref.SpinLock);
  if ( !p_Ref->Closing )
  {
    ReferenceCount = p_Ref->ReferenceCount;
    if ( ReferenceCount >= 0xFFEBu )
    {
      ndisRefCountReferenceCountOverflow = 1;
      v4 = 2;
    }
    else
    {
      p_Ref->ReferenceCount = ReferenceCount + 1;
      NdisReferenceWithTag(p_Ref->RefCountTracker, a2);
      v4 = 0;
    }
  }
  KeReleaseSpinLock(&p_Ref->SpinLock, v5);
  return v4 == 0;
}
