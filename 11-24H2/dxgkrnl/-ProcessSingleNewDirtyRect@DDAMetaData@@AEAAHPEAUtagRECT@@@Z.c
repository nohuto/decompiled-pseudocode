/*
 * XREFs of ?ProcessSingleNewDirtyRect@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1401E7438
 * Callers:
 *     ?AddToMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@@Z @ 0x1401E6D54 (-AddToMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@@Z.c)
 *     ?ProcessMoveAgainstDirtyList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@PEAH@Z @ 0x1401E71F4 (-ProcessMoveAgainstDirtyList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@PEAH@Z.c)
 *     ?ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z @ 0x1401E7280 (-ProcessMoveAgainstMoveList@DDAMetaData@@AEAAHPEAU_D3DKMT_MOVE_RECT@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1402F30DC (-ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z.c)
 */

__int64 __fastcall DDAMetaData::ProcessSingleNewDirtyRect(DDAMetaData *this, struct tagRECT *a2)
{
  struct _D3DKMT_PRESENT_RGNS v3; // [rsp+20h] [rbp-28h] BYREF

  *(&v3.DirtyRectCount + 1) = 0;
  v3.pDirtyRects = a2;
  *(_OWORD *)&v3.MoveRectCount = 0LL;
  v3.DirtyRectCount = 1;
  return DDAMetaData::ProcessNewDirtyRects(this, &v3);
}
