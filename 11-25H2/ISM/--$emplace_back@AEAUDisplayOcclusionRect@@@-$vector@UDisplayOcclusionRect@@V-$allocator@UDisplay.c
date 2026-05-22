/*
 * XREFs of ??$emplace_back@AEAUDisplayOcclusionRect@@@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@QEAA?A_TAEAUDisplayOcclusionRect@@@Z @ 0x18019A3C0
 * Callers:
 *     ?OnOcclusionRectAdded@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUDisplayOcclusionRect@@@Z @ 0x18019A864 (-OnOcclusionRectAdded@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUDisplayOc.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEAUDisplayOcclusionRect@@@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAPEAUDisplayOcclusionRect@@QEAU2@AEAU2@@Z @ 0x180137A28 (--$_Emplace_reallocate@AEAUDisplayOcclusionRect@@@-$vector@UDisplayOcclusionRect@@V-$allocator@U.c)
 */

char *__fastcall std::vector<DisplayOcclusionRect>::emplace_back<DisplayOcclusionRect &>(__int64 a1, _OWORD *a2)
{
  __int64 v3; // rdx
  _OWORD *v4; // rdx
  __int64 v5; // rdx

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 == *(_QWORD *)(a1 + 16) )
    return std::vector<DisplayOcclusionRect>::_Emplace_reallocate<DisplayOcclusionRect &>(
             (const void **)a1,
             (_BYTE *)v3,
             a2);
  *(_OWORD *)v3 = *a2;
  *(_OWORD *)(v3 + 16) = a2[1];
  *(_OWORD *)(v3 + 32) = a2[2];
  *(_OWORD *)(v3 + 48) = a2[3];
  *(_OWORD *)(v3 + 64) = a2[4];
  *(_OWORD *)(v3 + 80) = a2[5];
  *(_OWORD *)(v3 + 96) = a2[6];
  v4 = (_OWORD *)(v3 + 128);
  *(v4 - 1) = a2[7];
  *v4 = a2[8];
  v4[1] = a2[9];
  v4[2] = a2[10];
  v5 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v5 + 176;
  return (char *)v5;
}
