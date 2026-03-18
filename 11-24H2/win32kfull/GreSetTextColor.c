/*
 * XREFs of GreSetTextColor @ 0x14007A278
 * Callers:
 *     DrawPushButton @ 0x140037B70 (DrawPushButton.c)
 *     ?DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z @ 0x140039270 (-DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z.c)
 *     xxxDrawState @ 0x14003A7F0 (xxxDrawState.c)
 *     BltColor @ 0x14003BFF0 (BltColor.c)
 *     xxxDrawMenuItem @ 0x140069860 (xxxDrawMenuItem.c)
 *     ?DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z @ 0x140079E7C (-DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z.c)
 *     BltIcon @ 0x140079FFC (BltIcon.c)
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x14007A41C (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     xxxDrawCaptionTemp @ 0x14007B5FC (xxxDrawCaptionTemp.c)
 *     ?DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x14007BF14 (-DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     FinalUserInit @ 0x1401CD2B4 (FinalUserInit.c)
 *     xxxDrawMenuBarUnderlines @ 0x1401FF370 (xxxDrawMenuBarUnderlines.c)
 *     RecolorDeskPattern @ 0x1402055C0 (RecolorDeskPattern.c)
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x140257BE8 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1402B5C10 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1402E8A4C (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreSetTextColor(HDC a1, int a2)
{
  unsigned int v3; // edi
  __int64 v4; // rax
  int v5; // ebx
  _QWORD v7[15]; // [rsp+20h] [rbp-78h] BYREF

  v3 = -1;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v7, a1);
  if ( v7[0] )
  {
    v4 = *(_QWORD *)(v7[0] + 976LL);
    v3 = *(_DWORD *)(v4 + 188);
    *(_DWORD *)(v4 + 188) = a2;
    v5 = a2 & 0x13FFFFFF;
    if ( v5 != v3 )
    {
      *(_DWORD *)(*(_QWORD *)(v7[0] + 976LL) + 184LL) = v5;
      *(_DWORD *)(*(_QWORD *)(v7[0] + 976LL) + 152LL) |= 7u;
    }
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v7);
  return v3;
}
