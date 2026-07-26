/*
 * XREFs of ?ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z @ 0x140061280
 * Callers:
 *     ?ndisPostSetMiniportRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1400C3C34 (-ndisPostSetMiniportRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ndisMIsr @ 0x1400DEA40 (ndisMIsr.c)
 *     NdisBuildScatterGatherList @ 0x1400E25E0 (NdisBuildScatterGatherList.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisPcwAddEvent(struct NDIS_PCW_CONTEXT *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r8

  if ( *((_DWORD *)a1 + 4) == -1 )
    *((_DWORD *)a1 + 4) = KeGetPcr()->Prcb.Number;
  v4 = *(_QWORD *)a1 + ndisPcwOffsetToPerCpuData + (unsigned __int64)(ndisPcwPerCpuDataStride * *((_DWORD *)a1 + 4));
  *(_QWORD *)(v4 + 8 * a2) += a3;
}
