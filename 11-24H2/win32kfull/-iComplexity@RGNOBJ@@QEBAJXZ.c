/*
 * XREFs of ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1400CDFD8
 * Callers:
 *     ??0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z @ 0x140009944 (--0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     EngStrokePath @ 0x140009AE0 (EngStrokePath.c)
 *     ?GrepExtSelectClipRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@HH@Z @ 0x140016AF8 (-GrepExtSelectClipRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@HH@Z.c)
 *     NtGdiExtSelectClipRgn @ 0x140018FD0 (NtGdiExtSelectClipRgn.c)
 *     ?GrepUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x140020CB0 (-GrepUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z @ 0x140021EE0 (-GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x140043A80 (-CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x14004F4C0 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1400579FC (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?GrepRectVisible@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1400C3D24 (-GrepRectVisible@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     ?GrepGetAppClipBox@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1400CCB64 (-GrepGetAppClipBox@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1400CCECC (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ?GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z @ 0x1400CE13C (-GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z.c)
 *     ?iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z @ 0x1400CE3D8 (-iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1400CEC24 (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1400D68D4 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     EngFillPath @ 0x1400E1DC0 (EngFillPath.c)
 *     GreFillRgn @ 0x1400E2680 (GreFillRgn.c)
 *     GreFrameRgn @ 0x1400E2CD4 (GreFrameRgn.c)
 *     NtGdiExtFloodFill @ 0x14015AE80 (NtGdiExtFloodFill.c)
 *     NtGdiOffsetClipRgn @ 0x1401C8740 (NtGdiOffsetClipRgn.c)
 *     ?iSetMetaRgn@DC@@QEAAHXZ @ 0x1401CF0D8 (-iSetMetaRgn@DC@@QEAAHXZ.c)
 *     EngStrokeAndFillPath @ 0x1401E6AC0 (EngStrokeAndFillPath.c)
 *     ?GrepInvertRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@@Z @ 0x140202788 (-GrepInvertRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@@Z.c)
 *     ?bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z @ 0x140259240 (-bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z.c)
 *     ?vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z @ 0x140300D20 (-vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z.c)
 *     ?vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z @ 0x14032BD28 (-vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z.c)
 *     ?vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z @ 0x14032BF30 (-vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z.c)
 *     ?vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z @ 0x14032E380 (-vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z.c)
 * Callees:
 *     ?RegionCore_get_sizeScan@Win32kRS@@YAKPEBVREGION_CORE@@@Z @ 0x140063310 (-RegionCore_get_sizeScan@Win32kRS@@YAKPEBVREGION_CORE@@@Z.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RGNOBJ::iComplexity(RGNOBJ *this)
{
  const struct BaseRustGlobals *BaseRustGlobals; // rax
  _DWORD *v3; // rsi
  int v4; // ebx
  __int64 result; // rax
  const struct REGION_CORE *v6; // rdx
  unsigned int sizeScan; // eax
  const struct BaseRustGlobals *v8; // rdi
  char *v9; // rbx

  BaseRustGlobals = GetBaseRustGlobals();
  v3 = *(_DWORD **)this;
  v4 = 0;
  if ( BaseRustGlobals )
  {
    v8 = GetBaseRustGlobals();
    v9 = (char *)v8 + 8;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)v8 + 8, 2LL);
    LODWORD(v8) = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v8 + 72LL))((unsigned __int64)(v3 + 6) & -(__int64)(v3 != 0LL));
    ExReleasePushLockSharedEx(v9, 2LL);
    KeLeaveCriticalRegion();
    return (unsigned int)v8;
  }
  else
  {
    result = 1LL;
    if ( v3[12] != 1 )
    {
      if ( GetBaseRustGlobals() )
        sizeScan = Win32kRS::RegionCore_get_sizeScan((Win32kRS *)(v3 + 6), v6);
      else
        sizeScan = v3[10];
      LOBYTE(v4) = sizeScan > 0x38;
      return (unsigned int)(v4 + 2);
    }
  }
  return result;
}
