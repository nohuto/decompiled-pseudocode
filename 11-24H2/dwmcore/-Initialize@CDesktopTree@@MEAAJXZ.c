/*
 * XREFs of ?Initialize@CDesktopTree@@MEAAJXZ @ 0x18028B020
 * Callers:
 *     ?Create@CDesktopTree@@KAJPEAVCComposition@@PEAVCVisual@@U_LUID@@PEAPEAV1@@Z @ 0x18028AE08 (-Create@CDesktopTree@@KAJPEAVCComposition@@PEAVCVisual@@U_LUID@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@CVisualTree@@MEAAJXZ @ 0x18008D660 (-Initialize@CVisualTree@@MEAAJXZ.c)
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x1800A081C (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 *     ??4?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisual@@@Z @ 0x18018E67C (--4-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisual@@@Z.c)
 *     ??2KeyframeInterpolation@@SAPEAX_K@Z @ 0x1801E3124 (--2KeyframeInterpolation@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CDesktopTree::Initialize(struct CComposition **this)
{
  CVisual *v2; // rax
  __int64 v3; // r8
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (CVisual *)KeyframeInterpolation::operator new(0x2A8uLL);
  if ( v2 )
    v2 = CVisual::CVisual(v2, this[3]);
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::operator=(this + 330, (__int64)v2, v3);
  this[9] = this[330];
  v4 = CVisualTree::Initialize((CVisualTree *)this);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x27,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\desktoptree.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
