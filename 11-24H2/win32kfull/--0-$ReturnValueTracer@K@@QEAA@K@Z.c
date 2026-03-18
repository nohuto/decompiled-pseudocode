/*
 * XREFs of ??0?$ReturnValueTracer@K@@QEAA@K@Z @ 0x14005C3CC
 * Callers:
 *     ?GrepCreateDIBitmapReal@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@KAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK3K_KPEAPEAX@Z @ 0x140018544 (-GrepCreateDIBitmapReal@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@KAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@.c)
 *     EngTextOut @ 0x140058790 (EngTextOut.c)
 *     ?GrepExtTextOutWLocked@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x140059DF0 (-GrepExtTextOutWLocked@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXKA.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x14005DC90 (-bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?bProxyDrvTextOut@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAUHDEV__@@K4@Z @ 0x1400AA738 (-bProxyDrvTextOut@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOB.c)
 *     ?GreExtTextOutRect@@YA?AV?$ReturnValueTracer@H@@PEAUHDC__@@PEAUtagRECT@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1400C4500 (-GreExtTextOutRect@@YA-AV-$ReturnValueTracer@H@@PEAUHDC__@@PEAUtagRECT@@W4EntryPoint@RFONTOBJ@@@.c)
 *     ?ExtTextOutRect@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAUtagRECT@@AEBUTag@RFONTOBJ@@@Z @ 0x1400C47DC (-ExtTextOutRect@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAUtagRECT@@AEBUTag@RFONTOBJ@@@Z.c)
 *     ?EPATHOBJ_bSimpleFill@@YA?AV?$ReturnValueTracer@H@@PEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1400E16A0 (-EPATHOBJ_bSimpleFill@@YA-AV-$ReturnValueTracer@H@@PEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_.c)
 *     ?GrepGetRealizationInfo@@YA?AV?$ReturnValueTracer@H@@AEAVUDCOBJ@@PEAUtagFONT_REALIZATION_INFO2@@W4EntryPoint@RFONTOBJ@@@Z @ 0x140165A6C (-GrepGetRealizationInfo@@YA-AV-$ReturnValueTracer@H@@AEAVUDCOBJ@@PEAUtagFONT_REALIZATION_INFO2@@.c)
 *     ?GetRealizationInfo@RFONTOBJ@@QEAA?AV?$ReturnValueTracer@H@@PEAUtagFONT_REALIZATION_INFO2@@@Z @ 0x140165B04 (-GetRealizationInfo@RFONTOBJ@@QEAA-AV-$ReturnValueTracer@H@@PEAUtagFONT_REALIZATION_INFO2@@@Z.c)
 *     ?GrepExtTextOutW@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHPEAXKW4EntryPoint@RFONTOBJ@@@Z @ 0x140172E10 (-GrepExtTextOutW@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHPEAXKW4EntryP.c)
 *     ?GrepGetGlyphIndicesW@@YA?AV?$ReturnValueTracer@K@@AEAVUDCOBJ@@PEBGKPEAGKHW4EntryPoint@RFONTOBJ@@@Z @ 0x14018C724 (-GrepGetGlyphIndicesW@@YA-AV-$ReturnValueTracer@K@@AEAVUDCOBJ@@PEBGKPEAGKHW4EntryPoint@RFONTOBJ@.c)
 *     GreGetDCDpiScaleValue @ 0x14018D780 (GreGetDCDpiScaleValue.c)
 *     NtGdiGetGlyphIndicesWInternal @ 0x1401D6720 (NtGdiGetGlyphIndicesWInternal.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x14025A468 (-bRealizeFont@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_X.c)
 *     NtGdiExtTextOutW @ 0x14025F050 (NtGdiExtTextOutW.c)
 *     ?EPATHOBJ_bTextOutSimpleFill@@YA?AV?$ReturnValueTracer@H@@PEAVEPATHOBJ@@AEAVXDCOBJ@@AEAVRFONTOBJ@@PEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x140300244 (-EPATHOBJ_bTextOutSimpleFill@@YA-AV-$ReturnValueTracer@H@@PEAVEPATHOBJ@@AEAVXDCOBJ@@AEAVRFONTOBJ.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(_DWORD *a1, int a2)
{
  *a1 = a2;
  return a1;
}
