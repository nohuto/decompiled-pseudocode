/*
 * XREFs of GetAppCompatFlags2 @ 0x140049EF0
 * Callers:
 *     xxxSetWindowStyle @ 0x1400318F0 (xxxSetWindowStyle.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x14003C16C (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     ?CalculateContentRect@@YA?AUtagRECT@@PEBUtagWND@@PEAH@Z @ 0x140049B34 (-CalculateContentRect@@YA-AUtagRECT@@PEBUtagWND@@PEAH@Z.c)
 *     NtUserCreateWindowEx @ 0x14004AF20 (NtUserCreateWindowEx.c)
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     xxxDrawCaptionBar @ 0x14006E51C (xxxDrawCaptionBar.c)
 *     GetWindowBordersForDpi @ 0x140074F80 (GetWindowBordersForDpi.c)
 *     GetResizeBorderWidthForDpi @ 0x140079418 (GetResizeBorderWidthForDpi.c)
 *     GetWindowFrameMetricForDpi @ 0x140079440 (GetWindowFrameMetricForDpi.c)
 *     ?pfsubAlternateFacename@@YAPEAUFONTSUB@@PEBG@Z @ 0x1400B8934 (-pfsubAlternateFacename@@YAPEAUFONTSUB@@PEBG@Z.c)
 *     ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1400FB420 (-bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z.c)
 *     xxxMenuWindowProc @ 0x14017E730 (xxxMenuWindowProc.c)
 *     ?GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z @ 0x1401A37F4 (-GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z.c)
 *     xxxDWP_UpdateUIState @ 0x1401C43F4 (xxxDWP_UpdateUIState.c)
 *     xxxMenuBarDraw @ 0x1401FBF4C (xxxMenuBarDraw.c)
 *     xxxDrawMenuBarUnderlines @ 0x1401FF370 (xxxDrawMenuBarUnderlines.c)
 *     xxxDDETrackGetMessageHook @ 0x14024E7A4 (xxxDDETrackGetMessageHook.c)
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 *     NtUserHideCursorNoCapture @ 0x1402985B0 (NtUserHideCursorNoCapture.c)
 *     xxxDDETrackWindowDying @ 0x1402B10D4 (xxxDDETrackWindowDying.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall GetAppCompatFlags2(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 *CurrentThreadNonPaged; // rax
  unsigned int v4; // edx
  __int64 v5; // r8

  v2 = (unsigned __int16)a1;
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  v4 = 0;
  if ( CurrentThreadNonPaged )
    v5 = *CurrentThreadNonPaged;
  else
    v5 = 0LL;
  if ( v2 >= *(_DWORD *)(v5 + 672) )
    return *(unsigned int *)(v5 + 688);
  return v4;
}
