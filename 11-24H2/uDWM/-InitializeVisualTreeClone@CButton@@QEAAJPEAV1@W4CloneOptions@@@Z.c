/*
 * XREFs of ?InitializeVisualTreeClone@CButton@@QEAAJPEAV1@W4CloneOptions@@@Z @ 0x18003106C
 * Callers:
 *     ?CloneVisualTree@CButton@@MEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180030550 (-CloneVisualTree@CButton@@MEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0M@Z @ 0x18001DECC (-SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0M@Z.c)
 *     ?InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180021928 (-InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CButton::InitializeVisualTreeClone(float *a1, CContainerVisual *a2, __int64 a3)
{
  int v5; // eax
  unsigned int v6; // edi
  int v7; // eax
  unsigned int v8; // ebx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = CAtlasedRectsVisual::InitializeVisualTreeClone((__int64)a1, a2, a3);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4F,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\button.cpp",
      (const char *)(unsigned int)v5,
      v10);
    return v6;
  }
  else
  {
    v7 = CButton::SetVisualStates(
           a2,
           (const struct CBitmapSourceArray *)(a1 + 66),
           (const struct CBitmapSourceArray *)(a1 + 74),
           a1[89]);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x50,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\button.cpp",
        (const char *)(unsigned int)v7,
        v10);
      return v8;
    }
    else
    {
      return 0LL;
    }
  }
}
