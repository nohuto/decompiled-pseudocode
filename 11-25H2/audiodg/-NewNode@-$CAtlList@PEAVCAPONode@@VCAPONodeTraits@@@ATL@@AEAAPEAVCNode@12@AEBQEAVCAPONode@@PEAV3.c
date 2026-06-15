/*
 * XREFs of ?NewNode@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCAPONode@@PEAV312@1@Z @ 0x14000B928
 * Callers:
 *     ?InsertBefore@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCAPONode@@@Z @ 0x140057540 (-InsertBefore@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVC.c)
 *     ?InsertAfter@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCAPONode@@@Z @ 0x140081508 (-InsertAfter@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCA.c)
 * Callees:
 *     ?GetFreeNode@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEAAXXZ @ 0x14000B9F4 (-GetFreeNode@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEAAXXZ.c)
 */

__int64 *__fastcall ATL::CAtlList<CAPONode *,CAPONodeTraits>::NewNode(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 *result; // rax
  __int64 v9; // r10

  ATL::CAtlList<CAPONode *,CAPONodeTraits>::GetFreeNode(a1);
  result = *(__int64 **)(a1 + 32);
  v9 = *result;
  result[2] = *a2;
  *(_QWORD *)(a1 + 32) = v9;
  *result = a4;
  result[1] = a3;
  ++*(_QWORD *)(a1 + 16);
  return result;
}
