/*
 * XREFs of ?ndisCompareProcNum@@YAHU_PROCESSOR_NUMBER@@0@Z @ 0x140051940
 * Callers:
 *     ?ndisReadRssKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140050220 (-ndisReadRssKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCalculateRssProcessorCount@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400A51F8 (-ndisCalculateRssProcessorCount@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetMaxNumRssProcessors@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400A5370 (-ndisGetMaxNumRssProcessors@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPopulateRssProcessorSet@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RSS_PROCESSOR_INFO@@@Z @ 0x1400A7C20 (-ndisPopulateRssProcessorSet@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RSS_PROCESSOR_INFO@@@Z.c)
 *     ndisCompareProcNumInit @ 0x140197240 (ndisCompareProcNumInit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisCompareProcNum(struct _PROCESSOR_NUMBER a1, struct _PROCESSOR_NUMBER a2)
{
  if ( a1.Group >= a2.Group )
  {
    if ( a1.Group > a2.Group )
      return 1LL;
    if ( a1.Number >= a2.Number )
      return a1.Number > a2.Number;
  }
  return 0xFFFFFFFFLL;
}
