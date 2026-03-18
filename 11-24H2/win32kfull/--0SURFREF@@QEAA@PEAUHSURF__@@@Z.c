/*
 * XREFs of ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x14001F1E8
 * Callers:
 *     GreExtGetObjectW @ 0x14001442C (GreExtGetObjectW.c)
 *     ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x1400148B8 (-CreateCompatibleSurface@@YA-AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z.c)
 *     ?GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x14001EB5C (-GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV-$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z.c)
 *     GreBeginGdiRenderingToDxSurface @ 0x140028238 (GreBeginGdiRenderingToDxSurface.c)
 *     GreEndGdiRenderingToDxSurface @ 0x1400283A0 (GreEndGdiRenderingToDxSurface.c)
 *     ?GreSetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV?$umptr_r@E@@PEAJ@Z @ 0x140028884 (-GreSetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV-$umptr_r@E@@PEAJ@Z.c)
 *     ?GreGetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV?$umptr_w@E@@PEAJ@Z @ 0x140029E58 (-GreGetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV-$umptr_w@E@@PEAJ@Z.c)
 *     GreReferenceObject @ 0x14002C9F4 (GreReferenceObject.c)
 *     GreDereferenceObject @ 0x14002CCA4 (GreDereferenceObject.c)
 *     GreSetBitmapContentOwner @ 0x14002D374 (GreSetBitmapContentOwner.c)
 *     GreSetRedirection @ 0x14002D4E8 (GreSetRedirection.c)
 *     RecreateRedirectionBitmap @ 0x140039394 (RecreateRedirectionBitmap.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x14008B5E8 (zzzUpdateWindowsAfterModeChange.c)
 *     ??0SURFFAKEOBJ@@QEAA@PEAUHDEV__@@PEAUDHPDEV__@@@Z @ 0x1400C26FC (--0SURFFAKEOBJ@@QEAA@PEAUHDEV__@@PEAUDHPDEV__@@@Z.c)
 *     ?GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z @ 0x1400C3880 (-GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z.c)
 *     GreSelectRedirectionBitmap @ 0x1400CD670 (GreSelectRedirectionBitmap.c)
 *     ?GreCreateDIBBrush@@YAPEAUHBRUSH__@@PEAXKIHH0@Z @ 0x1400E40C0 (-GreCreateDIBBrush@@YAPEAUHBRUSH__@@PEAXKIHH0@Z.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x14010A3E4 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     NtGdiMonoBitmap @ 0x14016DC80 (NtGdiMonoBitmap.c)
 *     ?MulCreateDeviceBitmap@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@K@Z @ 0x14017CFC0 (-MulCreateDeviceBitmap@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@K@Z.c)
 *     NtGdiGetDCforBitmap @ 0x14019DFA0 (NtGdiGetDCforBitmap.c)
 *     GreGetBitmapDimension @ 0x1401D21E8 (GreGetBitmapDimension.c)
 *     ?GetLockedSURFOBJ@UMPDSURFOBJ@@AEAAPEAU_SURFOBJ@@PEAU2@@Z @ 0x1401E4998 (-GetLockedSURFOBJ@UMPDSURFOBJ@@AEAAPEAU_SURFOBJ@@PEAU2@@Z.c)
 *     GreSetBitmapDimension @ 0x1401ED9E0 (GreSetBitmapDimension.c)
 *     ?UMPDDrvEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x14020FF40 (-UMPDDrvEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     ?TryUnlockSurface@UMPDOBJ@@SA_NPEAU_SURFOBJ@@@Z @ 0x140210860 (-TryUnlockSurface@UMPDOBJ@@SA_NPEAU_SURFOBJ@@@Z.c)
 *     NtGdiEngCreateBitmap @ 0x1402616D0 (NtGdiEngCreateBitmap.c)
 *     NtGdiEngDeleteSurface @ 0x140261B80 (NtGdiEngDeleteSurface.c)
 *     NtGdiEngMarkBandingSurface @ 0x14026C610 (NtGdiEngMarkBandingSurface.c)
 *     ?GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z @ 0x1403050D8 (-GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z.c)
 *     NtGdiGetColorSpaceforBitmap @ 0x140310000 (NtGdiGetColorSpaceforBitmap.c)
 *     GreGetBitmapDpiScaleValue @ 0x140330848 (GreGetBitmapDpiScaleValue.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1402FA8F4 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 */

SURFREF *__fastcall SURFREF::SURFREF(SURFREF *this, HSURF a2)
{
  __int64 v4; // rdx

  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>();
  LOBYTE(v4) = 5;
  *((_QWORD *)this + 4) = HmgShareLockCheck(a2, v4);
  return this;
}
