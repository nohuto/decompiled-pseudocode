/*
 * XREFs of ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x140062930
 * Callers:
 *     ?ndisSendNBLToFilter@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x140021110 (-ndisSendNBLToFilter@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     NdisSendNetBufferLists @ 0x140031410 (NdisSendNetBufferLists.c)
 *     ndisMIsr @ 0x1400DEA40 (ndisMIsr.c)
 *     NdisBuildScatterGatherList @ 0x1400E25E0 (NdisBuildScatterGatherList.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisPcwEndCycleCounter(struct NDIS_PCW_CONTEXT *a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rax

  if ( *((_DWORD *)a1 + 4) == -1 )
    *((_DWORD *)a1 + 4) = KeGetPcr()->Prcb.Number;
  v4 = *(_QWORD *)a1 + ndisPcwOffsetToPerCpuData + (unsigned __int64)(ndisPcwPerCpuDataStride * *((_DWORD *)a1 + 4));
  v5 = __rdtsc();
  *(_QWORD *)(v4 + 8 * a3) += (((unsigned __int64)HIDWORD(v5) << 32) | (unsigned int)v5)
                            - *(_QWORD *)(v4 + 8LL * a2 + 304);
  *(_QWORD *)(v4 + 8LL * a2 + 304) = 0LL;
}
