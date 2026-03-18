/*
 * XREFs of ?SetRoot@CDesktopTree@@QEAAJPEAVCVisual@@@Z @ 0x18028B15C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 *     ??1CDesktopTree@@UEAA@XZ @ 0x18028AD60 (--1CDesktopTree@@UEAA@XZ.c)
 *     ?Create@CDesktopTree@@KAJPEAVCComposition@@PEAVCVisual@@U_LUID@@PEAPEAV1@@Z @ 0x18028AE08 (-Create@CDesktopTree@@KAJPEAVCComposition@@PEAVCVisual@@U_LUID@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?InsertChild@CVisual@@IEAAJPEAV1@0_N@Z @ 0x180093620 (-InsertChild@CVisual@@IEAAJPEAV1@0_N@Z.c)
 *     ?GetChildAt@CVisual@@QEBAPEAV1@I@Z @ 0x180188C50 (-GetChildAt@CVisual@@QEBAPEAV1@I@Z.c)
 *     ?RemoveChild@CVisual@@IEAAXPEAV1@@Z @ 0x1801C9458 (-RemoveChild@CVisual@@IEAAXPEAV1@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802412D4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDesktopTree::SetRoot(CVisual **this, CVisual **a2)
{
  struct CVisual *ChildAt; // rax
  CVisual *v5; // rcx
  __int64 v6; // r8
  const char *v7; // r9
  int inserted; // eax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  ChildAt = CVisual::GetChildAt(this[330], 0);
  if ( a2 != (CVisual **)ChildAt )
  {
    if ( ChildAt )
      CVisual::RemoveChild(v5, ChildAt, v6);
    if ( a2 )
    {
      LOBYTE(v7) = 1;
      inserted = CVisual::InsertChild(this[330], a2, 0LL, v7);
      if ( inserted < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x16F,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\desktoptree.cpp",
          (const char *)(unsigned int)inserted,
          v10);
    }
  }
  return 0LL;
}
