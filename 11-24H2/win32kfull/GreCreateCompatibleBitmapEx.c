/*
 * XREFs of GreCreateCompatibleBitmapEx @ 0x1400135CC
 * Callers:
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1400370A0 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x140077F7C (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     _DrawIconEx @ 0x140078A10 (_DrawIconEx.c)
 *     CreateSpb @ 0x1400980B0 (CreateSpb.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1401EDE40 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     CreateCompatiblePublicDC @ 0x1401EE788 (CreateCompatiblePublicDC.c)
 *     RecolorDeskPattern @ 0x1402055C0 (RecolorDeskPattern.c)
 *     xxxSnapWindow @ 0x1402641A0 (xxxSnapWindow.c)
 *     ?CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z @ 0x14026797C (-CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z.c)
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1402B2304 (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 *     MNCreateAnimationBitmap @ 0x1402B3F8C (MNCreateAnimationBitmap.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1402DDA44 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     ?GreScalingDispatchEscape@@YAJPEAUtagGDISCALE_ESCAPE_ARGUMENT@@@Z @ 0x1403306E8 (-GreScalingDispatchEscape@@YAJPEAUtagGDISCALE_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     ?GrepCreateCompatibleBitmap@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKPEAU_LUID@@PEAG@Z @ 0x140013C4C (-GrepCreateCompatibleBitmap@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKPEAU_LUID@@PEAG@Z.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140018F7C (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x14001980C (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 */

HBITMAP __fastcall GreCreateCompatibleBitmapEx(
        HDC a1,
        int a2,
        int a3,
        unsigned int a4,
        struct _LUID *a5,
        unsigned __int16 *a6)
{
  HBITMAP CompatibleBitmap; // rbx
  _BYTE v11[128]; // [rsp+30h] [rbp-88h] BYREF

  OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v11, a1);
  CompatibleBitmap = GrepCreateCompatibleBitmap((struct OPTAPIDCOBJ *)v11, a2, a3, a4, a5, a6);
  OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v11);
  return CompatibleBitmap;
}
