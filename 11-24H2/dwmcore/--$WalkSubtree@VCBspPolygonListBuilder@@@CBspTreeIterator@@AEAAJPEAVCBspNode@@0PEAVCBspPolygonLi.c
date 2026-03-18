/*
 * XREFs of ??$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonListBuilder@@W4WalkDirection@@@Z @ 0x18016A4A4
 * Callers:
 *     ?PreComputePostSubgraph@CBspPreComputeHelper@@QEAAJPEAVCVisual@@PEBV2@@Z @ 0x180169400 (-PreComputePostSubgraph@CBspPreComputeHelper@@QEAAJPEAVCVisual@@PEBV2@@Z.c)
 *     ??$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonListBuilder@@W4WalkDirection@@@Z @ 0x18016A4A4 (--$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonLi.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonListBuilder@@W4WalkDirection@@@Z @ 0x18016A4A4 (--$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonLi.c)
 *     ?BuildPolygonList@CBspNode@@QEAAJPEAVCVisual@@@Z @ 0x18020A53C (-BuildPolygonList@CBspNode@@QEAAJPEAVCVisual@@@Z.c)
 *     ?GotoPostChild@?$CGraphWalker@VCBspNode@@@@QEAAJPEAPEAVCBspNode@@@Z @ 0x180217CCC (-GotoPostChild@-$CGraphWalker@VCBspNode@@@@QEAAJPEAPEAVCBspNode@@@Z.c)
 *     ?GotoParent@?$CGraphWalker@VCBspNode@@@@QEAAXPEAPEAVCBspNode@@@Z @ 0x18021812C (-GotoParent@-$CGraphWalker@VCBspNode@@@@QEAAXPEAPEAVCBspNode@@@Z.c)
 *     ?GotoPreChild@?$CGraphWalker@VCBspNode@@@@QEAAJPEAPEAVCBspNode@@@Z @ 0x1802206C0 (-GotoPreChild@-$CGraphWalker@VCBspNode@@@@QEAAJPEAPEAVCBspNode@@@Z.c)
 */

__int64 __fastcall CBspTreeIterator::WalkSubtree<CBspPolygonListBuilder>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  BOOL v7; // ebp
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // eax
  int v13; // eax
  int v14; // eax
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF
  __int64 v16; // [rsp+60h] [rbp+18h] BYREF

  v16 = a3;
  v7 = *(_BYTE *)(a2 + 56) == 0;
  v16 = 0LL;
  v15 = 0LL;
  *(_DWORD *)(a1 + 28) = v7;
  v8 = CGraphWalker<CBspNode>::GotoPreChild(a1, &v16);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x47u, 0LL);
    return v9;
  }
  if ( v16 )
  {
    v13 = CBspTreeIterator::WalkSubtree<CBspPolygonListBuilder>(a1, v16, a2, a4);
    v9 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x4Bu, 0LL);
      return v9;
    }
    CGraphWalker<CBspNode>::GotoParent(a1, &v16);
    *(_DWORD *)(a1 + 28) = v7;
  }
  v10 = CBspNode::BuildPolygonList(*(CBspNode **)(a4 + 8), *(struct CVisual **)(a4 + 56));
  v9 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x5Au, 0LL);
  }
  else
  {
    v11 = CGraphWalker<CBspNode>::GotoPostChild(a1, &v15);
    v9 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x5Cu, 0LL);
    }
    else if ( v15 )
    {
      v14 = CBspTreeIterator::WalkSubtree<CBspPolygonListBuilder>(a1, v15, a2, a4);
      v9 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x60u, 0LL);
      else
        CGraphWalker<CBspNode>::GotoParent(a1, &v16);
    }
  }
  return v9;
}
