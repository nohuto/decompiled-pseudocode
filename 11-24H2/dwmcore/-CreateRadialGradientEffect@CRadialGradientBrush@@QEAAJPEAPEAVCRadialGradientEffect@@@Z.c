/*
 * XREFs of ?CreateRadialGradientEffect@CRadialGradientBrush@@QEAAJPEAPEAVCRadialGradientEffect@@@Z @ 0x1802A2B94
 * Callers:
 *     ?AddRadialGradientBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCRadialGradientBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1802AD670 (-AddRadialGradientBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCRadialGradientBrush@@_NPEAPEAVCRe.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCRadialGradientEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18020FF64 (--1-$com_ptr_t@VCRadialGradientEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VCRadialGradientEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1802A2B4C (--4-$com_ptr_t@VCRadialGradientEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?IsCenteredGradient@CRadialGradientBrush@@AEBA_NXZ @ 0x1802A3114 (-IsCenteredGradient@CRadialGradientBrush@@AEBA_NXZ.c)
 *     ?reset@?$com_ptr_t@VCRadialGradientEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1802A32AC (-reset@-$com_ptr_t@VCRadialGradientEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Create@CRadialGradientEffect@@SAJ_NPEAPEAV1@@Z @ 0x1802DBC94 (-Create@CRadialGradientEffect@@SAJ_NPEAPEAV1@@Z.c)
 */

__int64 __fastcall CRadialGradientBrush::CreateRadialGradientEffect(
        CRadialGradientBrush *this,
        struct CRadialGradientEffect **a2)
{
  __int64 *v2; // rdi
  bool v3; // zf
  __int64 *v6; // rcx
  bool IsCenteredGradient; // al
  int v8; // eax
  unsigned int v9; // ebx
  __int64 *v10; // rdx
  struct CRadialGradientEffect *v11; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CRadialGradientEffect *v14; // [rsp+30h] [rbp+8h] BYREF

  v14 = 0LL;
  v2 = (__int64 *)((char *)this + 240);
  v3 = *((_QWORD *)this + 30) == 0LL;
  v6 = (__int64 *)&v14;
  if ( !v3 )
  {
    v10 = v2;
    goto LABEL_6;
  }
  wil::com_ptr_t<CRadialGradientEffect,wil::err_returncode_policy>::reset(&v14);
  IsCenteredGradient = CRadialGradientBrush::IsCenteredGradient(this);
  v8 = CRadialGradientEffect::Create(IsCenteredGradient, &v14);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = (__int64 *)&v14;
    v6 = v2;
LABEL_6:
    wil::com_ptr_t<CRadialGradientEffect,wil::err_returncode_policy>::operator=(v6, v10);
    v11 = v14;
    v14 = 0LL;
    v9 = 0;
    *a2 = v11;
    goto LABEL_7;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x120,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\radialgradientbrush.cpp",
    (const char *)(unsigned int)v8);
LABEL_7:
  wil::com_ptr_t<CRadialGradientEffect,wil::err_returncode_policy>::~com_ptr_t<CRadialGradientEffect,wil::err_returncode_policy>((__int64 *)&v14);
  return v9;
}
