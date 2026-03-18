/*
 * XREFs of ?BuildPolygonList@CBspNode@@QEAAJPEAVCVisual@@@Z @ 0x18020A53C
 * Callers:
 *     ??$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonListBuilder@@W4WalkDirection@@@Z @ 0x18016A4A4 (--$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonLi.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@@Z @ 0x18020A5E8 (-AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@@Z.c)
 *     std::_Sort_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___ @ 0x18021D204 (std--_Sort_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___.c)
 */

__int64 __fastcall CBspNode::BuildPolygonList(CBspNode *this, struct CVisual *a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // edi
  __int64 v6; // rcx
  _QWORD *v8; // rsi
  struct CPolygon **i; // rbx
  int v11; // eax
  char v12; // [rsp+40h] [rbp+8h]

  v5 = 0;
  v6 = *((_QWORD *)this + 4);
  v8 = (_QWORD *)((char *)this + 40);
  if ( (unsigned __int64)((*((_QWORD *)this + 5) - v6) >> 3) > 1 )
  {
    LOBYTE(a4) = v12;
    std::_Sort_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___(v6, *v8, (*v8 - v6) >> 3, a4);
  }
  for ( i = (struct CPolygon **)*((_QWORD *)this + 4); i != (struct CPolygon **)*v8; ++i )
  {
    v11 = CVisual::AddToBspPolygonList(a2, *i);
    v5 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0xCFu, 0LL);
      return v5;
    }
  }
  return v5;
}
