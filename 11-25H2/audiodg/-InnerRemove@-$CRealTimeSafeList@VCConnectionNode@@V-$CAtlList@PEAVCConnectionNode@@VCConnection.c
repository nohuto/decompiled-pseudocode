/*
 * XREFs of ?InnerRemove@?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@IEAAJPEAVCConnectionNode@@I@Z @ 0x14000CBF8
 * Callers:
 *     ?Remove@?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@QEAAJPEAVCConnectionNode@@@Z @ 0x14000CA4C (-Remove@-$CRealTimeSafeList@VCConnectionNode@@V-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeT.c)
 * Callees:
 *     ?FreeNode@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEAAXPEAVCNode@12@@Z @ 0x14000CC78 (-FreeNode@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEAAXPEAVCNode@12@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>::InnerRemove(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  unsigned int v4; // ebx
  __int64 v5; // r10
  _QWORD *i; // rdx
  _QWORD **v7; // r9
  _QWORD *v8; // rax
  _QWORD *v9; // rax

  v4 = 0;
  v5 = a1 + 48LL * a3;
  for ( i = *(_QWORD **)v5; ; i = (_QWORD *)*i )
  {
    if ( !i )
      return (unsigned int)-2005139430;
    if ( *(_QWORD *)(i[2] + 16LL) == *(_QWORD *)(a2 + 16) )
      break;
  }
  v7 = (_QWORD **)(i + 1);
  v8 = (_QWORD *)*i;
  if ( i == *(_QWORD **)v5 )
    *(_QWORD *)v5 = v8;
  else
    **v7 = v8;
  v9 = *v7;
  if ( i == *(_QWORD **)(v5 + 8) )
    *(_QWORD *)(v5 + 8) = v9;
  else
    *(_QWORD *)(*i + 8LL) = v9;
  ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::FreeNode(v5);
  return v4;
}
