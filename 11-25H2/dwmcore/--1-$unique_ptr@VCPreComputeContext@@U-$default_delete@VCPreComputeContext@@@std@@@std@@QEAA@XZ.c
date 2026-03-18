/*
 * XREFs of ??1?$unique_ptr@VCPreComputeContext@@U?$default_delete@VCPreComputeContext@@@std@@@std@@QEAA@XZ @ 0x1800E3CEC
 * Callers:
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x180098020 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ??1CVisualTree@@UEAA@XZ @ 0x180133CBC (--1CVisualTree@@UEAA@XZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180264D94 (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??1CLightStack@@QEAA@XZ @ 0x1800E3D8C (--1CLightStack@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800E54D0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??1?$vector_facade@VSubTreeContext@CPreComputeContext@@V?$buffer_impl@VSubTreeContext@CPreComputeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1801E3C1C (--1-$vector_facade@VSubTreeContext@CPreComputeContext@@V-$buffer_impl@VSubTreeContext@CPreComput.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
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
