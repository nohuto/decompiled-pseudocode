/*
 * XREFs of ?CloneVisualTree@CWindowBackgroundTreatmentVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180006AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnableTreatment@CWindowBackgroundTreatmentVisual@@QEAAXXZ @ 0x180006B58 (-EnableTreatment@CWindowBackgroundTreatmentVisual@@QEAAXXZ.c)
 *     ?InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18000C2A0 (-InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?Create@CWindowBackgroundTreatmentVisual@@SAJPEAPEAV1@@Z @ 0x1800361FC (-Create@CWindowBackgroundTreatmentVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18009E810 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowBackgroundTreatmentVisual::CloneVisualTree(
        __int64 a1,
        CWindowBackgroundTreatmentVisual **a2,
        unsigned int a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  CWindowBackgroundTreatmentVisual *v8; // rbx
  int v9; // eax
  unsigned int v10; // esi
  int v12; // [rsp+20h] [rbp-8h]
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CWindowBackgroundTreatmentVisual *v15; // [rsp+48h] [rbp+20h] BYREF

  v15 = 0LL;
  v6 = CWindowBackgroundTreatmentVisual::Create(&v15);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowbackgroundtreatmentvisual.cpp",
      (const char *)(unsigned int)v6,
      v12);
LABEL_8:
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v15);
    return v7;
  }
  v8 = v15;
  v9 = CVisual::InitializeVisualTreeClone(a1, v15, a3);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x34,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowbackgroundtreatmentvisual.cpp",
      (const char *)(unsigned int)v9,
      v12);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowbackgroundtreatmentvisual.cpp",
      (const char *)v10,
      v13);
    v7 = v10;
    goto LABEL_8;
  }
  if ( *(_BYTE *)(a1 + 280) )
    CWindowBackgroundTreatmentVisual::EnableTreatment(v8);
  *a2 = v8;
  return 0LL;
}
