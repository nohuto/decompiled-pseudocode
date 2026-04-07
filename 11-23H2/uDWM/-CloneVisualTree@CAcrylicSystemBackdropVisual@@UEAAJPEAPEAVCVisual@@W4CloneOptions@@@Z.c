/*
 * XREFs of ?CloneVisualTree@CAcrylicSystemBackdropVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800A3D40
 * Callers:
 *     <none>
 * Callees:
 *     ?InitializeVisualTreeClone@CSystemBackdropVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18000706C (-InitializeVisualTreeClone@CSystemBackdropVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?Create@CSystemBackdropVisual@@SAJW4SYSTEMBACKDROP_TYPE@@PEAPEAV1@@Z @ 0x180031BB8 (-Create@CSystemBackdropVisual@@SAJW4SYSTEMBACKDROP_TYPE@@PEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18009E810 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAcrylicSystemBackdropVisual::CloneVisualTree(__int64 a1, CBaseObject **a2, unsigned int a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  CBaseObject *v8; // rbx
  int v9; // eax
  int v10; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CBaseObject *v13; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v13 = 0LL;
  v6 = CSystemBackdropVisual::Create(3, &v13);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD,
      (__int64)"clientcore\\windows\\dwm\\udwm\\acrylicsystembackdropvisual.cpp",
      (const char *)(unsigned int)v6);
LABEL_5:
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v13);
    return v7;
  }
  v8 = v13;
  v9 = CSystemBackdropVisual::InitializeVisualTreeClone(a1, (__int64)v13, a3);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF,
      (__int64)"clientcore\\windows\\dwm\\udwm\\acrylicsystembackdropvisual.cpp",
      (const char *)(unsigned int)v9);
    v7 = v10;
    goto LABEL_5;
  }
  *a2 = v8;
  return 0LL;
}
