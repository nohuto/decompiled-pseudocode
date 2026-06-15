/*
 * XREFs of ?RemoveAll@?$CAtlList@PEAGV?$CElementTraits@PEAG@ATL@@@ATL@@QEAAXXZ @ 0x18006BDF0
 * Callers:
 *     ?FreeNode@?$CAtlList@PEAGV?$CElementTraits@PEAG@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1800A1F2C (-FreeNode@-$CAtlList@PEAGV-$CElementTraits@PEAG@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z.c)
 *     s_ccCreateHandsfreeHidFileFromAudioId @ 0x1800E9AE0 (s_ccCreateHandsfreeHidFileFromAudioId.c)
 * Callees:
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x18004C18C (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A116C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?FreeNode@?$CAtlList@PEAGV?$CElementTraits@PEAG@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1800A1F2C (-FreeNode@-$CAtlList@PEAGV-$CElementTraits@PEAG@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z.c)
 */

void __fastcall ATL::CAtlList<unsigned short *,ATL::CElementTraits<unsigned short *>>::RemoveAll(__int64 a1)
{
  ATL::CAtlPlex **v2; // rcx

  while ( *(_QWORD *)(a1 + 16) )
  {
    if ( !*(_QWORD *)a1 )
      ATL::AtlThrowImpl(-2147467259);
    *(_QWORD *)a1 = **(_QWORD **)a1;
    ATL::CAtlList<unsigned short *,ATL::CElementTraits<unsigned short *>>::FreeNode(a1);
  }
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  v2 = *(ATL::CAtlPlex ***)(a1 + 24);
  if ( v2 )
  {
    ATL::CAtlPlex::FreeDataChain(v2);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
}
