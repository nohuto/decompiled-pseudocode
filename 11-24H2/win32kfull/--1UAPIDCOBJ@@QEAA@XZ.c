/*
 * XREFs of ??1UAPIDCOBJ@@QEAA@XZ @ 0x1400BB3D8
 * Callers:
 *     NtGdiGetTextFaceW @ 0x1400BB210 (NtGdiGetTextFaceW.c)
 *     NtGdiGetGlyphIndicesWInternal @ 0x1401D6720 (NtGdiGetGlyphIndicesWInternal.c)
 *     NtGdiForceUFIMapping @ 0x1401FA560 (NtGdiForceUFIMapping.c)
 *     NtGdiGetStringBitmapW @ 0x140259660 (NtGdiGetStringBitmapW.c)
 *     NtGdiGetWidthTable @ 0x14025B180 (NtGdiGetWidthTable.c)
 *     NtGdiGetLinkedUFIs @ 0x14025CFA0 (NtGdiGetLinkedUFIs.c)
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
 *     NtGdiGetETM @ 0x140310070 (NtGdiGetETM.c)
 *     NtGdiRemoveMergeFont @ 0x140327EE0 (NtGdiRemoveMergeFont.c)
 *     NtGdiGetCharacterPlacementW @ 0x140337120 (NtGdiGetCharacterPlacementW.c)
 *     NtGdiGetEmbUFI @ 0x140337750 (NtGdiGetEmbUFI.c)
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1400BB3F0 (--1DCOBJ@@QEAA@XZ.c)
 */

void __fastcall UAPIDCOBJ::~UAPIDCOBJ(UAPIDCOBJ *this)
{
  DCOBJ::~DCOBJ(this);
}
