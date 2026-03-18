/*
 * XREFs of GetDpiCacheSlot @ 0x1C00EB0D0
 * Callers:
 *     PrepareHDCBITSBitmap @ 0x1C0016A3C (PrepareHDCBITSBitmap.c)
 *     GetDPIServerInfoForDpi @ 0x1C001BA00 (GetDPIServerInfoForDpi.c)
 *     GetOemBitmapInfoForDpi @ 0x1C007684C (GetOemBitmapInfoForDpi.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1C0080794 (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     ?GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z @ 0x1C0089130 (-GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z.c)
 *     NtUserGetActiveProcessesDpis @ 0x1C00942F0 (NtUserGetActiveProcessesDpis.c)
 *     GetCaptionHeight @ 0x1C00EA380 (GetCaptionHeight.c)
 *     SetTiledRect @ 0x1C00EA538 (SetTiledRect.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00EA700 (xxxInitSendValidateMinMaxInfoEx.c)
 *     GetWindowBordersForDpiWithCompatFlags2 @ 0x1C00EB23C (GetWindowBordersForDpiWithCompatFlags2.c)
 *     ?CalculateContentRect@@YA?AUtagRECT@@PEBUtagWND@@PEAH@Z @ 0x1C00EB6D0 (-CalculateContentRect@@YA-AUtagRECT@@PEBUtagWND@@PEAH@Z.c)
 *     xxxCalcClientRect @ 0x1C010BA30 (xxxCalcClientRect.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01BEDAC (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     NtUserForceWindowToDpiForTest @ 0x1C01CF100 (NtUserForceWindowToDpiForTest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDpiCacheSlot(int a1)
{
  unsigned int v1; // r9d
  int v3; // edx

  v1 = -1;
  if ( a1 == *(unsigned __int16 *)(gpsi + 6998LL) )
  {
    return 0;
  }
  else if ( a1 >= 96 && a1 == 24 * (a1 / 0x18u) )
  {
    v3 = (a1 - 72) / 24;
    if ( v3 >= 18 )
      return (unsigned int)-1;
    return (unsigned int)v3;
  }
  return v1;
}
