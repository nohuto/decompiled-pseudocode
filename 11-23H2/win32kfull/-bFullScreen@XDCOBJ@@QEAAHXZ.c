/*
 * XREFs of ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00C2470
 * Callers:
 *     GreGradientFill @ 0x1C0001610 (GreGradientFill.c)
 *     GreGetBoundsRect @ 0x1C0009A58 (GreGetBoundsRect.c)
 *     NtGdiFastPolyPolyline @ 0x1C000C9F0 (NtGdiFastPolyPolyline.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C0049090 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     GreMaskBlt @ 0x1C0079B5C (GreMaskBlt.c)
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x1C00B9650 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     GreGetAppClipBox @ 0x1C00BAD80 (GreGetAppClipBox.c)
 *     NtGdiPatBlt @ 0x1C00BD720 (NtGdiPatBlt.c)
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x1C00C0EB0 (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     ?GreExtTextOutRect@@YAHPEAUHDC__@@PEAUtagRECT@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1C00C32F8 (-GreExtTextOutRect@@YAHPEAUHDC__@@PEAUtagRECT@@W4EntryPoint@RFONTOBJ@@@Z.c)
 *     NtGdiAlphaBlend @ 0x1C00FBB30 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C0105030 (NtGdiBitBltInternal.c)
 *     ?GreExtTextOutWInternal@@YAHPEAUHDC__@@HHIPEAUtagRECT@@PEAGHPEAHPEAXKW4EntryPoint@RFONTOBJ@@@Z @ 0x1C0119E44 (-GreExtTextOutWInternal@@YAHPEAUHDC__@@HHIPEAUtagRECT@@PEAGHPEAHPEAXKW4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?GreDrawEscape@@YAHPEAUHDC__@@HAEBV?$umptr_r@D@@@Z @ 0x1C0274C3C (-GreDrawEscape@@YAHPEAUHDC__@@HAEBV-$umptr_r@D@@@Z.c)
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C02764C8 (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C028530C (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     GrePlgBlt @ 0x1C0290660 (GrePlgBlt.c)
 *     NtGdiTransparentBlt @ 0x1C02970E0 (NtGdiTransparentBlt.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C0299A10 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C02A7D44 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     NtGdiFillRgn @ 0x1C02A8780 (NtGdiFillRgn.c)
 *     NtGdiFrameRgn @ 0x1C02A8D40 (NtGdiFrameRgn.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C02AA0E8 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     NtGdiUpdateColors @ 0x1C02D1F70 (NtGdiUpdateColors.c)
 *     NtGdiExtFloodFill @ 0x1C02D3A10 (NtGdiExtFloodFill.c)
 *     ?GrePolyTextOutW@@YAHPEAUHDC__@@PEAUtagPOLYTEXTW@@IKW4EntryPoint@RFONTOBJ@@@Z @ 0x1C02D6D24 (-GrePolyTextOutW@@YAHPEAUHDC__@@PEAUtagPOLYTEXTW@@IKW4EntryPoint@RFONTOBJ@@@Z.c)
 *     NtGdiSwapBuffers @ 0x1C02D79B0 (NtGdiSwapBuffers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XDCOBJ::bFullScreen(XDCOBJ *this)
{
  __int64 result; // rax
  int v2; // ecx

  result = 0LL;
  if ( !*(_QWORD *)(*(_QWORD *)this + 496LL) )
    return 1LL;
  v2 = *(_DWORD *)(*(_QWORD *)this + 36LL);
  if ( (v2 & 0x1000) != 0 && (v2 & 0x4000) == 0 )
    return 1LL;
  return result;
}
