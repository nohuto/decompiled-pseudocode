/*
 * XREFs of ??R?$default_delete@VCPreComputeContext@@@std@@QEBAXPEAVCPreComputeContext@@@Z @ 0x1801E3B7C
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800FC890 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??1CLightStack@@QEAA@XZ @ 0x1800E3D8C (--1CLightStack@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800E54D0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??1?$vector_facade@VSubTreeContext@CPreComputeContext@@V?$buffer_impl@VSubTreeContext@CPreComputeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1801E3C1C (--1-$vector_facade@VSubTreeContext@CPreComputeContext@@V-$buffer_impl@VSubTreeContext@CPreComput.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::default_delete<CPreComputeContext>::operator()(__int64 a1, void **a2)
{
  if ( a2 )
  {
    operator delete(a2[191]);
    DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(a2 + 183));
    DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(a2 + 179));
    operator delete(a2[176]);
    CLightStack::~CLightStack((CLightStack *)(a2 + 147));
    operator delete(a2[144]);
    operator delete(a2[141]);
    operator delete(a2[138]);
    operator delete(a2[135]);
    detail::vector_facade<CPreComputeContext::SubTreeContext,detail::buffer_impl<CPreComputeContext::SubTreeContext,3,1,detail::liberal_expansion_policy>>::~vector_facade<CPreComputeContext::SubTreeContext,detail::buffer_impl<CPreComputeContext::SubTreeContext,3,1,detail::liberal_expansion_policy>>(a2);
    operator delete(a2, 0x628uLL);
  }
}
