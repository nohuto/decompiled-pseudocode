/*
 * XREFs of ?AddCVIToPreRenderList@CDesktopTree@@UEAAXAEAVCVIRenderList@@@Z @ 0x1801F4310
 * Callers:
 *     <none>
 * Callees:
 *     ?reserve_region@?$vector_facade@VCVIRenderList@@V?$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCVIRenderList@@_K0@Z @ 0x1801F4364 (-reserve_region@-$vector_facade@VCVIRenderList@@V-$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_.c)
 */

void __fastcall CDesktopTree::AddCVIToPreRenderList(CDesktopTree *this, struct CVIRenderList *a2)
{
  __int64 v3; // rax

  v3 = detail::vector_facade<CVIRenderList,detail::buffer_impl<CVIRenderList,16,1,detail::liberal_expansion_policy>>::reserve_region(
         (char *)this + 4560,
         0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*((_QWORD *)this + 571) - *((_QWORD *)this + 570)) >> 3));
  *(_OWORD *)v3 = *(_OWORD *)a2;
  *(_OWORD *)(v3 + 16) = *((_OWORD *)a2 + 1);
  *(_QWORD *)(v3 + 32) = *((_QWORD *)a2 + 4);
}
