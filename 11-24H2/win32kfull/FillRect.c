/*
 * XREFs of FillRect @ 0x140038250
 * Callers:
 *     xxxPaintRect @ 0x140036CDC (xxxPaintRect.c)
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1400370A0 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     DrawPushButton @ 0x140037B70 (DrawPushButton.c)
 *     DrawEdge @ 0x140037D18 (DrawEdge.c)
 *     ?DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z @ 0x140039270 (-DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x140039ADC (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x14007A41C (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     xxxDrawCaptionTemp @ 0x14007B5FC (xxxDrawCaptionTemp.c)
 *     ?FillCaptionGradient@@YAXPEAUHDC__@@PEBUtagRECT@@H@Z @ 0x14007D008 (-FillCaptionGradient@@YAXPEAUHDC__@@PEBUtagRECT@@H@Z.c)
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x14009583C (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     SetRedirectedWindow @ 0x1400B67B4 (SetRedirectedWindow.c)
 *     xxxDesktopPaintCallback @ 0x1401FA6B0 (xxxDesktopPaintCallback.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1401FFBD8 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x140204794 (-BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 *     PaintScreenBackground @ 0x140213220 (PaintScreenBackground.c)
 *     ?DrawSonar@@YAXPEAUHDC__@@@Z @ 0x14023A12C (-DrawSonar@@YAXPEAUHDC__@@@Z.c)
 *     ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1402BCCD0 (-xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z @ 0x1402E115C (-DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z.c)
 * Callees:
 *     GrePolyPatBlt @ 0x1400382E8 (GrePolyPatBlt.c)
 */

int __stdcall FillRect(HDC a1, LPCRECT a2, HBRUSH a3)
{
  HBRUSH v3; // r9
  LONG top; // edx
  int v7; // eax
  int v8; // eax
  _DWORD v10[4]; // [rsp+30h] [rbp-28h] BYREF
  HBRUSH v11; // [rsp+40h] [rbp-18h]

  v3 = a3;
  if ( (unsigned __int64)a3 - 1 <= 0x1E )
    v3 = *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19928) + 8LL * ((_QWORD)a3 - 1) + 4696);
  top = a2->top;
  v7 = a2->right - a2->left;
  v10[0] = a2->left;
  v10[2] = v7;
  v8 = a2->bottom - top;
  v10[1] = top;
  v11 = v3;
  v10[3] = v8;
  return GrePolyPatBlt(a1, 0xF00021u, (struct _POLYPATBLT *)v10, 1u);
}
