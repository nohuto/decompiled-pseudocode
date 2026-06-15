/*
 * XREFs of ?FreeNode@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x14003DD2C
 * Callers:
 *     ?RemoveAll@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAXXZ @ 0x14003E188 (-RemoveAll@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CAtlList<CConnectionNode *,CConnectionNodeTraits>::FreeNode(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  bool v3; // zf

  result = *(_QWORD *)(a1 + 32);
  *a2 = result;
  v3 = (*(_QWORD *)(a1 + 16))-- == 1LL;
  *(_QWORD *)(a1 + 32) = a2;
  if ( v3 )
    return ATL::CAtlList<CConnectionNode *,CConnectionNodeTraits>::RemoveAll();
  return result;
}
