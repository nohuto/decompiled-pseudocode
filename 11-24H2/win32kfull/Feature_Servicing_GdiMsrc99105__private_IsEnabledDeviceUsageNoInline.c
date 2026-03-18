/*
 * XREFs of Feature_Servicing_GdiMsrc99105__private_IsEnabledDeviceUsageNoInline @ 0x140325560
 * Callers:
 *     ?DestroyUMPDHeap@@YAXPEAU_UMPDHEAP@@@Z @ 0x1400D9E4C (-DestroyUMPDHeap@@YAXPEAU_UMPDHEAP@@@Z.c)
 *     NtGdiDdDDICreateDCFromMemory @ 0x14025C8E0 (NtGdiDdDDICreateDCFromMemory.c)
 *     ?GrowUMPDHeap@UMPDOBJ@@AEAAHPEAU_UMPDHEAP@@K@Z @ 0x14025DED4 (-GrowUMPDHeap@UMPDOBJ@@AEAAHPEAU_UMPDHEAP@@K@Z.c)
 *     NtGdiCreateDIBSection @ 0x14025E4E0 (NtGdiCreateDIBSection.c)
 *     NtGdiEngCreateBitmap @ 0x1402616D0 (NtGdiEngCreateBitmap.c)
 *     NtGdiEngCreatePalette @ 0x140261970 (NtGdiEngCreatePalette.c)
 *     NtGdiEngDeleteSurface @ 0x140261B80 (NtGdiEngDeleteSurface.c)
 *     ?bSecureBits@@YAHPEAXKPEAPEAX@Z @ 0x140338AEC (-bSecureBits@@YAHPEAXKPEAPEAX@Z.c)
 *     NtGdiCheckBitmapBits @ 0x14033B6A0 (NtGdiCheckBitmapBits.c)
 *     NtGdiCreateColorTransform @ 0x14033BB30 (NtGdiCreateColorTransform.c)
 * Callees:
 *     Feature_Servicing_GdiMsrc99105__private_IsEnabledFallback @ 0x140325598 (Feature_Servicing_GdiMsrc99105__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_GdiMsrc99105__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_GdiMsrc99105__private_featureState & 0x10) != 0 )
    return Feature_Servicing_GdiMsrc99105__private_featureState & 1;
  else
    return Feature_Servicing_GdiMsrc99105__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_GdiMsrc99105__private_featureState,
             3LL);
}
