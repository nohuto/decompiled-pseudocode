/*
 * XREFs of ?CloneVisualTree@CWindowBackgroundTreatmentVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180030000
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180021E28 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CWindowBackgroundTreatmentVisual@@SAJPEAPEAV1@@Z @ 0x18002E688 (-Create@CWindowBackgroundTreatmentVisual@@SAJPEAPEAV1@@Z.c)
 *     ?InitializeVisualTreeClone@CWindowBackgroundTreatmentVisual@@QEAAJPEAV1@W4CloneOptions@@@Z @ 0x180030374 (-InitializeVisualTreeClone@CWindowBackgroundTreatmentVisual@@QEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowBackgroundTreatmentVisual::CloneVisualTree(__int64 a1, CBaseObject **a2, unsigned int a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  CBaseObject *v8; // rbx
  int v9; // eax
  unsigned int v10; // edi
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CBaseObject *v14; // [rsp+48h] [rbp+20h] BYREF

  v14 = 0LL;
  v6 = CWindowBackgroundTreatmentVisual::Create(&v14);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowbackgroundtreatmentvisual.cpp",
      (const char *)(unsigned int)v6,
      v12);
    if ( v14 )
      CBaseObject::Release(v14);
    return v7;
  }
  else
  {
    v8 = v14;
    v9 = CWindowBackgroundTreatmentVisual::InitializeVisualTreeClone(a1, v14, a3);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x29,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowbackgroundtreatmentvisual.cpp",
        (const char *)(unsigned int)v9,
        v12);
      wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v14);
      return v10;
    }
    else
    {
      *a2 = v8;
      return 0LL;
    }
  }
}
