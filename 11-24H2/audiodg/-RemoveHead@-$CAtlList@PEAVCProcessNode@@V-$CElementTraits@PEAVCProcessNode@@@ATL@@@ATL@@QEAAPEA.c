/*
 * XREFs of ?RemoveHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAVCProcessNode@@XZ @ 0x14000EBF0
 * Callers:
 *     ?Cleanup@CPipeInstance@@AEAAXXZ @ 0x14000E994 (-Cleanup@CPipeInstance@@AEAAXXZ.c)
 *     ?CleanupProcessNodeList@@YAXAEAV?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@@Z @ 0x14006BD0C (-CleanupProcessNodeList@@YAXAEAV-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCSubmixImpl@@V?$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@QEAAXXZ @ 0x14000EC54 (-RemoveAll@-$CAtlList@PEAVCSubmixImpl@@V-$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14005619C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveHead(__int64 a1)
{
  __int64 *v1; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  bool v5; // zf

  v1 = *(__int64 **)a1;
  if ( !*(_QWORD *)a1 )
    ATL::AtlThrowImpl(-2147467259);
  v3 = *v1;
  v4 = v1[2];
  *(_QWORD *)a1 = *v1;
  if ( v3 )
    *(_QWORD *)(v3 + 8) = 0LL;
  else
    *(_QWORD *)(a1 + 8) = 0LL;
  *v1 = *(_QWORD *)(a1 + 32);
  v5 = (*(_QWORD *)(a1 + 16))-- == 1LL;
  *(_QWORD *)(a1 + 32) = v1;
  if ( v5 )
    ATL::CAtlList<CSubmixImpl *,ATL::CElementTraits<CSubmixImpl *>>::RemoveAll(a1);
  return v4;
}
