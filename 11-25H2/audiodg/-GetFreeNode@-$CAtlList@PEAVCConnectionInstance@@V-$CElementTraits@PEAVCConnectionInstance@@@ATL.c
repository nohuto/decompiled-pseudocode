/*
 * XREFs of ?GetFreeNode@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@AEAAXXZ @ 0x140002FB8
 * Callers:
 *     ?AddHead@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCConnectionInstance@@@Z @ 0x140002EEC (-AddHead@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 *     ?NewNode@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCConnectionInstance@@PEAV312@1@Z @ 0x140002F58 (-NewNode@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 *     ?CreateAPOConnectionList@CPipeInstance@@AEAAJXZ @ 0x140004930 (-CreateAPOConnectionList@CPipeInstance@@AEAAJXZ.c)
 *     ?AddHead@?$CAtlList@PEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@@2@@ATL@@QEAAPEAU__POSITION@@AEBQEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@2@@Z @ 0x140005258 (-AddHead@-$CAtlList@PEAV-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionIns.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14005626C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetFreeNode(
        __int64 a1)
{
  unsigned __int64 v2; // rcx
  _QWORD *v3; // rax
  int v4; // r8d
  _QWORD *i; // rcx

  if ( *(_QWORD *)(a1 + 32) )
    return;
  v2 = *(unsigned int *)(a1 + 40);
  if ( v2 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v2 < 0x18 )
      goto LABEL_9;
    v2 *= 24LL;
  }
  v3 = malloc(v2 + 8);
  if ( !v3 )
LABEL_9:
    ATL::AtlThrowImpl(-2147024882);
  *v3 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v3;
  v4 = *(_DWORD *)(a1 + 40) - 1;
  for ( i = &v3[2 * v4 + 1 + (unsigned int)v4]; v4 >= 0; --v4 )
  {
    *i = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 32) = i;
    i -= 3;
  }
}
