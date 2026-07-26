/*
 * XREFs of ?ndisOidPreMiniportSetEncapsulation@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1400895B0
 * Callers:
 *     ?ndisOidPreSetOffloadEncapsulation@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400982F0 (-ndisOidPreSetOffloadEncapsulation@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisPreTaskOffloadSet@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400C46BC (-ndisPreTaskOffloadSet@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?ndisTranslateOffloadSetsToTasks@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD_ENCAPSULATION@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1400C6718 (-ndisTranslateOffloadSetsToTasks@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD_ENCAPSULATION@@.c)
 */

unsigned __int8 __fastcall ndisOidPreMiniportSetEncapsulation(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        int *a3)
{
  int v6; // ebx
  KIRQL v7; // al
  _NDIS_MINIPORT_OFFLOAD *Offload; // rdx
  struct _NDIS_OFFLOAD_ENCAPSULATION *InformationBuffer; // rdx
  _NDIS_MINIPORT_OFFLOAD *v10; // rcx
  _NDIS_MINIPORT_OFFLOAD *v11; // rcx
  PVOID v12; // rax
  UINT MiniportTaskSize; // ecx
  NDIS_OID Oid; // eax
  UINT InformationBufferLength; // eax
  unsigned __int8 result; // al

  v6 = -1073741823;
  v7 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  Offload = a1->Offload;
  a1->MiniportThread = KeGetCurrentThread();
  if ( !Offload || !Offload->SupportsOffload )
  {
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v7);
    goto LABEL_27;
  }
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v7);
  if ( a2->DATA.QUERY_INFORMATION.InformationBufferLength < 0x1C )
  {
    a2->DATA.QUERY_INFORMATION.BytesNeeded = 28;
    v6 = -1073676268;
LABEL_27:
    result = 1;
    goto LABEL_28;
  }
  InformationBuffer = (struct _NDIS_OFFLOAD_ENCAPSULATION *)a2->DATA.QUERY_INFORMATION.InformationBuffer;
  if ( InformationBuffer->Header.Type != 0xA8
    || !InformationBuffer->Header.Revision
    || InformationBuffer->Header.Size < 0x1Cu )
  {
    v6 = -1073676267;
    goto LABEL_27;
  }
  v10 = a1->Offload;
  *(_OWORD *)&v10->MiniportMergedEncapsulation.Header.Type = *(_OWORD *)&InformationBuffer->Header.Type;
  *(_QWORD *)&v10->MiniportMergedEncapsulation.IPv6.Enabled = *(_QWORD *)&InformationBuffer->IPv6.Enabled;
  v10->MiniportMergedEncapsulation.IPv6.HeaderSize = InformationBuffer->IPv6.HeaderSize;
  v11 = a1->Offload;
  if ( (*(_DWORD *)&a2->NdisReserved[16] & 0x80000) == 0
    && v11->MiniportMergedEncapsulation.IPv4.Enabled == v11->MiniportSetEncapsulation.IPv4.Enabled
    && v11->MiniportMergedEncapsulation.IPv6.Enabled == v11->MiniportSetEncapsulation.IPv6.Enabled )
  {
    v6 = 0;
    a2->DATA.QUERY_INFORMATION.BytesWritten = 28;
    goto LABEL_27;
  }
  if ( !v11->MiniportMergedEncapsulation.IPv4.Enabled )
  {
    *(_QWORD *)&v11->MiniportMergedEncapsulation.IPv4.Enabled = *(_QWORD *)&v11->MiniportSetEncapsulation.IPv4.Enabled;
    v11->MiniportMergedEncapsulation.IPv4.HeaderSize = v11->MiniportSetEncapsulation.IPv4.HeaderSize;
  }
  if ( !v11->MiniportMergedEncapsulation.IPv6.Enabled )
  {
    *(_QWORD *)&v11->MiniportMergedEncapsulation.IPv6.Enabled = *(_QWORD *)&v11->MiniportSetEncapsulation.IPv6.Enabled;
    v11->MiniportMergedEncapsulation.IPv6.HeaderSize = v11->MiniportSetEncapsulation.IPv6.HeaderSize;
  }
  if ( a1->MajorNdisVersion >= 6u )
  {
    a1->Offload->MiniportRequestBuffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
    Oid = a2->DATA.QUERY_INFORMATION.Oid;
    a2->DATA.QUERY_INFORMATION.InformationBuffer = &v11->MiniportMergedEncapsulation;
    a1->Offload->MiniportRequestOid = Oid;
    InformationBufferLength = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
    a2->DATA.QUERY_INFORMATION.Oid = 16843018;
    a1->Offload->MiniportRequestBufferLength = InformationBufferLength;
    MiniportTaskSize = 28;
  }
  else
  {
    if ( v11->MiniportMergedEncapsulation.IPv4.Enabled == 1
      && v11->MiniportMergedEncapsulation.IPv4.EncapsulationType != 2
      || v11->MiniportMergedEncapsulation.IPv6.Enabled == 1
      && v11->MiniportMergedEncapsulation.IPv6.EncapsulationType != 2 )
    {
      v6 = -1073741637;
      goto LABEL_27;
    }
    ndisTranslateOffloadSetsToTasks(a1, InformationBuffer, 0LL);
    a1->Offload->MiniportRequestOid = a2->DATA.QUERY_INFORMATION.Oid;
    v12 = a2->DATA.QUERY_INFORMATION.InformationBuffer;
    a2->DATA.QUERY_INFORMATION.Oid = -67042815;
    a1->Offload->MiniportRequestBuffer = v12;
    a2->DATA.QUERY_INFORMATION.InformationBuffer = a1->Offload->MiniportTask;
    a1->Offload->MiniportRequestBufferLength = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
    MiniportTaskSize = a1->Offload->MiniportTaskSize;
  }
  v6 = 0;
  a2->DATA.QUERY_INFORMATION.InformationBufferLength = MiniportTaskSize;
  result = 0;
LABEL_28:
  *a3 = v6;
  return result;
}
