/*
 * XREFs of ??0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140032130
 * Callers:
 *     ?ndisOidPreRSSParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BBFC0 (-ndisOidPreRSSParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisPostSetMiniportRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1400BCA04 (-ndisPostSetMiniportRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ndisMIsr @ 0x1400D7710 (ndisMIsr.c)
 *     NdisBuildScatterGatherList @ 0x1400DB3D0 (NdisBuildScatterGatherList.c)
 * Callees:
 *     <none>
 */

NDIS_PCW_CONTEXT *__fastcall NDIS_PCW_CONTEXT::NDIS_PCW_CONTEXT(
        NDIS_PCW_CONTEXT *this,
        struct _NDIS_MINIPORT_BLOCK *a2)
{
  int PcwDatapathEventMask; // r8d
  wchar_t *Buffer; // rax

  *((_DWORD *)this + 4) = -1;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  PcwDatapathEventMask = a2->PcwDatapathEventMask;
  if ( PcwDatapathEventMask || a2->PcwDatapathCycleMask )
  {
    *((_DWORD *)this + 2) = PcwDatapathEventMask;
    *((_DWORD *)this + 3) = a2->PcwDatapathCycleMask;
    Buffer = a2->Reserved4.Buffer;
    *(_QWORD *)this = Buffer;
    if ( !Buffer )
      *(_QWORD *)this = a2->Reserved4.Buffer;
  }
  return this;
}
