/*
 * XREFs of ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00CE188
 * Callers:
 *     ?vUnlinkAllEudcFromRFONTList@@YAXXZ @ 0x1C007CF7C (-vUnlinkAllEudcFromRFONTList@@YAXXZ.c)
 *     ?UmfdZombifyAllUmfdFonts@@YAXXZ @ 0x1C007D048 (-UmfdZombifyAllUmfdFonts@@YAXXZ.c)
 *     prfntKillList @ 0x1C00C54B0 (prfntKillList.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C00CD6B0 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C010D900 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C01313A4 (-bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 *     vDeactivateEudcRFONTsWorker @ 0x1C013F37C (vDeactivateEudcRFONTsWorker.c)
 *     ?vFindAndReplaceRFONT@@YAXAEAVPDEVOBJ@@00@Z @ 0x1C02A6090 (-vFindAndReplaceRFONT@@YAXAEAVPDEVOBJ@@00@Z.c)
 * Callees:
 *     <none>
 */

struct RFONT *__fastcall PDEVOBJ::prfntActive(PDEVOBJ *this)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x800000) != 0 )
    return *(struct RFONT **)(*(_QWORD *)(v1 + 3496) + 1512LL);
  else
    return *(struct RFONT **)(v1 + 1512);
}
