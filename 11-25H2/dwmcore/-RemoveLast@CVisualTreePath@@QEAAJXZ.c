/*
 * XREFs of ?RemoveLast@CVisualTreePath@@QEAAJXZ @ 0x1800083D0
 * Callers:
 *     ?GetWorldTransform@CVisual@@QEBAJAEBVCVisualTreePath@@W4WalkReason@@PEAVCMILMatrix@@@Z @ 0x180009D78 (-GetWorldTransform@CVisual@@QEBAJAEBVCVisualTreePath@@W4WalkReason@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ?clear_region@?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180008430 (-clear_region@-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreePat.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CVisualTreePath::RemoveLast(CVisualTreePath *this)
{
  int v2; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_QWORD *)this + 1) - *(_QWORD *)this == 16LL )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\visualtreepath.cpp",
      (const char *)0x8000FFFFLL,
      v2);
    return 2147549183LL;
  }
  else
  {
    detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::clear_region(
      this,
      (*((_QWORD *)this + 1) - 16LL - *(_QWORD *)this) >> 4,
      1LL);
    return 0LL;
  }
}
