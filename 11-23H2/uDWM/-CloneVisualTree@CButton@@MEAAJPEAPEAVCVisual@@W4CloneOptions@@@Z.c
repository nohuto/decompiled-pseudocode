/*
 * XREFs of ?CloneVisualTree@CButton@@MEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x18000BBA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18000BD30 (-InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?Create@CButton@@SAJPEAPEAV1@@Z @ 0x1800367D4 (-Create@CButton@@SAJPEAPEAV1@@Z.c)
 *     ?SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0M@Z @ 0x18003A2D0 (-SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0M@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18009E810 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CButton::CloneVisualTree(float *a1, CButton **a2, unsigned int a3)
{
  int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // r8
  CButton *v9; // rbx
  int v10; // eax
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rdx
  int v15; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CButton *v17; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v17 = 0LL;
  v6 = CButton::Create(&v17);
  v7 = v6;
  if ( v6 < 0 )
  {
    v12 = (unsigned int)v6;
    v13 = 71LL;
  }
  else
  {
    v8 = a3;
    v9 = v17;
    v10 = CAtlasedRectsVisual::InitializeVisualTreeClone(a1, v17, v8);
    v7 = v10;
    if ( v10 < 0 )
    {
      v14 = 82LL;
    }
    else
    {
      v10 = CButton::SetVisualStates(
              v9,
              (const struct CBitmapSourceArray *)(a1 + 78),
              (const struct CBitmapSourceArray *)(a1 + 86),
              a1[101]);
      v7 = v10;
      if ( v10 >= 0 )
      {
        *a2 = v9;
        return 0LL;
      }
      v14 = 83LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\button.cpp",
      (const char *)(unsigned int)v10,
      v15);
    v12 = v7;
    v13 = 72LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\button.cpp",
    (const char *)v12,
    v15);
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v17);
  return v7;
}
