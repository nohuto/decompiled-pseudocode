/*
 * XREFs of ??1CExpansionVector@ATL@@QEAA@XZ @ 0x14008958C
 * Callers:
 *     ??1CRegObject@ATL@@UEAA@XZ @ 0x1400895D4 (--1CRegObject@ATL@@UEAA@XZ.c)
 * Callees:
 *     ?ClearReplacements@CExpansionVector@ATL@@QEAAJXZ @ 0x14008A700 (-ClearReplacements@CExpansionVector@ATL@@QEAAJXZ.c)
 */

void __fastcall ATL::CExpansionVector::~CExpansionVector(ATL::CExpansionVector *this)
{
  ATL::CExpansionVector::ClearReplacements(this);
  ATL::CSimpleMap<unsigned short *,unsigned short *,ATL::CExpansionVectorEqualHelper>::RemoveAll((__int64)this);
}
