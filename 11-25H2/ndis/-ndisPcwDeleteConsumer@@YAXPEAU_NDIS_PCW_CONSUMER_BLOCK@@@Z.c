/*
 * XREFs of ?ndisPcwDeleteConsumer@@YAXPEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x14014A454
 * Callers:
 *     ?ndisPcwRemoveCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z @ 0x14014A6A0 (-ndisPcwRemoveCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z.c)
 * Callees:
 *     ?ndisPcwMaybeDeleteDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@@Z @ 0x14014A5CC (-ndisPcwMaybeDeleteDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@@Z.c)
 *     ?ndisPcwUpdateMiniportDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@W4_NDIS_COUNTER_SET_ID@@_KJ@Z @ 0x14014A74C (-ndisPcwUpdateMiniportDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@W4_NDIS_COUNTER_SET_ID@@_KJ@Z.c)
 */

void __fastcall ndisPcwDeleteConsumer(_QWORD *P)
{
  __int64 v1; // rbp
  PVOID *i; // rdi
  struct _NDIS_PCW_DATA_BLOCK *v4; // rbx

  v1 = 0LL;
  for ( i = (PVOID *)(P + 6); (unsigned int)v1 < *((_DWORD *)P + 10); v1 = (unsigned int)(v1 + 1) )
  {
    v4 = (struct _NDIS_PCW_DATA_BLOCK *)*((_QWORD *)*i + v1);
    ndisPcwUpdateMiniportDataBlock(v4, *((unsigned int *)P + 2), P[2], 0xFFFFFFFFLL);
    ndisPcwMaybeDeleteDataBlock(v4);
  }
  if ( *i )
  {
    ExFreePoolWithTag(*i, 0);
    *i = 0LL;
  }
  ExFreePoolWithTag(P, 0);
}
