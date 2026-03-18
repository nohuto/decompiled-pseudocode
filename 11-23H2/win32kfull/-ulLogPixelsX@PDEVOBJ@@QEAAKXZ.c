/*
 * XREFs of ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C0114ADC
 * Callers:
 *     GreEnumFonts @ 0x1C0003CEC (GreEnumFonts.c)
 *     cjCopyFontDataW @ 0x1C0004930 (cjCopyFontDataW.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVXDCOBJ@@@Z @ 0x1C00CC9A8 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVXDCOBJ@@@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C00CD6B0 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z @ 0x1C0112124 (-bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z.c)
 *     ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1C0112414 (-bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z.c)
 *     ?vGetNtoW@@YAXPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@@Z @ 0x1C0114928 (-vGetNtoW@@YAXPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@@Z.c)
 *     GreGetAspectRatioFilter @ 0x1C028DBC0 (GreGetAspectRatioFilter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PDEVOBJ::ulLogPixelsX(PDEVOBJ *this)
{
  unsigned int CurrentThreadDpiAwarenessContext; // eax

  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(this);
  if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 1) != 0 && (CurrentThreadDpiAwarenessContext & 0xF) - 1 > 1 )
    return (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
  else
    return *(unsigned int *)(*(_QWORD *)this + 2144LL);
}
