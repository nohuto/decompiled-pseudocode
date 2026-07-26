/*
 * XREFs of ?ndisQueryMiniportOffloadCaps@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400BD890
 * Callers:
 *     ?ndisOidPreOffloadCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BB420 (-ndisOidPreOffloadCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1400353A0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisCopyNdisOffload@@YAXPEAU_NDIS_OFFLOAD@@0IPEAIE@Z @ 0x14006FFC0 (-ndisCopyNdisOffload@@YAXPEAU_NDIS_OFFLOAD@@0IPEAIE@Z.c)
 */

__int64 __fastcall ndisQueryMiniportOffloadCaps(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  _NDIS_MINIPORT_OFFLOAD *Offload; // rdx
  UINT InformationBufferLength; // r8d
  unsigned int v6; // ebx
  KIRQL NewIrql; // [rsp+40h] [rbp+8h] BYREF

  NewIrql = 0;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  Offload = a1->Offload;
  if ( Offload && Offload->SupportsOffload == 1 )
  {
    InformationBufferLength = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
    v6 = 0;
    if ( InformationBufferLength >= 0x70 )
    {
      ndisCopyNdisOffload(
        (struct _NDIS_OFFLOAD *)a2->DATA.QUERY_INFORMATION.InformationBuffer,
        &Offload->MiniportCurrentConfig,
        InformationBufferLength,
        &a2->DATA.QUERY_INFORMATION.BytesWritten,
        0);
    }
    else
    {
      a2->DATA.QUERY_INFORMATION.BytesNeeded = 112;
      v6 = -1073676268;
    }
  }
  else
  {
    v6 = -1073741637;
  }
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, NewIrql);
  return v6;
}
