/*
 * XREFs of ?FreeNode@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEAAXPEAVCNode@12@@Z @ 0x14000CC78
 * Callers:
 *     ?InnerRemove@?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@IEAAJPEAVCConnectionNode@@I@Z @ 0x14000CBF8 (-InnerRemove@-$CRealTimeSafeList@VCConnectionNode@@V-$CAtlList@PEAVCConnectionNode@@VCConnection.c)
 *     ?RemoveAll@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAXXZ @ 0x14000CCC0 (-RemoveAll@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAXXZ.c)
 *     ?RemoveHead@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAPEAVCConnectionNode@@XZ @ 0x14000CF44 (-RemoveHead@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAPEAVCConnectionN.c)
 *     ?RemoveAt@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAXPEAU__POSITION@@@Z @ 0x1400363BC (-RemoveAt@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAXPEAU__POSITION@@@.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAXXZ @ 0x14000CCC0 (-RemoveAll@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAXXZ.c)
 */

__int64 __fastcall ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::FreeNode(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  bool v3; // zf

  result = *(_QWORD *)(a1 + 32);
  *a2 = result;
  v3 = (*(_QWORD *)(a1 + 16))-- == 1LL;
  *(_QWORD *)(a1 + 32) = a2;
  if ( v3 )
    return ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::RemoveAll();
  return result;
}
