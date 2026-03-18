/*
 * XREFs of ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14001D188
 * Callers:
 *     ?GrepPolyPatBlt@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x140016D8C (-GrepPolyPatBlt@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x14001C920 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     GreGetRandomRgn @ 0x140038FA0 (GreGetRandomRgn.c)
 *     ?GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z @ 0x1400C2818 (-GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z.c)
 *     NtGdiFastPolyPolyline @ 0x1400C7B70 (NtGdiFastPolyPolyline.c)
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x1400C95C8 (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     GreFillRgn @ 0x1400E2680 (GreFillRgn.c)
 *     GreFrameRgn @ 0x1400E2CD4 (GreFrameRgn.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x14010A148 (GreSpDwmSyncCaptureSurfaceBits.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x14010A3E4 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     ?pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z @ 0x14015AA00 (-pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z.c)
 *     NtGdiExtFloodFill @ 0x14015AE80 (NtGdiExtFloodFill.c)
 *     ?GrepGetBoundsRect@@YAKAEAVXDCOBJ@@PEAUtagRECT@@K@Z @ 0x14016E820 (-GrepGetBoundsRect@@YAKAEAVXDCOBJ@@PEAUtagRECT@@K@Z.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x140172FB0 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     GreSetDIBColorTable @ 0x140174640 (GreSetDIBColorTable.c)
 *     GreGetDIBColorTable @ 0x140174780 (GreGetDIBColorTable.c)
 *     NtGdiOffsetClipRgn @ 0x1401C8740 (NtGdiOffsetClipRgn.c)
 *     NtGdiPtVisible @ 0x1401EA4C0 (NtGdiPtVisible.c)
 *     ?GrepInvertRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@@Z @ 0x140202788 (-GrepInvertRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@@Z.c)
 *     ?GrepPolyTextOutW@@YAHAEAVXDCOBJ@@PEAUtagPOLYTEXTW@@IKW4EntryPoint@RFONTOBJ@@@Z @ 0x140229E64 (-GrepPolyTextOutW@@YAHAEAVXDCOBJ@@PEAUtagPOLYTEXTW@@IKW4EntryPoint@RFONTOBJ@@@Z.c)
 *     GreDrawStream @ 0x14025D364 (GreDrawStream.c)
 *     NtGdiUpdateColors @ 0x14030F8B0 (NtGdiUpdateColors.c)
 *     ??0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x140325BB8 (--0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?GrepDrawEscape@@YAHAEAVXDCOBJ@@HAEBV?$umptr_r@D@@@Z @ 0x14032669C (-GrepDrawEscape@@YAHAEAVXDCOBJ@@HAEBV-$umptr_r@D@@@Z.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z @ 0x1403275F8 (-iWndObjSetupExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z.c)
 *     ?GrepCheckBitmapBits@@YAHAEAVXDCOBJ@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z @ 0x14033B0AC (-GrepCheckBitmapBits@@YAHAEAVXDCOBJ@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z.c)
 *     NtGdiSetPixelFormat @ 0x14033CA10 (NtGdiSetPixelFormat.c)
 * Callees:
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x14001D1D8 (--0DLODCOBJ@@QEAA@XZ.c)
 */

DEVLOCKOBJ *__fastcall DEVLOCKOBJ::DEVLOCKOBJ(DEVLOCKOBJ *this)
{
  DLODCOBJ::DLODCOBJ((DEVLOCKOBJ *)((char *)this + 32));
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  return this;
}
