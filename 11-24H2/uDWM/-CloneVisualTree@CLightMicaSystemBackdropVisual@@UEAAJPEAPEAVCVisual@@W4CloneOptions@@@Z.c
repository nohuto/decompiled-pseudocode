/*
 * XREFs of ?CloneVisualTree@CLightMicaSystemBackdropVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800809D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180021E28 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CSystemBackdropVisual@@SAJW4SYSTEMBACKDROP_TYPE@@PEAPEAV1@@Z @ 0x180034870 (-Create@CSystemBackdropVisual@@SAJW4SYSTEMBACKDROP_TYPE@@PEAPEAV1@@Z.c)
 *     ?InitializeVisualTreeClone@CSystemBackdropVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180034A98 (-InitializeVisualTreeClone@CSystemBackdropVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLightMicaSystemBackdropVisual::CloneVisualTree(__int64 a1, CBaseObject **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  CBaseObject *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CBaseObject *v12; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v12 = 0LL;
  v4 = CSystemBackdropVisual::Create(4, &v12);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\lightmicasystembackdropvisual.cpp",
      (const char *)(unsigned int)v4,
      v10);
LABEL_8:
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v12);
    return v5;
  }
  v6 = v12;
  v7 = CSystemBackdropVisual::InitializeVisualTreeClone(a1, v12);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v12 = 0LL;
    *a2 = v6;
    v5 = 0;
    goto LABEL_8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xF,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\lightmicasystembackdropvisual.cpp",
    (const char *)(unsigned int)v7,
    v10);
  if ( v6 )
    CBaseObject::Release(v6);
  return v8;
}
