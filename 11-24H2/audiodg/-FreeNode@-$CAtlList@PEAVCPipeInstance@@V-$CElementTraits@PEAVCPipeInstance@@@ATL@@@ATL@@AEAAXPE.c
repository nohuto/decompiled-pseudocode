/*
 * XREFs of ?FreeNode@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x14001D018
 * Callers:
 *     ?CleanupPipeInstanceList@@YAXAEAV?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@@Z @ 0x14001CFA4 (-CleanupPipeInstanceList@@YAXAEAV-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstan.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::FreeNode(__int64 a1, _QWORD *a2)
{
  bool v2; // zf

  *a2 = *(_QWORD *)(a1 + 32);
  v2 = (*(_QWORD *)(a1 + 16))-- == 1LL;
  *(_QWORD *)(a1 + 32) = a2;
  if ( v2 )
    ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::RemoveAll(a1);
}
