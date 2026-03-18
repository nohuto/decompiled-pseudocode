/*
 * XREFs of ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400BB34C
 * Callers:
 *     GreGetTextMetricsW @ 0x14007CF54 (GreGetTextMetricsW.c)
 *     GreGetTextExtentW @ 0x14007E5DC (GreGetTextExtentW.c)
 *     NtGdiGetTextFaceW @ 0x1400BB210 (NtGdiGetTextFaceW.c)
 *     NtGdiGetGlyphIndicesWInternal @ 0x1401D6720 (NtGdiGetGlyphIndicesWInternal.c)
 *     NtGdiForceUFIMapping @ 0x1401FA560 (NtGdiForceUFIMapping.c)
 *     NtGdiGetStringBitmapW @ 0x140259660 (NtGdiGetStringBitmapW.c)
 *     NtGdiGetWidthTable @ 0x14025B180 (NtGdiGetWidthTable.c)
 *     NtGdiQueryFontAssocInfo @ 0x14025B490 (NtGdiQueryFontAssocInfo.c)
 *     NtGdiGetLinkedUFIs @ 0x14025CFA0 (NtGdiGetLinkedUFIs.c)
 *     NtGdiFontIsLinked @ 0x14025F5D0 (NtGdiFontIsLinked.c)
 *     NtGdiGetCharABCWidthsW @ 0x14025F670 (NtGdiGetCharABCWidthsW.c)
 *     NtGdiGetCharWidthInfo @ 0x14025F910 (NtGdiGetCharWidthInfo.c)
 *     NtGdiGetCharWidthW @ 0x14025FA10 (NtGdiGetCharWidthW.c)
 *     NtGdiGetFontData @ 0x14025FC90 (NtGdiGetFontData.c)
 *     NtGdiGetFontUnicodeRanges @ 0x14025FEE0 (NtGdiGetFontUnicodeRanges.c)
 *     NtGdiGetGlyphOutline @ 0x140260020 (NtGdiGetGlyphOutline.c)
 *     NtGdiGetKerningPairs @ 0x1402602F0 (NtGdiGetKerningPairs.c)
 *     NtGdiGetOutlineTextMetricsInternalW @ 0x140260450 (NtGdiGetOutlineTextMetricsInternalW.c)
 *     NtGdiGetRealizationInfo @ 0x140260620 (NtGdiGetRealizationInfo.c)
 *     NtGdiGetTextCharsetInfo @ 0x140260790 (NtGdiGetTextCharsetInfo.c)
 *     NtGdiGetTextExtent @ 0x1402608F0 (NtGdiGetTextExtent.c)
 *     NtGdiGetTextExtentExW @ 0x140260B20 (NtGdiGetTextExtentExW.c)
 *     NtGdiGetTextMetricsW @ 0x140260F20 (NtGdiGetTextMetricsW.c)
 *     NtGdiGetUFI @ 0x140261040 (NtGdiGetUFI.c)
 *     GreGetAspectRatioFilter @ 0x140303D00 (GreGetAspectRatioFilter.c)
 *     GreGetTextCharsetInfo @ 0x140303DBC (GreGetTextCharsetInfo.c)
 *     NtGdiGetETM @ 0x140310070 (NtGdiGetETM.c)
 *     GreGetTextCharacterExtra @ 0x140310A74 (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x140310ABC (GreSetTextCharacterExtra.c)
 *     NtGdiSetTextJustification @ 0x140310B20 (NtGdiSetTextJustification.c)
 *     NtGdiRemoveMergeFont @ 0x140327EE0 (NtGdiRemoveMergeFont.c)
 *     NtGdiGetCharacterPlacementW @ 0x140337120 (NtGdiGetCharacterPlacementW.c)
 *     NtGdiGetEmbUFI @ 0x140337750 (NtGdiGetEmbUFI.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400A4334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400BB398 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1401541FC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 */

UAPIDCOBJ *__fastcall UAPIDCOBJ::UAPIDCOBJ(UAPIDCOBJ *this, HDC a2)
{
  DCOBJ::DCOBJ(this, a2);
  if ( *(_QWORD *)this )
  {
    if ( *(_WORD *)(*(_QWORD *)this + 12LL) != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    if ( *(_WORD *)(*(_QWORD *)this + 12LL) != 1 )
    {
      XDCOBJ::vUnlockNoNullSet(this);
      *(_QWORD *)this = 0LL;
    }
  }
  return this;
}
