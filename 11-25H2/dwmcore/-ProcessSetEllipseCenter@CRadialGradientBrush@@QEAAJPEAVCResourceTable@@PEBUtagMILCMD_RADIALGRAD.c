/*
 * XREFs of ?ProcessSetEllipseCenter@CRadialGradientBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RADIALGRADIENTBRUSH_SETELLIPSECENTER@@@Z @ 0x1802202BC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180033D10 (-SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CRadialGradientBrush::ProcessSetEllipseCenter(
        CRadialGradientBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RADIALGRADIENTBRUSH_SETELLIPSECENTER *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = CResource::SetPropertyImpl(
         this,
         (const struct AnimationHelper::AnimatedProperty *)&CRadialGradientBrush::sc_ellipseCenter,
         (char *)a3 + 8);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x106,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\radialgradientbrush.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
