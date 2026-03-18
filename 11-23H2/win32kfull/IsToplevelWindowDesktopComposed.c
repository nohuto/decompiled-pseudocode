/*
 * XREFs of IsToplevelWindowDesktopComposed @ 0x1C00B4B3C
 * Callers:
 *     xxxGetTitleBarInfoEx @ 0x1C000C37C (xxxGetTitleBarInfoEx.c)
 *     DecomposeWindowIfNeeded @ 0x1C00243EC (DecomposeWindowIfNeeded.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C005E99C (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     EditionUpdateCursorOnMouseMove @ 0x1C007E6A0 (EditionUpdateCursorOnMouseMove.c)
 *     xxxSetLayeredWindow @ 0x1C00ABE84 (xxxSetLayeredWindow.c)
 *     ComposeWindowIfNeeded @ 0x1C00B4A8C (ComposeWindowIfNeeded.c)
 *     SetRedirectedWindow @ 0x1C00B4DF0 (SetRedirectedWindow.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00DE154 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxDWP_DoNCActivate @ 0x1C00E1260 (xxxDWP_DoNCActivate.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C01569C0 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C01E49A0 (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C01EF350 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C0222228 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     xxxDrawAnimatedRects @ 0x1C0224180 (xxxDrawAnimatedRects.c)
 *     xxxSnapWindow @ 0x1C0227938 (xxxSnapWindow.c)
 *     xxxRecreateSmallIcons @ 0x1C022D48C (xxxRecreateSmallIcons.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C0122A20 (_IsTopLevelWindow.c)
 */

__int64 __fastcall IsToplevelWindowDesktopComposed(__int64 a1)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx

  v2 = 0;
  if ( (unsigned int)IsTopLevelWindow(a1) )
    return (unsigned int)IsWindowDesktopComposed(v1) != 0;
  return v2;
}
