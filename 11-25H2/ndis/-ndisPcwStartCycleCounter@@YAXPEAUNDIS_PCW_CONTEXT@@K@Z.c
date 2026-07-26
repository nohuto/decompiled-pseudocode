/*
 * XREFs of ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x140062630
 * Callers:
 *     ?ndisSendNBLToFilter@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x140021110 (-ndisSendNBLToFilter@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     NdisSendNetBufferLists @ 0x140031410 (NdisSendNetBufferLists.c)
 *     ndisMIsr @ 0x1400DEA40 (ndisMIsr.c)
 *     NdisBuildScatterGatherList @ 0x1400E25E0 (NdisBuildScatterGatherList.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisPcwStartCycleCounter(struct NDIS_PCW_CONTEXT *a1, unsigned int a2)
{
  if ( *((_DWORD *)a1 + 4) == -1 )
    *((_DWORD *)a1 + 4) = KeGetPcr()->Prcb.Number;
  *(_QWORD *)(ndisPcwOffsetToPerCpuData + ndisPcwPerCpuDataStride * *((_DWORD *)a1 + 4) + 8 * (a2 + 38LL) + *(_QWORD *)a1) = __rdtsc();
}
