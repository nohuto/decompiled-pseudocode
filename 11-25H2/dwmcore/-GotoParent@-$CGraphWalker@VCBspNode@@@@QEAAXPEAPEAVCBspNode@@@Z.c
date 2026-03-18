/*
 * XREFs of ?GotoParent@?$CGraphWalker@VCBspNode@@@@QEAAXPEAPEAVCBspNode@@@Z @ 0x180223EB8
 * Callers:
 *     ??$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonListBuilder@@W4WalkDirection@@@Z @ 0x18010B864 (--$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonLi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CGraphWalker<CBspNode>::GotoParent(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  int v4; // r10d
  __int64 v5; // rcx
  int v6; // r9d
  __int64 v7; // rax

  result = 0LL;
  if ( *(_DWORD *)(a1 + 4) )
  {
    v4 = *(_DWORD *)(a1 + 40);
    v5 = 0LL;
    v6 = 0;
    if ( v4 )
    {
      *(_DWORD *)(a1 + 40) = v4 - 1;
      v7 = *(_QWORD *)(a1 + 32);
      v6 = *(_DWORD *)(v7 + 16LL * (unsigned int)(v4 - 1) + 8);
      v5 = *(_QWORD *)(v7 + 16LL * (unsigned int)(v4 - 1));
    }
    result = *(_QWORD *)(a1 + 16);
    --*(_DWORD *)(a1 + 4);
    *(_QWORD *)(a1 + 8) = result;
    *(_QWORD *)(a1 + 16) = v5;
    *(_DWORD *)(a1 + 24) = v6;
  }
  *a2 = result;
  return result;
}
