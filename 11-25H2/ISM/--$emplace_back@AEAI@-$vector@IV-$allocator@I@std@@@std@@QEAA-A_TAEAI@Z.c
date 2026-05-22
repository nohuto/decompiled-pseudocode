/*
 * XREFs of ??$emplace_back@AEAI@?$vector@IV?$allocator@I@std@@@std@@QEAA?A_TAEAI@Z @ 0x180066C38
 * Callers:
 *     ?RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_NW4FrameRoutingSource@@@Z @ 0x180089FF8 (-RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_NW4Fram.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEAI@?$vector@IV?$allocator@I@std@@@std@@AEAAPEAIQEAIAEAI@Z @ 0x180066D78 (--$_Emplace_reallocate@AEAI@-$vector@IV-$allocator@I@std@@@std@@AEAAPEAIQEAIAEAI@Z.c)
 */

__int64 __fastcall std::vector<unsigned int>::emplace_back<unsigned int &>(__int64 a1, _DWORD *a2)
{
  _DWORD *v3; // rdx
  __int64 v4; // rdx

  v3 = *(_DWORD **)(a1 + 8);
  if ( v3 == *(_DWORD **)(a1 + 16) )
    return std::vector<unsigned int>::_Emplace_reallocate<unsigned int &>(a1, v3, a2);
  *v3 = *a2;
  v4 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v4 + 4;
  return v4;
}
