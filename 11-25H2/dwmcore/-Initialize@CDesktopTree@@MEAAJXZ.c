/*
 * XREFs of ?Initialize@CDesktopTree@@MEAAJXZ @ 0x1802963E0
 * Callers:
 *     ?Create@CDesktopTree@@KAJPEAVCComposition@@PEAVCVisual@@U_LUID@@PEAPEAV1@@Z @ 0x180295FA8 (-Create@CDesktopTree@@KAJPEAVCComposition@@PEAVCVisual@@U_LUID@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x1800CE84C (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 *     ??2KeyframeInterpolation@@SAPEAX_K@Z @ 0x1801126BC (--2KeyframeInterpolation@@SAPEAX_K@Z.c)
 *     ?Initialize@CVisualTree@@MEAAJXZ @ 0x1801ABE30 (-Initialize@CVisualTree@@MEAAJXZ.c)
 *     ??4?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisual@@@Z @ 0x1801AC95C (--4-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisual@@@Z.c)
 */

__int64 __fastcall CDesktopTree::Initialize(struct CComposition **this)
{
  CVisual *v2; // rax
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (CVisual *)KeyframeInterpolation::operator new(0x2A0uLL);
  if ( v2 )
    v2 = CVisual::CVisual(v2, this[3]);
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::operator=(this + 330, v2);
  this[9] = this[330];
  v3 = CVisualTree::Initialize((CVisualTree *)this);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x27,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\desktoptree.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
