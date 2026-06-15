/*
 * XREFs of ??1?$CAutoVectorPtr@G@ATL@@QEAA@XZ @ 0x140088EA4
 * Callers:
 *     _ATL::CExpansionVector::Add_::_1_::dtor$0 @ 0x140096D03 (_ATL--CExpansionVector--Add_--_1_--dtor$0.c)
 *     _ATL::CExpansionVector::Add_::_1_::dtor$1 @ 0x140096D15 (_ATL--CExpansionVector--Add_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall ATL::CAutoVectorPtr<unsigned short>::~CAutoVectorPtr<unsigned short>(void **a1)
{
  operator delete(*a1);
  *a1 = 0LL;
}
