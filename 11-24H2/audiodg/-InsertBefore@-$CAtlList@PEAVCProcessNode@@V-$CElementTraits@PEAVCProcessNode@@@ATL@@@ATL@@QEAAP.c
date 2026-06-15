/*
 * XREFs of ?InsertBefore@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCProcessNode@@@Z @ 0x1400457C8
 * Callers:
 *     ?FixupStreamPipe@CPipeInstance@@AEAAJXZ @ 0x14000FFF8 (-FixupStreamPipe@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x140010750 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x1400116C8 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ?AddHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x140025D1C (-AddHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?NewNode@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCProcessNode@@PEAV312@1@Z @ 0x140025EA4 (-NewNode@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAPEAVCN.c)
 */

__int64 *__fastcall ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertBefore(
        struct ATL::CAtlPlex **a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 *result; // rax
  __int64 **v6; // rcx

  if ( !a2 )
    return (__int64 *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddHead(a1, a3);
  result = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::NewNode(
             (__int64)a1,
             a3,
             *(_QWORD *)(a2 + 8),
             a2);
  v6 = *(__int64 ***)(a2 + 8);
  if ( v6 )
    *v6 = result;
  else
    *a1 = (struct ATL::CAtlPlex *)result;
  *(_QWORD *)(a2 + 8) = result;
  return result;
}
