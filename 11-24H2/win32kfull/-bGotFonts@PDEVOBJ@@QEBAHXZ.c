/*
 * XREFs of ?bGotFonts@PDEVOBJ@@QEBAHXZ @ 0x14005EF9C
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x14005DC90 (-bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?GrepGetTextFaceW@@YAHAEAVUDCOBJ@@HPEAGH@Z @ 0x14005EFB0 (-GrepGetTextFaceW@@YAHAEAVUDCOBJ@@HPEAGH@Z.c)
 *     ?GrepEnumFonts@@YAHAEAVXDCOBJ@@KKPEBGKPEAKPEAX@Z @ 0x1400BAB48 (-GrepEnumFonts@@YAHAEAVXDCOBJ@@KKPEBGKPEAKPEAX@Z.c)
 *     ?GrepGetCharSet@@YAKAEAVUDCOBJ@@@Z @ 0x1400BB50C (-GrepGetCharSet@@YAKAEAVUDCOBJ@@@Z.c)
 *     ?GrepGetOutlineTextMetrics@@YAKAEAVUDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1400BEDA0 (-GrepGetOutlineTextMetrics@@YAKAEAVUDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4EntryPoint@R.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVUDCOBJ@@@Z @ 0x1400BFB58 (-dwGetFontLanguageInfo@@YAKAEAVUDCOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PDEVOBJ::bGotFonts(PDEVOBJ *this)
{
  return (*(_DWORD *)(*(_QWORD *)this + 40LL) >> 6) & 1;
}
