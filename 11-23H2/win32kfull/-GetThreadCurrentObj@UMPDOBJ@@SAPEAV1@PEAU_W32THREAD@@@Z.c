/*
 * XREFs of ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C013D7EC
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C010D900 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     NtGdiCLIPOBJ_ppoGetPath @ 0x1C015C7D0 (NtGdiCLIPOBJ_ppoGetPath.c)
 *     ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1C02C6B60 (-NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z.c)
 *     NtGdiBRUSHOBJ_DeleteRbrush @ 0x1C02C7900 (NtGdiBRUSHOBJ_DeleteRbrush.c)
 *     NtGdiBRUSHOBJ_hGetColorTransform @ 0x1C02C79F0 (NtGdiBRUSHOBJ_hGetColorTransform.c)
 *     NtGdiBRUSHOBJ_pvAllocRbrush @ 0x1C02C7A60 (NtGdiBRUSHOBJ_pvAllocRbrush.c)
 *     NtGdiBRUSHOBJ_pvGetRbrush @ 0x1C02C7AE0 (NtGdiBRUSHOBJ_pvGetRbrush.c)
 *     NtGdiBRUSHOBJ_ulGetBrushColor @ 0x1C02C7B50 (NtGdiBRUSHOBJ_ulGetBrushColor.c)
 *     NtGdiCLIPOBJ_bEnum @ 0x1C02C7C50 (NtGdiCLIPOBJ_bEnum.c)
 *     NtGdiCLIPOBJ_cEnumStart @ 0x1C02C7D80 (NtGdiCLIPOBJ_cEnumStart.c)
 *     NtGdiEngAlphaBlend @ 0x1C02C7E50 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngBitBlt @ 0x1C02C8210 (NtGdiEngBitBlt.c)
 *     NtGdiEngCheckAbort @ 0x1C02C8720 (NtGdiEngCheckAbort.c)
 *     NtGdiEngComputeGlyphSet @ 0x1C02C87B0 (NtGdiEngComputeGlyphSet.c)
 *     NtGdiEngCopyBits @ 0x1C02C8880 (NtGdiEngCopyBits.c)
 *     NtGdiEngCreateClip @ 0x1C02C8D50 (NtGdiEngCreateClip.c)
 *     NtGdiEngDeleteClip @ 0x1C02C8F90 (NtGdiEngDeleteClip.c)
 *     NtGdiEngDeletePath @ 0x1C02C9090 (NtGdiEngDeletePath.c)
 *     NtGdiEngEraseSurface @ 0x1C02C91C0 (NtGdiEngEraseSurface.c)
 *     NtGdiEngFillPath @ 0x1C02C9310 (NtGdiEngFillPath.c)
 *     NtGdiEngGradientFill @ 0x1C02C9520 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x1C02C9990 (NtGdiEngLineTo.c)
 *     NtGdiEngLockSurface @ 0x1C02C9C10 (NtGdiEngLockSurface.c)
 *     NtGdiEngPaint @ 0x1C02C9D40 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x1C02C9EF0 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStretchBlt @ 0x1C02CA300 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C02CA7D0 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02CADE0 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02CB1B0 (NtGdiEngStrokePath.c)
 *     NtGdiEngTextOut @ 0x1C02CB520 (NtGdiEngTextOut.c)
 *     NtGdiEngTransparentBlt @ 0x1C02CB920 (NtGdiEngTransparentBlt.c)
 *     NtGdiEngUnlockSurface @ 0x1C02CBBA0 (NtGdiEngUnlockSurface.c)
 *     NtGdiFONTOBJ_cGetAllGlyphHandles @ 0x1C02CBC00 (NtGdiFONTOBJ_cGetAllGlyphHandles.c)
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1C02CBD20 (NtGdiFONTOBJ_cGetGlyphs.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C02CBF80 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 *     NtGdiFONTOBJ_pfdg @ 0x1C02CC0D0 (NtGdiFONTOBJ_pfdg.c)
 *     NtGdiFONTOBJ_pifi @ 0x1C02CC210 (NtGdiFONTOBJ_pifi.c)
 *     NtGdiFONTOBJ_pvTrueTypeFontFile @ 0x1C02CC360 (NtGdiFONTOBJ_pvTrueTypeFontFile.c)
 *     NtGdiFONTOBJ_pxoGetXform @ 0x1C02CC470 (NtGdiFONTOBJ_pxoGetXform.c)
 *     NtGdiFONTOBJ_vGetInfo @ 0x1C02CC4D0 (NtGdiFONTOBJ_vGetInfo.c)
 *     NtGdiPATHOBJ_bEnum @ 0x1C02CC800 (NtGdiPATHOBJ_bEnum.c)
 *     NtGdiPATHOBJ_bEnumClipLines @ 0x1C02CC960 (NtGdiPATHOBJ_bEnumClipLines.c)
 *     NtGdiPATHOBJ_vEnumStart @ 0x1C02CCAF0 (NtGdiPATHOBJ_vEnumStart.c)
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C02CCB80 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 *     NtGdiPATHOBJ_vGetBounds @ 0x1C02CCCC0 (NtGdiPATHOBJ_vGetBounds.c)
 *     NtGdiSTROBJ_bGetAdvanceWidths @ 0x1C02CCDD0 (NtGdiSTROBJ_bGetAdvanceWidths.c)
 *     NtGdiSTROBJ_dwGetCodePage @ 0x1C02CCEE0 (NtGdiSTROBJ_dwGetCodePage.c)
 *     NtGdiSTROBJ_vEnumStart @ 0x1C02CCF40 (NtGdiSTROBJ_vEnumStart.c)
 *     NtGdiSetPUMPDOBJ @ 0x1C02CCFB0 (NtGdiSetPUMPDOBJ.c)
 *     NtGdiXFORMOBJ_bApplyXform @ 0x1C02CD430 (NtGdiXFORMOBJ_bApplyXform.c)
 *     NtGdiXFORMOBJ_iGetXform @ 0x1C02CD5F0 (NtGdiXFORMOBJ_iGetXform.c)
 *     NtGdiXLATEOBJ_cGetPalette @ 0x1C02CD6F0 (NtGdiXLATEOBJ_cGetPalette.c)
 *     NtGdiXLATEOBJ_hGetColorTransform @ 0x1C02CD810 (NtGdiXLATEOBJ_hGetColorTransform.c)
 *     NtGdiXLATEOBJ_iXlate @ 0x1C02CD880 (NtGdiXLATEOBJ_iXlate.c)
 * Callees:
 *     <none>
 */

struct UMPDOBJ *__fastcall UMPDOBJ::GetThreadCurrentObj(struct _W32THREAD *a1)
{
  char *v1; // rax
  char *v2; // rcx

  if ( !a1 )
    return 0LL;
  v1 = (char *)a1 + 40;
  v2 = (char *)*((_QWORD *)a1 + 5);
  if ( v2 == v1 )
    return 0LL;
  else
    return (struct UMPDOBJ *)(v2 - 40);
}
