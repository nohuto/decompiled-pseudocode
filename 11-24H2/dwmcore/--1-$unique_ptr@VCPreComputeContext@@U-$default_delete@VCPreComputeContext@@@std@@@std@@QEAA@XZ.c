/*
 * XREFs of ??1?$unique_ptr@VCPreComputeContext@@U?$default_delete@VCPreComputeContext@@@std@@@std@@QEAA@XZ @ 0x1800BD8EC
 * Callers:
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x18003C140 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ??1CVisualTree@@UEAA@XZ @ 0x18008F0FC (--1CVisualTree@@UEAA@XZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180259E9C (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??1CLightStack@@QEAA@XZ @ 0x1800BD98C (--1CLightStack@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800BEF90 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??1?$vector_facade@VSubTreeContext@CPreComputeContext@@V?$buffer_impl@VSubTreeContext@CPreComputeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1801D7BEC (--1-$vector_facade@VSubTreeContext@CPreComputeContext@@V-$buffer_impl@VSubTreeContext@CPreComput.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<CPreComputeContext>::~unique_ptr<CPreComputeContext>(void ***a1)
{
  void **v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    operator delete(v1[191]);
    DynArrayImpl<0>::~DynArrayImpl<0>(v1 + 183);
    DynArrayImpl<0>::~DynArrayImpl<0>(v1 + 179);
    operator delete(v1[176]);
    CLightStack::~CLightStack((CLightStack *)(v1 + 147));
    operator delete(v1[144]);
    operator delete(v1[141]);
    operator delete(v1[138]);
    operator delete(v1[135]);
    detail::vector_facade<CPreComputeContext::SubTreeContext,detail::buffer_impl<CPreComputeContext::SubTreeContext,3,1,detail::liberal_expansion_policy>>::~vector_facade<CPreComputeContext::SubTreeContext,detail::buffer_impl<CPreComputeContext::SubTreeContext,3,1,detail::liberal_expansion_policy>>(v1);
    operator delete(v1, 0x628uLL);
  }
}
