/*
 * XREFs of BitBltSysBmp @ 0x14007B288
 * Callers:
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1400370A0 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     xxxRealDrawMenuItem @ 0x14003B17C (xxxRealDrawMenuItem.c)
 *     xxxDrawCaptionBar @ 0x14006E51C (xxxDrawCaptionBar.c)
 *     xxxTrackCaptionButton @ 0x14010B9EC (xxxTrackCaptionButton.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x140257BE8 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1402E2D6C (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     DrawSize @ 0x1402E30EC (DrawSize.c)
 *     MNDrawArrow @ 0x1402E9214 (MNDrawArrow.c)
 * Callees:
 *     GreBitBltInternal @ 0x14001970C (GreBitBltInternal.c)
 *     GreGetLayout @ 0x140037748 (GreGetLayout.c)
 *     GetOemBitmapInfo @ 0x14007B520 (GetOemBitmapInfo.c)
 *     GetOemBitmapInfoForDpi @ 0x14007B544 (GetOemBitmapInfoForDpi.c)
 *     IS_UI_LANGID @ 0x14007BEC8 (IS_UI_LANGID.c)
 *     NtGdiStretchBlt @ 0x1400D0D00 (NtGdiStretchBlt.c)
 *     GreGetDCDpiScaleValue @ 0x14018D780 (GreGetDCDpiScaleValue.c)
 *     ?PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z @ 0x140204AAC (-PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z.c)
 */

__int64 __fastcall BitBltSysBmp(HDC a1, int a2, int a3, unsigned int a4, int a5)
{
  __int16 *OemBitmapInfoForDpi; // rdi
  __int16 *OemBitmapInfo; // rsi
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  HDC v14; // r14
  unsigned int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v20; // r15d
  int v21; // ecx
  int DCDpiScaleValue; // eax

  OemBitmapInfoForDpi = 0LL;
  OemBitmapInfo = (__int16 *)GetOemBitmapInfo(a4);
  if ( (W32GetCurrentThreadDpiAwarenessContext(v11) & 0xF) == 0 )
  {
    DCDpiScaleValue = GreGetDCDpiScaleValue(a1);
    if ( DCDpiScaleValue > 1 )
      OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi(a4, (unsigned int)(96 * DCDpiScaleValue));
  }
  if ( a5 )
    v14 = PrepareHDCBITSBitmap((HDC)((unsigned __int64)a1 & -(__int64)(OemBitmapInfoForDpi != 0LL)));
  else
    v14 = *(HDC *)(*(_QWORD *)(W32GetUserSessionState(v13, v12) + 57008) + 72LL);
  if ( !v14 )
    return 0LL;
  if ( OemBitmapInfoForDpi )
    v15 = NtGdiStretchBlt(
            a1,
            OemBitmapInfo[3],
            v14,
            *OemBitmapInfoForDpi,
            OemBitmapInfoForDpi[1],
            OemBitmapInfoForDpi[2],
            OemBitmapInfoForDpi[3],
            13369376,
            0);
  else
    v15 = GreBitBltInternal(
            a1,
            a2,
            a3,
            OemBitmapInfo[2],
            OemBitmapInfo[3],
            v14,
            *OemBitmapInfo,
            OemBitmapInfo[1],
            0xCC0020u,
            0,
            0);
  v16 = v15;
  if ( v15
    && ((unsigned int)IS_UI_LANGID()
     || *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v18, v17) + 19928) + 7012LL) == 1037)
    && (GreGetLayout(a1) & 1) != 0
    && a4 - 11 <= 2 )
  {
    v20 = a2 + 2;
    if ( a4 != 12 )
      v20 = a2;
    v21 = OemBitmapInfo[3] - 4;
    if ( OemBitmapInfoForDpi )
      return (unsigned int)NtGdiStretchBlt(
                             a1,
                             v21,
                             v14,
                             *OemBitmapInfoForDpi + 2,
                             OemBitmapInfoForDpi[1] + 2,
                             OemBitmapInfoForDpi[2] - 4,
                             OemBitmapInfoForDpi[3] - 4,
                             -2134114272,
                             0);
    else
      return (unsigned int)GreBitBltInternal(
                             a1,
                             v20,
                             a3 + 2,
                             OemBitmapInfo[2] - 4,
                             v21,
                             v14,
                             *OemBitmapInfo + 2,
                             OemBitmapInfo[1] + 2,
                             0x80CC0020,
                             0,
                             0);
  }
  return v16;
}
