/*
 * XREFs of ?RemoveAll@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAXXZ @ 0x14003E188
 * Callers:
 *     ?RemoveAt@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140007C94 (-RemoveAt@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAXPEAU__POSITION@@@Z.c)
 *     ?FreeNode@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x14003DD2C (-FreeNode@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@AEAAXPEAVCNode@12@@Z.c)
 *     ??1CDeviceGraphObjectCache@@MEAA@XZ @ 0x14003E08C (--1CDeviceGraphObjectCache@@MEAA@XZ.c)
 * Callees:
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x14000ED80 (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 *     ?FreeNode@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x14003DD2C (-FreeNode@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@AEAAXPEAVCNode@12@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14005619C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CAtlList<CConnectionNode *,CConnectionNodeTraits>::RemoveAll(__int64 *a1)
{
  ATL::CAtlPlex **v2; // rcx
  __int64 *v3; // rdx

  while ( a1[2] )
  {
    v3 = (__int64 *)*a1;
    if ( !*a1 )
      ATL::AtlThrowImpl(-2147467259);
    *a1 = *v3;
    ATL::CAtlList<CConnectionNode *,CConnectionNodeTraits>::FreeNode((__int64)a1, v3);
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[4] = 0LL;
  v2 = (ATL::CAtlPlex **)a1[3];
  if ( v2 )
  {
    ATL::CAtlPlex::FreeDataChain(v2);
    a1[3] = 0LL;
  }
}
