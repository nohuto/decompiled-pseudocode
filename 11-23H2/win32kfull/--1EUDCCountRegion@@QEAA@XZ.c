/*
 * XREFs of ??1EUDCCountRegion@@QEAA@XZ @ 0x1C00F9818
 * Callers:
 *     NtGdiGetCharWidthInfo @ 0x1C000E330 (NtGdiGetCharWidthInfo.c)
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C0041B04 (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     ?DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z @ 0x1C0041E68 (-DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z.c)
 *     GreExtTextOutW @ 0x1C007F960 (GreExtTextOutW.c)
 *     ?GrepExtTextOutW@@YAHPEAUHDC__@@HHIPEBUtagRECT@@PEBGIPEBHW4EntryPoint@RFONTOBJ@@@Z @ 0x1C007FA00 (-GrepExtTextOutW@@YAHPEAUHDC__@@HHIPEBUtagRECT@@PEBGIPEBHW4EntryPoint@RFONTOBJ@@@Z.c)
 *     NtGdiFontIsLinked @ 0x1C0089A90 (NtGdiFontIsLinked.c)
 *     NtGdiQueryFontAssocInfo @ 0x1C008A5B0 (NtGdiQueryFontAssocInfo.c)
 *     NtGdiGetCharABCWidthsW @ 0x1C00C4C80 (NtGdiGetCharABCWidthsW.c)
 *     NtGdiGetTextMetricsW @ 0x1C00C50D0 (NtGdiGetTextMetricsW.c)
 *     NtGdiGetRealizationInfo @ 0x1C00C6300 (NtGdiGetRealizationInfo.c)
 *     NtGdiGetTextExtentExW @ 0x1C00C6630 (NtGdiGetTextExtentExW.c)
 *     NtGdiGetFontData @ 0x1C00C7D50 (NtGdiGetFontData.c)
 *     NtGdiGetGlyphIndicesWInternal @ 0x1C00C9C40 (NtGdiGetGlyphIndicesWInternal.c)
 *     NtGdiGetOutlineTextMetricsInternalW @ 0x1C00CA710 (NtGdiGetOutlineTextMetricsInternalW.c)
 *     GetCharDimensions @ 0x1C00CD400 (GetCharDimensions.c)
 *     GreGetTextExtentW @ 0x1C00CD5F8 (GreGetTextExtentW.c)
 *     NtGdiGetWidthTable @ 0x1C00CECF0 (NtGdiGetWidthTable.c)
 *     NtGdiExtEscape @ 0x1C00D09E0 (NtGdiExtEscape.c)
 *     NtGdiGetTextCharsetInfo @ 0x1C00D1720 (NtGdiGetTextCharsetInfo.c)
 *     NtGdiGetGlyphOutline @ 0x1C00D3D80 (NtGdiGetGlyphOutline.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C01078D0 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     NtGdiExtTextOutW @ 0x1C01194C0 (NtGdiExtTextOutW.c)
 *     xxxDrawCaptionTemp @ 0x1C022B7E4 (xxxDrawCaptionTemp.c)
 *     xxxPSMTextOut @ 0x1C0240F14 (xxxPSMTextOut.c)
 *     ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x1C024C5A8 (-DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z.c)
 *     NtGdiGetLinkedUFIs @ 0x1C0277C10 (NtGdiGetLinkedUFIs.c)
 *     NtGdiStartDoc @ 0x1C02781A0 (NtGdiStartDoc.c)
 *     GreGetTextCharsetInfo @ 0x1C028DC84 (GreGetTextCharsetInfo.c)
 *     NtGdiGetStringBitmapW @ 0x1C02A07D0 (NtGdiGetStringBitmapW.c)
 *     NtGdiGetCharWidthW @ 0x1C02C1D00 (NtGdiGetCharWidthW.c)
 *     NtGdiGetCharacterPlacementW @ 0x1C02C1F10 (NtGdiGetCharacterPlacementW.c)
 *     NtGdiGetEmbUFI @ 0x1C02C25B0 (NtGdiGetEmbUFI.c)
 *     NtGdiGetFontUnicodeRanges @ 0x1C02C2A10 (NtGdiGetFontUnicodeRanges.c)
 *     NtGdiGetKerningPairs @ 0x1C02C2B00 (NtGdiGetKerningPairs.c)
 *     NtGdiGetTextExtent @ 0x1C02C2DC0 (NtGdiGetTextExtent.c)
 *     NtGdiGetUFI @ 0x1C02C2F90 (NtGdiGetUFI.c)
 *     NtGdiPolyTextOutW @ 0x1C02C3930 (NtGdiPolyTextOutW.c)
 *     NtGdiGetETM @ 0x1C02D5240 (NtGdiGetETM.c)
 * Callees:
 *     <none>
 */

void __fastcall EUDCCountRegion::~EUDCCountRegion(EUDCCountRegion *this)
{
  if ( *((_DWORD *)this + 8) )
  {
    PopThreadGuardedObject(this);
    *((_DWORD *)this + 8) = 0;
  }
  GreAcquireSemaphore(*(_QWORD *)(*((_QWORD *)this + 5) + 13272LL));
  --*(_DWORD *)(*((_QWORD *)this + 5) + 13300LL);
  EtwTraceGreLockReleaseSemaphore(L"GreFullGlobals.hsemEUDC1");
  GreReleaseSemaphoreInternal(*(_QWORD *)(*((_QWORD *)this + 5) + 13272LL));
  if ( *((_DWORD *)this + 8) )
  {
    PopThreadGuardedObject(this);
    *((_DWORD *)this + 8) = 0;
  }
}
