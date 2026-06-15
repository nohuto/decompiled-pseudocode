/*
 * XREFs of ?NewNode@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCProcessNode@@PEAV312@1@Z @ 0x1400261A4
 * Callers:
 *     ?InsertAfter@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCProcessNode@@@Z @ 0x140045A70 (-InsertAfter@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPE.c)
 *     ?InsertBefore@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCProcessNode@@@Z @ 0x140045AC8 (-InsertBefore@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAP.c)
 * Callees:
 *     ?GetFreeNode@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXXZ @ 0x140026204 (-GetFreeNode@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXX.c)
 */

__int64 *__fastcall ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::NewNode(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *result; // rax
  __int64 v9; // r10

  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode();
  result = *(__int64 **)(a1 + 32);
  v9 = *result;
  result[2] = *a2;
  *(_QWORD *)(a1 + 32) = v9;
  *result = a4;
  result[1] = a3;
  ++*(_QWORD *)(a1 + 16);
  return result;
}
