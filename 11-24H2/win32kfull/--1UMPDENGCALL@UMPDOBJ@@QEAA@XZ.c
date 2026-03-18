/*
 * XREFs of ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D93B4
 * Callers:
 *     NtGdiSTROBJ_vEnumStart @ 0x1400AA2C0 (NtGdiSTROBJ_vEnumStart.c)
 *     NtGdiSTROBJ_bGetAdvanceWidths @ 0x1400AA3D0 (NtGdiSTROBJ_bGetAdvanceWidths.c)
 *     ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1400AB66C (-NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z.c)
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1400D71F0 (NtGdiFONTOBJ_cGetGlyphs.c)
 *     NtGdiXLATEOBJ_iXlate @ 0x1400D77F0 (NtGdiXLATEOBJ_iXlate.c)
 *     NtGdiPATHOBJ_vGetBounds @ 0x1400D7870 (NtGdiPATHOBJ_vGetBounds.c)
 *     NtGdiPATHOBJ_vEnumStart @ 0x1400D86D0 (NtGdiPATHOBJ_vEnumStart.c)
 *     NtGdiPATHOBJ_bEnum @ 0x1400D8DE0 (NtGdiPATHOBJ_bEnum.c)
 *     NtGdiEngDeletePath @ 0x1400D9A50 (NtGdiEngDeletePath.c)
 *     NtGdiFONTOBJ_pifi @ 0x1400D9EE0 (NtGdiFONTOBJ_pifi.c)
 *     NtGdiBRUSHOBJ_ulGetBrushColor @ 0x1400DA040 (NtGdiBRUSHOBJ_ulGetBrushColor.c)
 *     NtGdiXFORMOBJ_iGetXform @ 0x1400DA200 (NtGdiXFORMOBJ_iGetXform.c)
 *     NtGdiCLIPOBJ_ppoGetPath @ 0x1400DA350 (NtGdiCLIPOBJ_ppoGetPath.c)
 *     NtGdiFONTOBJ_pvTrueTypeFontFile @ 0x1400DAB20 (NtGdiFONTOBJ_pvTrueTypeFontFile.c)
 *     NtGdiFONTOBJ_pxoGetXform @ 0x1400DAC40 (NtGdiFONTOBJ_pxoGetXform.c)
 *     NtGdiXFORMOBJ_bApplyXform @ 0x1400DAEB0 (NtGdiXFORMOBJ_bApplyXform.c)
 *     NtGdiEngBitBlt @ 0x1400DB6D0 (NtGdiEngBitBlt.c)
 *     NtGdiCLIPOBJ_bEnum @ 0x1400DC190 (NtGdiCLIPOBJ_bEnum.c)
 *     NtGdiEngCheckAbort @ 0x1400DD2C0 (NtGdiEngCheckAbort.c)
 *     NtGdiXLATEOBJ_cGetPalette @ 0x1400DD400 (NtGdiXLATEOBJ_cGetPalette.c)
 *     NtGdiEngComputeGlyphSet @ 0x140179B20 (NtGdiEngComputeGlyphSet.c)
 *     NtGdiEngEraseSurface @ 0x1401DA1D0 (NtGdiEngEraseSurface.c)
 *     NtGdiBRUSHOBJ_DeleteRbrush @ 0x1401E7A70 (NtGdiBRUSHOBJ_DeleteRbrush.c)
 *     NtGdiBRUSHOBJ_hGetColorTransform @ 0x1401F05A0 (NtGdiBRUSHOBJ_hGetColorTransform.c)
 *     NtGdiEngLockSurface @ 0x1401FAEC0 (NtGdiEngLockSurface.c)
 *     NtGdiFONTOBJ_vGetInfo @ 0x1401FB580 (NtGdiFONTOBJ_vGetInfo.c)
 *     NtGdiEngFillPath @ 0x1402074A0 (NtGdiEngFillPath.c)
 *     NtGdiEngCreateClip @ 0x14020E570 (NtGdiEngCreateClip.c)
 *     NtGdiEngUnlockSurface @ 0x140210800 (NtGdiEngUnlockSurface.c)
 *     NtGdiEngAssociateSurface @ 0x140210A60 (NtGdiEngAssociateSurface.c)
 *     NtGdiEngDeleteClip @ 0x140216000 (NtGdiEngDeleteClip.c)
 *     NtGdiCLIPOBJ_cEnumStart @ 0x140219540 (NtGdiCLIPOBJ_cEnumStart.c)
 *     NtGdiBRUSHOBJ_pvGetRbrush @ 0x14021B380 (NtGdiBRUSHOBJ_pvGetRbrush.c)
 *     NtGdiEngCreateBitmap @ 0x1402616D0 (NtGdiEngCreateBitmap.c)
 *     NtGdiEngCreatePalette @ 0x140261970 (NtGdiEngCreatePalette.c)
 *     NtGdiEngDeletePalette @ 0x140261AF0 (NtGdiEngDeletePalette.c)
 *     NtGdiEngDeleteSurface @ 0x140261B80 (NtGdiEngDeleteSurface.c)
 *     NtGdiEngStretchBlt @ 0x140261C70 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x140262120 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngStrokePath @ 0x140262710 (NtGdiEngStrokePath.c)
 *     NtGdiEngTextOut @ 0x140262A80 (NtGdiEngTextOut.c)
 *     NtGdiEngMarkBandingSurface @ 0x14026C610 (NtGdiEngMarkBandingSurface.c)
 *     ?UMPDENGCALL_dtor@UMPDENGCALL@UMPDOBJ@@SAXPEAX@Z @ 0x1403389A0 (-UMPDENGCALL_dtor@UMPDENGCALL@UMPDOBJ@@SAXPEAX@Z.c)
 *     NtGdiBRUSHOBJ_pvAllocRbrush @ 0x140338CD0 (NtGdiBRUSHOBJ_pvAllocRbrush.c)
 *     NtGdiEngAlphaBlend @ 0x140338D50 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngCopyBits @ 0x140339030 (NtGdiEngCopyBits.c)
 *     NtGdiEngCreateDeviceBitmap @ 0x1403392E0 (NtGdiEngCreateDeviceBitmap.c)
 *     NtGdiEngCreateDeviceSurface @ 0x140339380 (NtGdiEngCreateDeviceSurface.c)
 *     NtGdiEngGradientFill @ 0x140339420 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x140339840 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x140339AB0 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x140339C60 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStrokeAndFillPath @ 0x14033A020 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngTransparentBlt @ 0x14033A400 (NtGdiEngTransparentBlt.c)
 *     NtGdiFONTOBJ_cGetAllGlyphHandles @ 0x14033A670 (NtGdiFONTOBJ_cGetAllGlyphHandles.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x14033A780 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 *     NtGdiFONTOBJ_pfdg @ 0x14033A8E0 (NtGdiFONTOBJ_pfdg.c)
 *     NtGdiPATHOBJ_bEnumClipLines @ 0x14033AC40 (NtGdiPATHOBJ_bEnumClipLines.c)
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x14033ADB0 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 *     NtGdiSTROBJ_dwGetCodePage @ 0x14033AEE0 (NtGdiSTROBJ_dwGetCodePage.c)
 *     NtGdiXLATEOBJ_hGetColorTransform @ 0x14033B040 (NtGdiXLATEOBJ_hGetColorTransform.c)
 * Callees:
 *     ?Transfer@ThreadRestrictNewHandlesRegion@@QEAAXPEAV1@@Z @ 0x140217AC8 (-Transfer@ThreadRestrictNewHandlesRegion@@QEAAXPEAV1@@Z.c)
 */

void __fastcall UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(struct W32_PUSH_LOCK **this)
{
  struct W32_PUSH_LOCK *v2; // rax
  struct ThreadRestrictNewHandlesRegion *v3; // rdx
  struct W32_PUSH_LOCK *v4; // rax
  struct W32_PUSH_LOCK *v5; // rcx

  PopThreadGuardedObject(this);
  v2 = this[4];
  if ( v2 )
  {
    --*((_DWORD *)v2 + 113);
    v3 = this[11];
    if ( v3 )
    {
      ThreadRestrictNewHandlesRegion::Transfer(this[10], v3);
      ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion(this[10]);
      Win32FreePool(this[10]);
      this[10] = 0LL;
    }
    if ( *((_BYTE *)this + 96) )
      KeSetEvent(*((PRKEVENT *)this[4] + 4), 0, 0);
  }
  v4 = this[10];
  if ( v4 )
    *((_BYTE *)v4 + 80) = 0;
  v5 = this[5];
  if ( v5 )
    GreReleasePushLockExclusive(v5);
}
