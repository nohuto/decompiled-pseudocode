/*
 * XREFs of ?GotoPostChild@?$CGraphWalker@VCBspNode@@@@QEAAJPEAPEAVCBspNode@@@Z @ 0x180217CCC
 * Callers:
 *     ??$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonListBuilder@@W4WalkDirection@@@Z @ 0x18016A4A4 (--$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonLi.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Push@?$CWatermarkStack@UCFrame@?$CGraphWalker@VCBspNode@@@@$0EA@$01$09@@QEAAJAEBUCFrame@?$CGraphWalker@VCBspNode@@@@@Z @ 0x1801D18B4 (-Push@-$CWatermarkStack@UCFrame@-$CGraphWalker@VCBspNode@@@@$0EA@$01$09@@QEAAJAEBUCFrame@-$CGrap.c)
 */

__int64 __fastcall CGraphWalker<CBspNode>::GotoPostChild(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdi
  unsigned int v3; // esi
  __int64 v6; // rdi
  int v8; // eax
  __int64 v9; // rcx
  __int128 v10; // [rsp+30h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v3 = 0;
  *a2 = 0LL;
  if ( *(_DWORD *)(a1 + 28) )
    v6 = *(_QWORD *)(v2 + 24);
  else
    v6 = *(_QWORD *)(v2 + 16);
  if ( v6 )
  {
    *(_QWORD *)&v10 = *(_QWORD *)(a1 + 16);
    *((_QWORD *)&v10 + 1) = *(unsigned int *)(a1 + 24);
    v8 = CWatermarkStack<CGraphWalker<CBspNode>::CFrame,64,2,10>::Push(a1 + 32, &v10);
    v3 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x169u, 0LL);
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 8);
      ++*(_DWORD *)(a1 + 4);
      *(_QWORD *)(a1 + 16) = v9;
      *(_QWORD *)(a1 + 8) = v6;
      *a2 = v6;
    }
  }
  return v3;
}
