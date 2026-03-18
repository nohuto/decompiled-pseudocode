/*
 * XREFs of ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D8F54
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
 *     ?GetThreadCurrentUMPDObj@UMPDOBJ@@SAPEAV1@PEAU_GRETHREAD@@@Z @ 0x1400D90D0 (-GetThreadCurrentUMPDObj@UMPDOBJ@@SAPEAV1@PEAU_GRETHREAD@@@Z.c)
 *     ?ReTarget@ReEnableTRNH@@QEAA_NPEAU_GRETHREAD@@@Z @ 0x1400D9464 (-ReTarget@ReEnableTRNH@@QEAA_NPEAU_GRETHREAD@@@Z.c)
 *     ?W32GetThreadWin32ThreadCrossSessionCheck@@YAPEAU_W32THREAD@@PEAU_ETHREAD@@@Z @ 0x1400D94E0 (-W32GetThreadWin32ThreadCrossSessionCheck@@YAPEAU_W32THREAD@@PEAU_ETHREAD@@@Z.c)
 *     ?vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z @ 0x1401708D4 (-vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z.c)
 */

UMPDOBJ::UMPDENGCALL *__fastcall UMPDOBJ::UMPDENGCALL::UMPDENGCALL(UMPDOBJ::UMPDENGCALL *this, struct _GRETHREAD *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rbx
  bool v6; // zf
  struct W32_PUSH_LOCK *v7; // rbx
  __int64 v8; // rcx
  struct _ETHREAD *v9; // rcx
  struct _W32THREAD *v11; // rax
  struct W32_PUSH_LOCK *v12; // [rsp+30h] [rbp+8h] BYREF

  *((_QWORD *)this + 4) = UMPDOBJ::GetThreadCurrentUMPDObj(a2);
  *((_QWORD *)this + 5) = 0LL;
  *((_OWORD *)this + 3) = 0LL;
  *((_OWORD *)this + 4) = 0LL;
  if ( v3 )
    v4 = *(_QWORD *)(v3 + 336);
  else
    v4 = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 10) = v4;
  if ( v4 )
  {
    if ( *(_BYTE *)(v4 + 80) )
      *((_QWORD *)this + 10) = 0LL;
    else
      *(_BYTE *)(v4 + 80) = 1;
  }
  *((_BYTE *)this + 96) = 0;
  PushThreadGuardedObject(this, this, UMPDOBJ::UMPDENGCALL::UMPDENGCALL_dtor);
  v5 = *((_QWORD *)this + 4);
  if ( v5 )
  {
    v6 = v5 == -24;
    v7 = (struct W32_PUSH_LOCK *)(v5 + 24);
    v12 = v7;
    if ( !v6 )
      GreAcquirePushLockExclusive(v7);
    v8 = *((_QWORD *)this + 4);
    if ( *(_BYTE *)(v8 + 457) )
    {
      *((_QWORD *)this + 4) = 0LL;
      Gre::PUSHLOCKEX::vUnlock((Gre::PUSHLOCKEX *)&v12, 0);
    }
    else
    {
      if ( KeReadStateEvent(*(PRKEVENT *)(v8 + 32)) )
      {
        KeResetEvent(*(PRKEVENT *)(*((_QWORD *)this + 4) + 32LL));
        *((_BYTE *)this + 96) = 1;
      }
      if ( v7 )
        GreReleasePushLockExclusive(v7);
      ++*(_DWORD *)(*((_QWORD *)this + 4) + 452LL);
      v9 = *(struct _ETHREAD **)(*((_QWORD *)this + 4) + 432LL);
      if ( KeGetCurrentThread() != v9 )
      {
        v11 = W32GetThreadWin32ThreadCrossSessionCheck(v9);
        if ( !ReEnableTRNH::ReTarget(
                (UMPDOBJ::UMPDENGCALL *)((char *)this + 48),
                (struct _GRETHREAD *)(((unsigned __int64)v11 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)v11 >> 64))) )
          *((_QWORD *)this + 4) = 0LL;
      }
    }
  }
  return this;
}
